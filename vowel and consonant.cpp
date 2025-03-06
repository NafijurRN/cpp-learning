#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main() {

    int t;
    cin >> t;
   // cin.ignore();  // ignore the newline
    unordered_set<char> vowels_set = {'a', 'e', 'i', 'o', 'u'};  // vowels set for faster lookup

    while(t--) {
        string s;
        getline(cin, s);
        string vowels_str = "";
        string consonants_str = "";

        for(char c : s) {
                find(c) != vowels_set.end()) {  // if vowels
                vowels_str += c;
            } else if (c != ' ') {  // if consonants (ignore spaces)
                consonants_str += c;
            }
        }


        cout << vowels_str << endl;
        cout << consonants_str << endl;
    }

    return 0;
}
