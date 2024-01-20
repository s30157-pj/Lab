#include <iostream>

using namespace std;

// Funkcja rekurencyjna do obliczania silni
unsigned long long silnia(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * silnia(n - 1);
    }
}

// Funkcja do sprawdzania podzielności przez 2, 3, 5 i 11
void sprawdzPodzielnosc(unsigned long long wynik) {
    cout << "Podzielność wyniku:" << endl;

    if (wynik % 2 == 0) {
        cout << "Przez 2: Tak" << endl;
    } else {
        cout << "Przez 2: Nie" << endl;
    }

    if (wynik % 3 == 0) {
        cout << "Przez 3: Tak" << endl;
    } else {
        cout << "Przez 3: Nie" << endl;
    }

    if (wynik % 5 == 0) {
        cout << "Przez 5: Tak" << endl;
    } else {
        cout << "Przez 5: Nie" << endl;
    }

    if (wynik % 11 == 0) {
        cout << "Przez 11: Tak" << endl;
    } else {
        cout << "Przez 11: Nie" << endl;
    }
}

int main() {
    int liczba;

    // Pobieranie liczby od użytkownika
    cout << "Podaj liczbe: ";
    cin >> liczba;

    // Obliczanie silni
    unsigned long long wynik = silnia(liczba);

    // Wyświetlanie wyniku
    cout << "Silnia z " << liczba << " to " << wynik << endl;

    // Sprawdzanie podzielności
    sprawdzPodzielnosc(wynik);

    return 0;
}
