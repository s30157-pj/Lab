#include <iostream>

using namespace std;

int main (){
    cout << "wprowadz numer miesiaca:";
    int x = 0;
    cin >> x;
    switch (x){
        case 1:
            cout << "Styczen" << endl;
            break;
        case 2:
            cout << "Luty" << endl;
            break;
        case 3:
            cout << "Marzec" << endl;
            break;
        case 4:
            cout << "Kwiecien" << endl;
            break;
        case 5:
            cout << "Maj" << endl;
            break;
        case 6:
            cout << "Czerwiec" << endl;
            break;
        case 7:
            cout << "Lipiec" << endl;
            break;
        case 8:
            cout << "Sierpien" << endl;
            break;
        case 9:
            cout << "Wrzesien" << endl;
            break;
        case 10:
            cout << "Pazdziernik" << endl;
            break;
        case 11:
            cout << "Listopad" << endl;
            break;
        case 12:
            cout << "Grudzien" << endl;
            break;
        default:
            cout << "Wpisales liczbe z poza zakresu" << endl;
            return -1;
    }switch (x){
        case 2:
            cout << "28 dni" << endl;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 dni" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 dni" << endl;
            break;
    }
    switch (x){
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            cout << "Slonecznie" << endl;
            break;
        default:
            cout << "Niepogodny dzien" << endl;
    
    return 0;
    }
}