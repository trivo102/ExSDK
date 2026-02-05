import SwiftUI
import ExSdkCore

public class PokemonViewModelWrapper: ObservableObject {
    private let viewModel: PokemonViewModel
    @Published var state: PokemonUiState
    
    public init() {
        self.viewModel = PokemonViewModelHelper().getViewModel()
        self.state = PokemonUiState(pokemonList: [], selectedPokemon: nil, isLoading: false, error: nil)
        self.startObserving()
    }
    
    private func startObserving() {
        self.viewModel.uiState.collect(collector: Collector<PokemonUiState> { state in
            DispatchQueue.main.async {
                self.state = state
            }
        }) { error in
            print("Error: \(String(describing: error))")
        }
    }
    
    func selectPokemon(pokemon: Pokemon) {
//        viewModel.selectPokemon(pokemon: pokemon)
        if let vc = topViewController() {
           EKYCFlowKt.startEkyc(controller: vc, onResult: { value in
               print("Result: \(String(describing: value))")
           })
        }
    }
    
    func clearSelection() {
        viewModel.clearSelection()
    }
}

public struct ContentView: View {
    @StateObject var viewModel = PokemonViewModelWrapper()
    
    public init() {}
    
    public var body: some View {
        NavigationView {
            VStack {
                if let selected = viewModel.state.selectedPokemon {
                    PokemonDetailView(pokemon: selected, onBack: {
                        viewModel.clearSelection()
                    })
                } else {
                    if viewModel.state.isLoading && viewModel.state.pokemonList.isEmpty {
                        ProgressView()
                    } else {
                        List(viewModel.state.pokemonList, id: \.name) { pokemon in
                            Button(action: {
                                viewModel.selectPokemon(pokemon: pokemon)
                            }) {
                                HStack {
                                    AsyncImage(url: URL(string: pokemon.imageUrl)) { image in
                                        image.resizable()
                                    } placeholder: {
                                        Color.gray
                                    }
                                    .frame(width: 50, height: 50)
                                    .clipShape(Circle())
                                    
                                    Text(pokemon.name.capitalized)
                                        .font(.headline)
                                }
                            }
                        }
                        .listStyle(.plain)
                        .navigationTitle("Pokemon SDK")
                    }
                }
            }
        }
    }
}

struct PokemonDetailView: View {
    let pokemon: PokemonDetail
    let onBack: () -> Void
    
    var body: some View {
        ScrollView {
            VStack(alignment: .center, spacing: 20) {
                HStack {
                    Button("Back") {
                        onBack()
                    }
                    Spacer()
                }
                .padding()
                
                AsyncImage(url: URL(string: pokemon.imageUrl)) { image in
                    image.resizable()
                } placeholder: {
                    ProgressView()
                }
                .frame(width: 200, height: 200)
                
                Text(pokemon.name.capitalized)
                    .font(.largeTitle)
                    .bold()
                
                HStack(spacing: 40) {
                    VStack {
                        Text("\(pokemon.height)")
                            .font(.title2)
                            .bold()
                        Text("Height")
                            .foregroundColor(.gray)
                    }
                    VStack {
                        Text("\(pokemon.weight)")
                            .font(.title2)
                            .bold()
                        Text("Weight")
                            .foregroundColor(.gray)
                    }
                }
                
                Divider()
                
                Text("Stats")
                    .font(.title2)
                    .bold()
                
                let sortedStats = pokemon.stats.map { ($0.key, $0.value) }.sorted { $0.0 < $1.0 }
                
                ForEach(sortedStats, id: \.0) { key, value in
                    HStack {
                        Text(key.capitalized)
                        Spacer()
                        Text("\(value)")
                            .bold()
                    }
                    .padding(.horizontal)
                    Divider()
                }
            }
            .padding()
        }
    }
}
