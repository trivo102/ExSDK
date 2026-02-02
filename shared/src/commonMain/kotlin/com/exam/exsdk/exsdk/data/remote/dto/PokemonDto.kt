package com.exam.exsdk.exsdk.data.remote.dto

import kotlinx.serialization.Serializable

@Serializable
data class PokemonResponseDto(
    val count: Int,
    val next: String?,
    val previous: String?,
    val results: List<PokemonDto>
)

@Serializable
data class PokemonDto(
    val name: String,
    val url: String
)
