package com.exam.exsdk.ui

import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.foundation.lazy.items
import androidx.compose.material3.CircularProgressIndicator
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Text
import androidx.compose.runtime.*
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.platform.LocalContext
import androidx.compose.ui.unit.dp
import org.koin.compose.viewmodel.koinViewModel
import org.koin.core.annotation.KoinExperimentalAPI
import com.exam.exsdk.exsdk.presentation.viewmodel.PokemonViewModel
import coil3.compose.AsyncImage
import com.exam.exsdk.exsdk.ekyc.startEkyc
import com.exam.exsdk.utils.*

@OptIn(KoinExperimentalAPI::class)
@Composable
fun ExSdkContent() {
    MaterialTheme {
        val viewModel = koinViewModel<PokemonViewModel>()
        val state by viewModel.uiState.collectAsState()

        if (state.selectedPokemon != null) {
//            PokemonDetailScreen(
//                detail = state.selectedPokemon!!,
//                onBack = { viewModel.clearSelection() }
//            )
            val activity = LocalContext.current.findActivity()
            activity?.let {
                startEkyc(it,  onResult = {result: String? ->
                    println("EKYC result = $result")
                })
            }
        } else {
            PokemonListScreen(
                list = state.pokemonList,
                isLoading = state.isLoading,
                onItemClick = { viewModel.selectPokemon(it) }
            )
        }
    }
}

@Composable
fun PokemonListScreen(
    list: List<com.exam.exsdk.exsdk.domain.model.Pokemon>,
    isLoading: Boolean,
    onItemClick: (com.exam.exsdk.exsdk.domain.model.Pokemon) -> Unit
) {
    Box(modifier = Modifier.fillMaxSize()) {
        if (isLoading && list.isEmpty()) {
            CircularProgressIndicator(modifier = Modifier.align(Alignment.Center))
        }
        
        LazyColumn(
             modifier = Modifier.fillMaxSize(),
             contentPadding = PaddingValues(16.dp)
        ) {
            items(list) { pokemon ->
                Row(
                    modifier = Modifier
                        .fillMaxWidth()
                        .clickable { onItemClick(pokemon) }
                        .padding(16.dp),
                    verticalAlignment = Alignment.CenterVertically
                ) {
                     AsyncImage(
                        model = pokemon.imageUrl,
                        contentDescription = pokemon.name,
                        modifier = Modifier.size(64.dp)
                    )
                    Spacer(modifier = Modifier.width(16.dp))
                    Text(text = pokemon.name.replaceFirstChar { it.uppercase() })
                }
            }
        }
    }
}

@Composable
fun PokemonDetailScreen(
    detail: com.exam.exsdk.exsdk.domain.model.PokemonDetail,
    onBack: () -> Unit
) {
    Column(
        modifier = Modifier
            .fillMaxSize()
            .background(MaterialTheme.colorScheme.background)
            .padding(16.dp),
        horizontalAlignment = Alignment.CenterHorizontally
    ) {
        androidx.compose.material3.Button(onClick = onBack, modifier = Modifier.align(Alignment.Start)) {
            Text("Back")
        }
        Spacer(modifier = Modifier.height(32.dp))
        AsyncImage(
            model = detail.imageUrl,
            contentDescription = detail.name,
            modifier = Modifier.size(200.dp)
        )
        Text(text = detail.name.uppercase(), style = MaterialTheme.typography.headlineLarge)
        Text(text = "Height: ${detail.height}")
        Text(text = "Weight: ${detail.weight}")
        
        Spacer(modifier = Modifier.height(16.dp))
        Text(text = "Stats", style = MaterialTheme.typography.titleMedium)
        detail.stats.forEach { (name, value) ->
            Row(
                modifier = Modifier
                    .fillMaxWidth()
                    .padding(vertical = 4.dp),
                horizontalArrangement = Arrangement.SpaceBetween
            ) {
                Text(text = name.replaceFirstChar { it.uppercase() })
                Text(text = value.toString(), style = MaterialTheme.typography.bodyLarge)
            }
        }
    }
}