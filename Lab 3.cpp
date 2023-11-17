#include <iostream>
#include <math.h>
using namespace std;

int task1(){
    float x = 0;
    float y = 0;
    cout << "podaj liczbe x: ";
    cin >> x;
    cout << "podaj liczbe y: ";
    cin >> y;

    float suma = x+y;
    float roznica = x-y;
    float iloczyn = x*y;
    float iloraz = x/y;

    cout << "Suma = " << suma << endl;
    cout << "Roznica = " << roznica << endl;
    cout << "Iloczyn = " << iloczyn << endl;
    cout << "Iloraz = " << iloraz << endl;

return 0;
}
int task2(){
    char a;
    do{
        cout << "wpisz dowolny znak: ";
        cin >> a;
    } while (a != 't');
    cout << "brawo, odgadłeś literę!";
return 0;
}
int task3(){    
    double a, b, c;

    cout << "Podaj wspolczynnik a: ";
    cin >> a;

    cout << "Podaj wspolczynnik b: ";
    cin >> b;

    cout << "Podaj wspolczynnik c: ";
    cin >> c;

    cout << "Rownanie kwadratowe w postaci ogolnej: ";
    cout << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
    

    double delta = b * b - 4 * a * c;
    
    cout << delta;
    
    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Pierwiastki rownania: x1 = " << x1 << "; x2 = " << x2 << endl;
    } else if (delta == 0) {
        double x1 = -b / (2 * a);
        cout << " Pierwiastek rownania: x0 = " << x1 << endl;
    } else {
        cout << " Brak pierwiastkow rzeczywistych" << endl;
    }
    return 0;
}

int n = 0;


void printPascal(int n)
    {

    for (int line = 1; line <= n; line++)
    {
        int C = 1;
        for (int i = 1; i <= line; i++)
        {


            cout << C << " ";
            C = C * (line - i) / i;
        }
            cout << "\n";
        }
}


int task4(){
    cout << "Podaj liczbę rzędów: " << endl;
    cin >> n;
    printPascal(n);
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
        } else if (numerZadania==4) {
            task4();
        } else {
            cout << "Nie ma takiego zadnania";
        }
    } while (numerZadania != 1 && numerZadania != 2 && numerZadania != 3);
}
