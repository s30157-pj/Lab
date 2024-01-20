#include <iostream>
#include <string>

using namespace std;

// Struktura reprezentująca osobę
struct Osoba {
    string imie;
    string nazwisko;
};

int main() {
    const int liczbaOsob = 3;

    // Tablica dwuwymiarowa do przechowywania imion i nazwisk
    Osoba tabela[liczbaOsob];

    // Pobieranie danych od użytkownika
    for (int i = 0; i < liczbaOsob; ++i) {
        cout << "Podaj imię osoby " << i + 1 << ": ";
        cin >> tabela[i].imie;

        cout << "Podaj nazwisko osoby " << i + 1 << ": ";
        cin >> tabela[i].nazwisko;
    }

    // Wypisywanie dwuwymiarowej tabeli
    cout << "\nImiona i nazwiska trzech osób:\n";
    for (int i = 0; i < liczbaOsob; ++i) {
        cout << "Osoba " << i +1 << " : " << tabela[i].imie << " " << tabela[i].nazwisko << "\n";
    }

    return 0;
}
