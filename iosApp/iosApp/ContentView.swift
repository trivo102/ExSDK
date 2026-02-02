import SwiftUI
import Shared

class PokemonViewModelWrapper: ObservableObject {
    private let viewModel: PokemonViewModel
    @Published var state: PokemonUiState
    
    init() {
        // Use the helper to get ViewModel from Koin
        // Since we are in Swift, we might need a Helper in Kotlin or just instantiate if simple.
        // But better to use Koin. However, Koin in Swift is tricky to access directly without helper.
        // For simplicity in this demo, let's assume we can get it or create it.
        // Actually, we should use a simpler approach if Koin injection is hard: new PokemonViewModel() if possible,
        // but it has dependencies.
        // Let's rely on Koin being initialized and use a Helper in Shared or just create it if we exported the DI helper.
        // Ideally we expose a specific helper "provideViewModel()" in Kotlin.
        // But let's check if we can simply instantiate it if we have a constructor or helper.
        // For now, let's assume we use a Helper or dirty generic instantiation if possible.
        // Wait, `koinViewModel` is compose specific.
        // Let's modify the Kotlin side to expose a helper to get ViewModel?
        // Or better: Just create a simple Helper `PokemonViewModel` provider in Kotlin.
        
        // REVISION: I'll assume we can instantiate it or I'll quickly add a helper in shared module.
        // To be safe and fast, I will add a Helper function in `shared/iosMain` to get the ViewModel.
        // But for now, let's write the wrapper assuming `ProvideViewModel.shared.getPokemonViewModel()` exists.
        // Or simply:
        self.viewModel = PokemonViewModelHelper().getViewModel()
        self.state = PokemonUiState(pokemonList: [], selectedPokemon: nil, isLoading: false, error: nil)
        
        // Observe Flow
        // This is a naive polling or Task based observation since KMP Flow -> Swift is manual.
        self.startObserving()
    }
    
    private func startObserving() {
        // In a real app, use SKIE or KMP-NativeCoroutines.
        // Here we use the collect function with a completion handler or similar if exposed.
        // Kotlin flows expose `collect(collector, completionHandler)`.
        
        // Let's try a simple Task way if strictly KMP.
        // Actually, simpler: define a `CommonFlow` or usage `collectCommon` in Kotlin.
        // But I don't want to change Kotlin too much if not verified.
        // Let's use a closure callback based approach if default export allows.
        
        self.viewModel.uiState.collect(collector: Collector<PokemonUiState> { state in
            DispatchQueue.main.async {
                self.state = state
            }
        }) { error in
            print("Error: \(String(describing: error))")
        }
    }
    
    func selectPokemon(pokemon: Pokemon) {
        viewModel.selectPokemon(pokemon: pokemon)
    }
    
    func clearSelection() {
        viewModel.clearSelection()
    }
}


// Helper to access ViewModel from Koin in Swift
// Note: We need to add this helper in Kotlin side. I'll do that next.
// For now assuming existing or direct instantiation.
// Actually, I'll invoke a separate tool to create the Kotlin helper first?
// No, I can do it in parallel or sequential. I'll write the Swift code assuming the helper exists.

struct ContentView: View {
    @StateObject var viewModel = PokemonViewModelWrapper()
    
    var body: some View {
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
                        .navigationTitle("Pokemon")
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
                // Back Button (Custom or rely on NavStack but we are swapping views manually per logic)
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
                
                // Stats Grid
                // Need to convert Map<String, Int> to list for ForEach
                // Swift dictionary iteration
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
