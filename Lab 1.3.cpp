#include <iostream>

using namespace std;

int main (){
    int number = 0;
    cout << "podaj liczbe: ";
    cin >> number;
    if (number % 2 == 0){
        cout << "liczba parzysta" << endl;
    }
    else if (number % 2 != 0) {
        cout << "liczba nieparzysta" << endl;
    }
    else {
        cout << "ZERO" << endl;
    }
    return 0;
}