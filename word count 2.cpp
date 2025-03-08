#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int countWords(const string& sentence) {
    int wordCount = 0;
    bool inWord = false;


    for (char ch : sentence) {

        if (isalnum(ch)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {

            inWord = false;
        }
    }
    return wordCount;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string sentence;
        getline(cin, sentence);


        cout << "= " << countWords(sentence) << endl;
    }

    return 0;
}
