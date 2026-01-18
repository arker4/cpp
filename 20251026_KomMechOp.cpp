#include <iostream>
using namespace std;

int main(){ 
setlocale(LC_ALL, "Russian");
int ans,num = 1;
    ans = ++num + 1;
    cout << "ans =" << ans << endl;
    cout << "num =" << num << endl;
    num = 1;
    ans = num++ + 1;
    cout << "ans =" << ans << endl;
    cout << "num =" << num << endl;
    num = 1;
    ans = ++num + 1 + ++num * 2;
    cout << "ans =" << ans << endl;
    cout << "num =" << num << endl;

    return 0;
}

