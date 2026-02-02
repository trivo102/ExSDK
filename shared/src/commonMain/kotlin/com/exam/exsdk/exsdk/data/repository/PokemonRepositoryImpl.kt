package com.exam.exsdk.exsdk.data.repository

import com.exam.exsdk.exsdk.data.remote.api.PokemonApi
import com.exam.exsdk.exsdk.data.remote.dto.PokemonDetailDto
import com.exam.exsdk.exsdk.data.remote.dto.PokemonResponseDto
import com.exam.exsdk.exsdk.domain.model.Pokemon
import com.exam.exsdk.exsdk.domain.model.PokemonDetail
import com.exam.exsdk.exsdk.domain.repository.PokemonRepository
import io.ktor.client.call.body
import io.ktor.client.request.get
import io.ktor.client.request.parameter

class PokemonRepositoryImpl : PokemonRepository {
    private val client = PokemonApi.client

    override suspend fun getPokemonList(limit: Int, offset: Int): List<Pokemon> {
        val response: PokemonResponseDto = client.get(PokemonApi.BASE_URL) {
            parameter("limit", limit)
            parameter("offset", offset)
        }.body()
        
        return response.results.map { dto ->
            Pokemon(name = dto.name, url = dto.url)
        }
    }

    override suspend fun getPokemonDetail(id: Int): PokemonDetail {
        val response: PokemonDetailDto = client.get("${PokemonApi.BASE_URL}/$id/").body()
        
        return PokemonDetail(
            id = response.id,
            name = response.name,
            height = response.height,
            weight = response.weight,
            imageUrl = response.sprites.frontDefault ?: "",
            stats = response.stats.associate { it.stat.name to it.baseStat }
        )
    }
}
