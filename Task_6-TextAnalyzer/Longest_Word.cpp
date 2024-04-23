#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string LongestWord(string sen) {
    string test = "";
    string longest = "";

    for (int i; i < sen.length(); i++) {
        if (isalpha(sen[i])) {
            test.push_back(sen[i]);
        }
        else if (test.length() > longest.length()) {
            longest = test;
            test = "";
        }
    }
    longest = (test.length() > longest.length()) ? test : longest;

    return longest;
}

int main(void) {
    cout << LongestWord(coderbyteInternalStdinFunction(stdin));
    return 0;
}