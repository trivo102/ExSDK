package com.exam.exsdk.exsdk.di

import com.exam.exsdk.exsdk.presentation.viewmodel.PokemonViewModel
import org.koin.core.component.KoinComponent
import org.koin.core.component.get

class PokemonViewModelHelper : KoinComponent {
    fun getViewModel(): PokemonViewModel = get()
}
