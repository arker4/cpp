#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    for(int j = 0; j < 4; ++j){
        for(int i = 0; i < 5; ++i){
            cout << 5 << " ";
        }
        cout << "\n";
    }
    cout << endl << endl;

    for(int j = 0; j < 20; ++j){
        cout << 5 << " ";
        if(j % 5 == 4){
            cout << endl;
        }
    }
    cout << endl << endl;

    for(int i = 41; i < 91; i += 10){
        for(int j = i; j < i + 10; ++j){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    for(int i = 0;i < 5; ++i){
        for(int j = 0; j < i + 1; ++j){
            cout << 5 << "";
        }
        cout << endl;
    }
    cout << endl << endl;

    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5 - i; ++j){
            cout << 5 << "";
        }
        cout << endl;
    }
    return 0;
}
