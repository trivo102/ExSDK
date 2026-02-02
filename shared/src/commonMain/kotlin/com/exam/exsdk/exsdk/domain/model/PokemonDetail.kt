package com.exam.exsdk.exsdk.domain.model

data class PokemonDetail(
    val id: Int,
    val name: String,
    val height: Int,
    val weight: Int,
    val imageUrl: String,
    val stats: Map<String, Int>
)
