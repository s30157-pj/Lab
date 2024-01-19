#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int liczbyPodzielne(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 5 == 0 && i % 3 != 0) {
            count++;
        }
    }
    return count;
}

int task1() {
        int n;
    int count = 0;

    // Wprowadzenie liczby od użytkownika
    cout << "Podaj liczbę naturalną n: ";
    cin >> n;

    // Sprawdzenie i obliczenie ilości liczb spełniających warunki
    for (int i = 1; i <= n; ++i) {
        if (i % 5 == 0 && i % 3 != 0) {
            count++;
        }
    }

    // Wyświetlenie wyniku
    cout << "Ilość liczb naturalnych nie większych niż " << n
              << ", podzielnych przez 5 i niepodzielnych przez 3: " << count << endl;
            
    return 0;
}

const int NUM_UCZNIOW = 6;
const int NUM_PRZEDMIOTOW = 4;

struct Uczen {
    string imie;
    int oceny[NUM_PRZEDMIOTOW];
};

void wprowadzOceny(Uczen& uczen) {
    cout << "Podaj oceny dla ucznia " << uczen.imie << ":\n";
    for (int i = 0; i < NUM_PRZEDMIOTOW; ++i) {
        cout << "Ocena z przedmiotu " << (char)('A' + i) << ": ";
        cin >> uczen.oceny[i];
    }
}

int task2() {
    vector<Uczen> grupaUczniow(NUM_UCZNIOW);

    // Wprowadzenie danych dla każdego ucznia
    for (int i = 0; i < NUM_UCZNIOW; ++i) {
        cout << "Podaj imię ucznia " << i + 1 << ": ";
        cin >> grupaUczniow[i].imie;
        wprowadzOceny(grupaUczniow[i]);
    }

    // Pytania o ocenę z danego przedmiotu
    int numerUcznia, numerPrzedmiotu;
    cout << "\nPodaj numer ucznia (1-6): ";
    cin >> numerUcznia;

    if (numerUcznia < 1 || numerUcznia > NUM_UCZNIOW) {
        cout << "Nieprawidłowy numer ucznia.\n";
    }

    cout << "Podaj numer przedmiotu (1-4, gdzie 1-Informatyka, 2-Matematyka, 3-Biologia, 4-Język Polski): ";
    cin >> numerPrzedmiotu;

    if (numerPrzedmiotu < 1 || numerPrzedmiotu > NUM_PRZEDMIOTOW) {
        cout << "Nieprawidłowy numer przedmiotu.\n";
    }

    // Wyświetlenie oceny
    cout << "Ocena ucznia " << grupaUczniow[numerUcznia - 1].imie
              << " z przedmiotu " << (char)('A' + numerPrzedmiotu - 1)
              << ": " << grupaUczniow[numerUcznia - 1].oceny[numerPrzedmiotu - 1] << endl;

    return 0;
}

// Struktura reprezentująca studenta
struct Student {
    string imie;
    string nazwisko;
    int numerIndeksu;
};

// Funkcja pomocnicza do wyświetlania informacji o studencie
void wyswietlStudenta(const Student& student) {
    cout << "Imię: " << student.imie << ", Nazwisko: " << student.nazwisko
              << ", Numer indeksu: " << student.numerIndeksu << endl;
}

// Funkcja porównująca dla sortowania wektora studentów według numerów indeksów
bool porownajStudentow(const Student& a, const Student& b) {
    return a.numerIndeksu < b.numerIndeksu;
}

int task3() {
    // Utworzenie wektora studentów
    vector<Student> studenci = {
        {"Jan", "Kowalski", 591654},
        {"Anna", "Nowak", 753449},
        {"Piotr", "Wiśniewski", 758423},
        {"Jakub", "Tomaszewski", 100000},
        {"Zuzanna", "Pruszkowska", 975660},
        {"Konrad", "Adamczyk", 812354}
    };

    // Wyświetlenie wektora przed sortowaniem
    cout << "Przed sortowaniem:\n";
    for (const auto& student : studenci) {
        wyswietlStudenta(student);
    }

    // Sortowanie wektora studentów według numerów indeksów
    sort(studenci.begin(), studenci.end(), porownajStudentow);

    // Wyświetlenie wektora po sortowaniu
    cout << "\nPo sortowaniu:\n";
    for (const auto& student : studenci) {
        wyswietlStudenta(student);
    }
    return 0;
}

main() {
    int numerZadania;
    cout << "Mikołaj Mach, s30157";    
    
    do {
        cout << "\n\n Wybierz numer zadania (1, 2, 3, 4): ";
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

    return 0;
}