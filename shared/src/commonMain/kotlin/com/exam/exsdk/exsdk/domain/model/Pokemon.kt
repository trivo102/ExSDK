package com.exam.exsdk.exsdk.domain.model

data class Pokemon(
    val name: String,
    val url: String
) {
    val id: Int
        get() {
            val component = url.trimEnd('/').split('/').lastOrNull()
            return component?.toIntOrNull() ?: 0
        }
    
    val imageUrl: String
        get() = "https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/$id.png"
}
