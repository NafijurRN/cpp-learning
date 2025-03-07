#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main(){

int t;
cin>> t;
cin.ignore();

for(int i=0;i<t;i++){
    string sentence;
    getline(cin,sentence);

    stringstream ss(sentence);
    string word;
    int word_count = 0;
    while(ss >> word){
        word_count++;
    }
    cout<<"="<<word_count<<endl;
}

return 0;

}
