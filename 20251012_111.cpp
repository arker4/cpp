#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    cout << num - num / 10 % 10 * 10 << endl; 
    return 0;
}
