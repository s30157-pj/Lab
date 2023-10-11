#include <iostream>
using namespace std;

int main(){
    //pobierz liczbe od uzytkownika

    int liczby[3] = {};
    for (int zmienna = 0; zmienna < 3; zmienna ++){
        cout << "podaj liczbe calkowita: ";
        cin >> liczby[zmienna]; 
    }

    //wyszukac najwieksza liczbe

    int najwieksza = liczby[1];
    if ( liczby[0] >= liczby[1]){
        najwieksza = liczby[0];
    }
    if ( liczby[2] >= najwieksza){
        najwieksza = liczby[2];
    }

    //wyswietlic najwieksza liczbe
    
    cout << "najwieksza liczba to: " << najwieksza <<endl;
    return 0;
}

