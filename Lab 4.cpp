#include <iostream>
#include <cmath>
using namespace std;

void task1() {
    int ilosc;

    cout << "Podaj ilosc elementow w tablicy: ";
    cin >> ilosc;

    int tablica[ilosc];
    int najwiekszyElement = 0;

    cout << "Podawaj elementy do tablicy:\n";
    for (int i = 0; i < ilosc; i++) {
        cin >> tablica[i];
        if (tablica[i] > najwiekszyElement) {
            najwiekszyElement = tablica[i];
        }
    }

    cout << "\nElementy w tablicy: ";
    for (int i = 0; i < ilosc; i++) {
        cout << tablica[i] << " ";
    }
    cout << "Najwiekszy to: " << najwiekszyElement;
}

void task2() {
    int ilosc;

    cout << "Podaj ilosc elementow w tablicy: ";
    cin >> ilosc;

    int tablica[ilosc];
    int iloscWystapien[ilosc] = {0};

    cout << "Podawaj elementy do tablicy:\n";
    for (int i = 0; i < ilosc; i++) {
        cin >> tablica[i];
    }

    bool czyUzyty[ilosc] = {false};
    for (int i = 0; i < ilosc; i++) {
        for (int j = i + 1; j < ilosc; j++) {
            if (tablica[i] == tablica[j] && !czyUzyty[j]) {
                iloscWystapien[i]++;
                czyUzyty[j] = true;
            }
        }
    }

    int najwiecejIndex = 0;
    int najwiecej = 0;
    for (int i = 0; i < ilosc; i++) {
        if (iloscWystapien[i] > najwiecej) {
            najwiecej = iloscWystapien[i];
            najwiecejIndex = i;
        }
    }

    cout << "Najwiecej wystapien ma: " << tablica[najwiecejIndex];
}

void task3() {
    int tablica[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 0) {
                tablica[i][j] = j;
            } else if (i == 1) {
                tablica[i][j] = 2 * j;
            } else if (i == 2) {
                tablica[i][j] = j * j;
            } else if (i == 3) {
                tablica[i][j] = i + j + 2;
            } else if (i == 4) {
                tablica[i][j] = j - i;
            } else {
                tablica[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << tablica[j][i] << " ";
        }
        cout << endl;
    }
}

main() {
    int numerZadania;
    cout << "Mikołaj Mach, s30157";    
    
    do {
        cout << "\n\n Wybierz numer zadania (1, 2, 3): ";
        cin >> numerZadania;
        if (numerZadania==1) {
            task1();
        } else if(numerZadania==2) {
            task2();
        } else if (numerZadania==3) {
            task3();
        } else {
            cout << "Nie ma takiego zadnania";
        }
    } while (numerZadania != 1 && numerZadania != 2 && numerZadania != 3);
}