#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 15 << 4 | 0);
    // cout << "abc" << endl;

    // for(int y = 0; y < 16; y++){
    //     for(int x = 0; x < 16; ++x){
    //         SetConsoleTextAttribute(hConsole, (y << 4) | x);
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    COORD pos = {30, 5};
    int h, hS;
    for(h = 1; h < 15; ++h){
        hS = h / 8 +1;
        
        pos.Y = 29 - h - hS;
        SetConsoleTextAttribute(hConsole, 2 << 4 | 5);
        for(int y = 0; y < h; ++y, ++pos.Y, --pos.X){
            SetConsoleCursorPosition(hConsole, pos);
            for(int x = 0; x < y * 2 + 1; ++x){
                cout << "*";
            }
        }
        pos.X += h;
        
        SetConsoleTextAttribute(hConsole, 7 << 4 | 7);
        for(int y = 0; y < hS; ++y, ++pos.Y){
            pos.X -= h;
            SetConsoleCursorPosition(hConsole, pos);
            SetConsoleTextAttribute(hConsole, 0 << 4 | 0);
            for(int x = 0; x < 2 * h + 1; ++x){
                cout << " ";
            }
            SetConsoleTextAttribute(hConsole, 6 << 4 | 6);
            pos.X += h;
            SetConsoleCursorPosition(hConsole, pos);
            cout << "#";
        }
        Sleep(500);
    }

        COORD lamps[500];
        int count = 0;
        for(int i = 0; i < 30; ++i){
            int k = rand() % (h - 1);
            lamps[count].Y = k + 30 - h - hS;
            lamps[count].X = rand() % (2 * k + 1) - k + pos.X;
            ++count;
        }
        char colors[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int cN = 0;

        for(int x = 2; x < 117; x += 3){
            lamps[count].X = x;
            lamps[count].Y = 0;
            ++count;
        }

        for(int y = 2; y < 30; y += 2){
            lamps[count].X = 0;
            lamps[count].Y = y;
            ++count;
        }
        for(int y = 2; y < 30; y += 2){
            lamps[count].X = 119;
            lamps[count].Y = y;
            ++count;
        }



        while(!_kbhit()) {
            for(int i = 0; i < count; ++i){
                SetConsoleCursorPosition(hConsole, lamps[i]);
                SetConsoleTextAttribute(hConsole, colors[cN] << 4);
                cN = (cN + 1) % 10;
                cout << " ";
            }
            Sleep(1000);
        }
    _getch();
    return 0;
}
