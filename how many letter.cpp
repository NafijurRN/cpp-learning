#include<iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  // string input number

    map<char, int> charCount;  //  map for count letter number

    // পtaking input
    for (int i = 0; i < t; i++) {
        string str;
        cin >> str;

        // string letter number count
        for (char c : str) {
            charCount[c]++;
        }
    }

   //letter number print
    for (auto& pair : charCount) {
        cout << pair.first << " = " << pair.second << endl;
    }

    return 0;
}
