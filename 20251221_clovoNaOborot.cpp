#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char str[] = "slovo";
    int i = -1;
    while(str[++i]);
    cout << i << endl;

    while(i--)
        cout << str[i];
    return 0;
}
