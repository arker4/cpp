#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    const int SIZE = 10;
    int a[SIZE], b[SIZE], c[SIZE];
    for(int i = 0; i < SIZE; ++i){
        a[i] = rand() % 21 + 10;
        b[i] = rand() % 21 + 10;
        c[i] = a[i] + b[i];
    }
    for(int i = 0; i < SIZE; ++i){
        cout << a[i] << "\t";
    }
    cout << endl;
    
    for(int i = 0; i < SIZE; ++i){
        cout << b[i] << "\t";
    }
    cout << endl;
    
    for(int i = 0; i < SIZE; ++i){
        c[i] = a[i] + b[i];
        cout << c[i] << "\t";
    }
    cout << endl;


    return 0;
}
