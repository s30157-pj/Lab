#include <iostream>

using namespace std;

int main (){
    //podpunk A
    int a = 0;
    int b = 0;
    cout << "wprowadz a: ";
    cin >> a;
    cout << "wprowadz b: ";
    cin >> b;
    //B
    cout << "B:" << endl;
    for (int z = 0; z<a; z++){
        cout << "*";
    }
    cout << endl;
    
    //C
    cout << endl << "C:" << endl;
    for (int y = 0; y<b; y++){
        cout << "*" << endl;
    }
    

    //D
    cout << endl << "D:" << endl;
    for (int y = 0; y<b; y++){
        for (int z = 0; z<a; z++){
            cout << "*";
        }
        cout << endl;
    }

    //E
    cout << endl << "E:" << endl;
    for (int y = 0; y<b; y++){
        for (int z = 0; z<a; z++){
            if (z == 0 || z == a-1 || y == 0 || y== b-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    //F
    cout << endl << "F:" << endl;
    for (int y = 1; y<=a; y++){
        for (int z = 0; z<y; z++){
            cout << "*";
        }
        cout << endl;
    }

    //G
    cout << endl << "G:" << endl;
    for (int y = 0; y<b; y++){
        for (int z = 0; z<a; z++){
            if (z >= y){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}