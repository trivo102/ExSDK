package com.exam.exsdk.exsdk.domain.repository

import com.exam.exsdk.exsdk.domain.model.Pokemon
import com.exam.exsdk.exsdk.domain.model.PokemonDetail

interface PokemonRepository {
    suspend fun getPokemonList(limit: Int, offset: Int): List<Pokemon>
    suspend fun getPokemonDetail(id: Int): PokemonDetail
}
