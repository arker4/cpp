#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int monthCount;
    cout << "Сколько месяцев в году?" << endl;
    cin >> monthCount;
    if(monthCount == 12) {
        cout << "Молодец, ты не идиот" << endl;
    }else {
        cout << "Ты идиот!" << endl;
    }
    switch(monthCount) {
        case 12:
            cout << "Молодец, ты не идиот" << endl;
            break;
        default:
            cout << "Ты идиот!" << endl;
    }
    return 0;
}
