#include <iostream>

using namespace std;

int main (){
    int number = 0;
    cout << "podaj liczbe: ";
    cin >> number;
    if (number > 0){
        cout << "liczba dodatnia" << endl;
    }
    else if (number < 0){
        cout << "liczba ujemna" << endl;
    }
    else if (number == 0){
        cout << "liczba zero" << endl;
    }
    return 0;
}