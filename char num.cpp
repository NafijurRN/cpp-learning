#include<iostream>
#include<string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string str;
        char ch;

        cin >> str;
        cin >> ch;

        int count = 0;
        for (char c : str) {
            if (c == ch) {
                count++;
            }
        }

        cout << "The character '" << ch << "' appears " << count << " times in the string '" << str << "'." << endl;
    }

    return 0;
}
