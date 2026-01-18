#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int years = 2025;
    years = years +1;
    years += 1;
    years++;
    cout << years << endl;
    ++years;
    cout << years << endl;
    cout << ++years << endl;
    cout << years++ << endl;
    cout << years << endl;
    return 0;
}
