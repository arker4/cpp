#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int countRedApple = 75;
    countRedApple *= 10;
    cout << "Кол-во красн яблок:" << countRedApple << endl;
    countRedApple -= 1000;
    cout << "Кол-во красн яблок:" << countRedApple << endl;
    countRedApple += 1;
    cout << "Кол-во красн яблок:" << countRedApple << endl;
    countRedApple %= 20;
    cout << "Кол-во красн яблок:" << countRedApple << endl;
    
    return 0;
}
