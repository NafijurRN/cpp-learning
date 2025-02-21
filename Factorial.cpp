#include<iostream>
using namespace std;

long long factorial(int n){

 long long fact = 1;

 for(int i= 1;i<=n;i++){

    fact*=i;
 }
return fact;
}
int main(){
    int t;
    cin>>t;
    while(t--){

        int num;
        cin>>num;
        cout<<factorial(num)<<endl;
    }
   return 0;
}
