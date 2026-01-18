#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int count = 0;
    char str[100] = "Abb cdde fkl";

    int i = 0;
    while(str[i]) {
        if(str[i] == str[i + 1]) {
            ++count;
        }
        ++i;
    }
    cout << "count = " << count << endl;
    return 0;
}
