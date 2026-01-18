#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a = 2,b = 2;
    bool res = a < b;
    cout << "res:" << res << endl;
    if(res){
        cout << b << endl;
    }else {
        cout << a << endl;
    }
    if(a > b){
        cout << a << endl;
    }else{
        cout << b << endl;
    }
    return 0;
}
