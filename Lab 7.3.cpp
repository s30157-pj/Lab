#include <iostream>
#include <cmath>

using namespace std;

const int rozmiarTablicy = 10;

// Funkcja do obliczania pola koła
double obliczPoleKola(double promien) {
    return M_PI * promien * promien;
}

int main() {
    double promien;
    
    // Pobieranie długości promienia od użytkownika
    cout << "Podaj długość promienia koła: ";
    cin >> promien;

    // Obliczanie pola koła
    double poleKola = obliczPoleKola(promien);

    // Wypisywanie pola koła na ekran
    cout << "Pole koła o promieniu " << promien << " wynosi: " << poleKola << endl;

    // Tworzenie dwuwymiarowej tablicy
    double tablica[rozmiarTablicy][rozmiarTablicy];

    // Wypełnianie tablicy wartościami pól koła, zwiększając o 3 za każdym razem
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            tablica[i][j] = poleKola;
            poleKola += 3.0;
        }
    }

    // Wypisywanie tablicy na ekran
    cout << "\nTablica dwuwymiarowa:\n";
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            cout << tablica[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
