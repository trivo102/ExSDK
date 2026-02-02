package com.exam.exsdk.exsdk.di

import com.exam.exsdk.exsdk.data.repository.PokemonRepositoryImpl
import com.exam.exsdk.exsdk.domain.repository.PokemonRepository
import com.exam.exsdk.exsdk.presentation.viewmodel.PokemonViewModel
import org.koin.core.module.dsl.singleOf
import org.koin.core.module.dsl.viewModelOf
import org.koin.dsl.bind
import org.koin.dsl.module

val appModule = module {
    singleOf(::PokemonRepositoryImpl) bind PokemonRepository::class
    viewModelOf(::PokemonViewModel)
}
