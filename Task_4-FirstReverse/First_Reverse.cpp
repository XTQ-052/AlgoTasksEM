#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str) {
    string str_reverse(str.length(), ' ');
    int index = str.length() - 1;
    for (int i = 0; i < str.length(); i++) {
        str_reverse[i] = str[index];
        index--;
    }
    return str_reverse;

}

int main(void) {
    cout << FirstReverse(coderbyteInternalStdinFunction(stdin));
    return 0;
}