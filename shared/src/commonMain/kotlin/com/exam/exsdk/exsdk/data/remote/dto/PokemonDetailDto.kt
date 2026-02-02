package com.exam.exsdk.exsdk.data.remote.dto

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class PokemonDetailDto(
    val id: Int,
    val name: String,
    val height: Int,
    val weight: Int,
    val sprites: SpritesDto,
    val stats: List<PokemonStatDto>
)

@Serializable
data class PokemonStatDto(
    @SerialName("base_stat")
    val baseStat: Int,
    val stat: StatInfoDto
)

@Serializable
data class StatInfoDto(
    val name: String
)

@Serializable
data class SpritesDto(
    @SerialName("front_default")
    val frontDefault: String?
)
