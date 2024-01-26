#include <iostream>
#include <windows.h>
#include <vector>
#include <time.h>

using namespace std;


enum Direction {DIR_UP, DIR_DOWN, DIR_LEFT, DIR_RIGHT};

Direction current_dir = DIR_UP;

//ustawienie wilkości planszy

//Wielkość w poziomie
int a = 30;
//Wielkość w pionie
int b = 20;

//prędkość gry
unsigned int timer = 1000;

//wynik punktów
unsigned int score = 0;

//Zdefiniowanie ciastka
struct Point {
    int x;
    int y;
};
Point cookie;

vector<Point> snake;



//czyszczenie ekranu
void clear_screen() {
    for (int x = 0; x<30; x++){
        cout << endl;
    }
}

//Zdefiniowanie węża
void init_snake() {
    Point point;
    // Head
    point.x = a/2;
    point.y = b/2;
    snake.push_back(point);
    // Tail
    for (int i=0; i<2; i++) {
        point.y++;
        snake.push_back(point);
    }
}

//przesuwanie się elementów węża
int snake_point(int x, int y, int start_index = 0){
    for (int i = start_index; i<snake.size(); i++){
        if (snake[i].x == x && snake[i].y == y){
            if (i == 0){
                return 1;
            }
            else{
                return 2;
            }
        }
    }
    return 0;
}

//wyświetlanie się planszy oraz wszytkich elementów na niej występujących
void show_board() {
    clear_screen();

    //tabela punktowa
    cout << "Score: " << score << endl;

    //ściany planszy
    for (int y = 0; y<b; y++){
        for (int z = 0; z<a; z++){
            if (z == 0 || z == a-1 || y == 0 || y== b-1){
                cout << "*";
            }

            //budowa węża
            else{
                switch (snake_point(z, y)){
                    case 1:
                        cout << "@";
                        break;
                    case 2:
                        cout << "#";
                        break;
                    //
                    default:
                        if (cookie.x == z && cookie.y == y) {
                            cout << "+";
                        } else {
                            cout << " ";
                        }
                        
                }
                
            }
        }
        cout << endl;
    }
}


//wykrywanie wciśnięcia przycisku, zmiana kierunku
void check_key() {
    if (GetKeyState(VK_UP) & 0x8000) {
        current_dir = DIR_UP;
    }
    else if (GetKeyState(VK_DOWN) & 0x8000){
        current_dir = DIR_DOWN;
    }
    else if (GetKeyState(VK_RIGHT) & 0x8000){
        current_dir = DIR_RIGHT;
    }
    else if (GetKeyState(VK_LEFT) & 0x8000){
        current_dir = DIR_LEFT;
    }
}


//losowanie pozycji ciastek z punktami za pomocą systemu pseudolosowemu
Point PKT(){
    Point cookie;

    cookie.x = (rand() % (a-2)) + 1;
    cookie.y = (rand() % (b-2)) + 1;
    while (snake_point(cookie.x, cookie.y)>0){
        cookie.x = (rand() % (a-2)) + 1;
        cookie.y = (rand() % (b-2)) + 1;
    }
    return cookie;
}

//poruszanie sie węża w zależności od kierunku
void snake_move() {
    Point last = snake[snake.size()-1];
    for (int i = snake.size()-1; i > 0; i--){
        snake[i] = snake[i-1];
    }
    switch (current_dir){
        case 0: // UP
            snake[0].y--;
            break;
        case 1: // DOWN
            snake[0].y++;
            break;
        case 2: // LEFT
            snake[0].x--;
            break;
        case 3: // RIGHT
            snake[0].x++;
            break;
    }
    //dodawanie kolejnego segmentu węża po zdubyciu punktu
    if (snake[0].x == cookie.x && snake[0].y == cookie.y){
        snake.push_back(last);
        score++;
        cookie = PKT();
        //przyśpieszenie gry po zdobyciu punktu
        timer *= 0.95;
    }
}

//Wypisywanie Game Over
void Game_Over(){
    clear_screen();
    cout << "Game Over" << endl << endl;
}

//zakończenie gry poprzez zjedzenie ogonu węża albo najechanie na ścianę
bool check_no_fail(){
    //self eating
    if (snake_point(snake[0].x , snake[0].y, 1)>1){
        Game_Over();
        return false;
    }
    // border_fail
    if (snake[0].x == 0 || snake[0].x == a-1 || snake[0].y == 0 || snake[0].y == b-1){
        Game_Over();
        return false;
    }
    return true;
}


//uruchomienie wszystkich elementów programu w odpowiedzniej kolejności
int main(){
    srand(time(NULL));
    init_snake();
    cookie = PKT();
    bool running = true;
    
    while (running) {
        //podstawowo czekamy 1s
        Sleep (timer);

        check_key();
        snake_move();
        
        show_board();
        running = check_no_fail();
        Point z = PKT();
        

    }
    return 0;
}
