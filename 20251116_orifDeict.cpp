#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    char oper;
    cout << "Предложите пример:";
    cin >> a >> oper >> b;
    cout << "Результат: " << a << " " << oper << " " << b << " = ";
    switch(oper){
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            if(b)
                cout << a % b;
            else
                cout << "!!!Ошибка!!;!";
            
            cout << a / b;
            break;
        case '%':
            if(b)
                cout << a % b;
            else
                cout << "!!!Ошибка!!;!";
                cout << a % b;
            break;
        default:
            cout << "!!!Ошибка!!!";
    }
while(1);
    
    return 0;
}
