#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool checkLength(string str) {
    if (str.length() < 4 && str.length() > 25) return false;
    else return true;
}

bool startWithLetter(string str) {
    if (int(str[0]) < 65 && int(str[0]) > 90) return false;
    return true;
}

bool expextedChar(string str) {
    char ch;
    for (int i = 0; i < str.length(); i++) {
        ch = str[i];
        if (isalnum(ch)) continue;
        else if (ch == '_') continue;
        else return false;
    } return true;
}

bool lastChar(string str) {
    char ch = str.at(str.length() - 1);
    return ch != '_';
}

string CodelandUsernameValidation(string str) {
    if (checkLength(str) && startWithLetter(str) && expextedChar(str) && lastChar(str)) str = "true";
    else str = "false";
    return str;
}

int main(void) {
    cout << CodelandUsernameValidation(coderbyteInternalStdinFunction(stdin));
    return 0;

}