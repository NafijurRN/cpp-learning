#include<iostream>
using namespace std;

int main() {
    for (int i = 1000; i >= 1; i--) {
        cout << i << "\t";

        if (i % 10 == 1) {
            cout << endl;
        }
    }
    return 0;
}
