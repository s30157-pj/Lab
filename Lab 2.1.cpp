#include <iostream>

using namespace std;

int main (){
    int n;
    cout << "podaj n: ";
    cin >> n;

    int wynik[n];
    for (int z = 1; z <= n; z ++){
        wynik[z-1] = 0;
        for (int z2 = 1; z2 <= z; z2 ++){
            wynik[z-1] += z2;
            if (z2<z){
                cout << z2 << " + ";
            }else {
                cout << z2 << " = " << wynik[z-1] << endl;
            }
        }
    }
    int koncowa=0;
    cout << "Suma szeregu ";
    for (int z = 0; z < n; z ++){
        koncowa += wynik[z];
        if (z < n -1) {
            cout << wynik[z] << " + ";
        }else {
            cout << wynik[z] << " = " << koncowa << endl;
        }
    }

    return 0;
}