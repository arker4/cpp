#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество яблок: ";
    int appleCount;
    cin >> appleCount;
    cout << "Я съем " << appleCount << " яблок\n";
    cout << "Я съем " << appleCount << " ";
    if(appleCount % 100 > 4 && appleCount % 100 < 21){
        cout << "яблок";
    }else{
        switch (appleCount % 10){
            case 1:
                cout << "яблоко";
                break;
            case 2:
                cout << "яблока";
                break;
            default:
                cout << "яблок";
        }
    }
    return 0;
}
