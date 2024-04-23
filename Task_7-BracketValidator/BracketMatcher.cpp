#include <iostream>
#include <string>
#include <stack>
using namespace std;

string BracketMatcher(string str) {
    stack<char> stack;

    for (char ch : str) {
        switch (ch) {
        case '{': stack.push(ch); break;
        case '[': stack.push(ch); break;
        case '(': stack.push(ch); break;
        case ')':
            if (stack.empty() || stack.top() != '(') return "0";
            else stack.pop();
            break;
        case ']':
            if (stack.empty() || stack.top() != '[') return "0";
            else stack.pop();
            break;
        case '}':
            if (stack.empty() || stack.top() != '{') return "0";
            else stack.pop();
            break;
        default: break;
        }
    }

    return stack.empty() ? "1" : "0";
}

int main(void) {
    cout << BracketMatcher(coderbyteInternalStdinFunction(stdin));
    return 0;
}