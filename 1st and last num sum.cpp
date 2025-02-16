#include <iostream>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int N;
    cin>>N;

    int first_digit = N/10000;
    int last_digit = N%10;
    cout<<"result = " <<first_digit+last_digit<<endl;
    }
    return 0;
    }
