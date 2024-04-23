#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

string FindIntersection(string strArr[], int arrLength) {
    int num = 0;
    vector<int> vec1;
    for (int i = 0; i < strArr[0].size(); i++) {
        if (isdigit(strArr[0][i])) num = num * 10 + (strArr[0][i] - '0');
        else if (strArr[0][i] == ',') vec1.push_back(num);
        else num = 0;
    } vec1.push_back(num);

    num = 0;
    vector<int> vec2;
    for (int i = 0; i < strArr[1].size(); i++) {
        if (isdigit(strArr[1][i])) num = num * 10 + (strArr[1][i] - '0');
        else if (strArr[1][i] == ',') vec2.push_back(num);
        else num = 0;
    } vec2.push_back(num);

    vector<int> vec3;
    set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), back_inserter(vec3));

    if (!vec3.empty()) {
        string result = to_string(vec3[0]);
        for (int i = 1; i < vec3.size(); i++) {
            result += "," + to_string(vec3[i]);
        }
        return result;
    }
    else return "false";
}

int main(void) {

    string A[] = coderbyteInternalStdinFunction(stdin);
    int arrLength = sizeof(A) / sizeof(*A);
    cout << FindIntersection(A, arrLength);
    return 0;

}