package com.exam.exsdk.exsdk.presentation.viewmodel

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.exam.exsdk.exsdk.domain.model.Pokemon
import com.exam.exsdk.exsdk.domain.model.PokemonDetail
import com.exam.exsdk.exsdk.domain.repository.PokemonRepository
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.asStateFlow
import kotlinx.coroutines.flow.update
import kotlinx.coroutines.launch

data class PokemonUiState(
    val pokemonList: List<Pokemon> = emptyList(),
    val selectedPokemon: PokemonDetail? = null,
    val isLoading: Boolean = false,
    val error: String? = null
)

class PokemonViewModel(
    private val repository: PokemonRepository
) : ViewModel() {
    private val _uiState = MutableStateFlow(PokemonUiState())
    val uiState: StateFlow<PokemonUiState> = _uiState.asStateFlow()

    init {
        loadPokemonList()
    }

    fun loadPokemonList() {
        viewModelScope.launch {
            _uiState.update { it.copy(isLoading = true, error = null) }
            try {
                // Fetch first 50 pokemon as requested
                val list = repository.getPokemonList(limit = 50, offset = 0)
                _uiState.update { it.copy(pokemonList = list, isLoading = false) }
            } catch (e: Exception) {
                _uiState.update { it.copy(error = e.message, isLoading = false) }
            }
        }
    }

    fun selectPokemon(pokemon: Pokemon) {
         viewModelScope.launch {
            _uiState.update { it.copy(isLoading = true, error = null, selectedPokemon = null) }
            try {
                val detail = repository.getPokemonDetail(pokemon.id)
                 _uiState.update { it.copy(selectedPokemon = detail, isLoading = false) }
            } catch (e: Exception) {
                 _uiState.update { it.copy(error = e.message, isLoading = false) }
            }
        }
    }
    
    fun clearSelection() {
        _uiState.update { it.copy(selectedPokemon = null) }
    }
}
