#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>  // reverse functrion er jonno

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  //  remove '\n'

    while (t--) {
        string line;
        getline(cin, line);  // next line input

        stringstream ss(line);  // stringstream use for find out line's word
        string word;

        while (ss >> word) {
            reverse(word.begin(), word.end()); //reverse the word
            cout << word << " ";  // print the reverse word
        }

    cout << endl;  //for next test case 
    }

    return 0;
}
