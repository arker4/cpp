#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int y = 0;
    int s = y / 100;
    if(y % 100 > 0) {
        ++s;
    }
    cout << y << " Год это " << s << " столетие." << endl;
    cout << y / 100 + (y % 100 ? 1 : 0) << endl;
    cout << y / 100 + (int) (bool) (y % 100) << endl;
    cout << (y - 1) / 100 + 1 << endl;
    cout << (y + 99) / 100 << endl;
    return 0;
}
