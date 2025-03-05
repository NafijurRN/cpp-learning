#include <iostream>
#include<string>
using namespace std;

bool isVowel(char c){

c=tolower(c); //covert into lower case
return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u' ); //checking vowel with char

}


int main(){

int t;
cin >>t;

cin.ignore(); //avoid nest new line space

for(int i= 0; i<t; i++){ // test case num = line

    string s;//declare string
    getline(cin,s); // string input


    int vowelCount = 0;
    for(char c:s){
        if (isVowel(c)){
            vowelCount ++;
        }
    }
    cout<<"Number of vowels ="<<vowelCount<<endl;

}

return 0 ;
}
