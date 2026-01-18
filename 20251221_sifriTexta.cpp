#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int count = 0;
    int sum = 0;
    char s[100] = "text 12 abc 7 * 9 =63 endl";
    cout << s << endl;
    for(int i = 0; s[i]; ++i) {
        cout << s[i] << '-';
        if(s[i] >= '0' && s[i] <= '9'){
            ++count;
            sum += s[i] - '0';
        }
    }
    cout << endl;
    cout << "count:" << count << endl; 
    cout << "sum:" << sum;
    return 0;
}
