#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    //setlocale(LC_ALL, "Russian");
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = {50, 10};
    SetConsoleCursorPosition(hConsole, pos);
    CONSOLE_SCREEN_BUFFER_INFOEX info;
    info.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
    GetConsoleScreenBufferInfoEx(hConsole, &info);
    for(int i = 0; i < 16; ++i){
        info.ColorTable[i] = RGB(0,i * 15,0);
        
    }
    SetConsoleScreenBufferInfoEx(hConsole, &info);
    // for(int i = 0; i < 16; ++i){
    //     SetConsoleTextAttribute(hConsole, 0 << 4 | i);
    //     cout << "*";
    // }
    // for(int i = 33; i < 65; ++i){
    //     cout << (char)i << ' ';
    // }
    int len;
    const int size = 90;
    COORD lines[size];
    int lenghts[size];
    for(int i = 0; i < size; ++i){
        lines[i].X = rand() % 110 + 5;
        lines[i].Y = rand() % 60 - 10;
        lenghts[i] = rand() % 15 + 3;
    }
    while(true){
        for(int k = 0; k < size; ++k){
            len = lenghts[k];
                lines[k].Y++;
            pos =lines[k];
            for(int i = 0; i < len; ++i, pos.Y--){
            if(pos.Y > 0 && pos.Y < 30){
                SetConsoleCursorPosition(hConsole, pos);
                SetConsoleTextAttribute(hConsole, 15 - 15 * i / len);
                    if(i < len -1){
                    cout << (char)(rand() % 32 + 33);
                    }else{
                        cout << ' ';
                    }
                }
            }
            if(pos.Y > 30 + len){
                lines[k].Y = -10;
                lines[k].X = rand() % 110 + 5;
            }
        }
        Sleep(50);
    }
    system("pause");
    return 0;
}
