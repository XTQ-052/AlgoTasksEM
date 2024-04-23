#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string QuestionsMarks(string str) {

    int qmCounter = 0;
    int num;

    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            if (qmCounter == 3 && (str[i] - '0') + num == 10) {
                str = "true";
                break;
            }
            num = str[i] - '0';
            qmCounter = 0;
        }
        else if (str[i] == '?') qmCounter++;
    }
    if (str != "true") str = "false";

    return str;
}

int main(void) {
    cout << QuestionsMarks(coderbyteInternalStdinFunction(stdin));
    return 0;
}
