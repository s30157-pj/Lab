#include <iostream>
#include <string>

using namespace std;

int main() {
    // Pobranie łańcucha od użytkownika
    // Pobranie liczby n od użytkownika
    cout << "Podaj liczbę n: ";
    string lancuch;
    getline(cin, lancuch);

    cout << "Podaj ilość elementów łańcucha: ";
    int n;
    cin >> n;

    // Konkatenacja łańcucha n razy
    string wynik;
    for (int i = 0; i < n; i++) {
        wynik += lancuch;
    }

    // Wyświetlenie wyniku
    cout << "Wynik konkatenacji: " << wynik << endl;

    return 0;
}