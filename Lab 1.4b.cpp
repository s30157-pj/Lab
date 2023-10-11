#include <iostream>
using namespace std;

int main(){
    //pobierz liczbe od uzytkownika
    int ilosc = 3;
    int liczby[ilosc] = {};
    for (int zmienna = 0; zmienna < ilosc; zmienna ++){
        cout << "podaj liczbe calkowita: ";
        cin >> liczby[zmienna]; 
    }

    //wyszukac najwieksza liczbe

    int najwieksza = liczby[0];
    for (int zmienna = 1; zmienna < ilosc; zmienna ++){
        if ( liczby[zmienna] > najwieksza){
            najwieksza = liczby[zmienna];
        }
    }

    //wyswietlic najwieksza liczbe
    
    cout << "najwieksza liczba to: " << najwieksza <<endl;
    return 0;
}

