#include <iostream>
#include <string>
#include <vector>

int BracketCombinations(int num) {

    if (num == 0) return 1;

    std::vector<int> catalan(num + 1, 0);
    catalan[0] = 1;

    for (int i = 1; i <= num; ++i) {
        for (int j = 0; j < i; ++j) {
            catalan[i] += catalan[j] * catalan[i - 1 - j];
        }
    }

    return catalan[num];
}

int main(void) {
    cout << BracketCombinations(coderbyteInternalStdinFunction(stdin));
    return 0;
}