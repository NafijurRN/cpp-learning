#include <stdio.h>
#include<iostream>
#include<algorithm>

using namespace std ;

int main(){


int T;
cin>> T;
cin.ignore();

 while (T--){
    string str;
    getline(cin,str);
    reverse (str.begin(),str.end());

    cout<<str<<endl;

     }
return 0;

}
