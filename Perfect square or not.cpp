#include<iostream>
#include <cmath>
using namespace std;

int main(){

int t;
cin>> t;

while(t--){
    int n;
cin>>n;


int sqrt_n=sqrt(n);
if(sqrt_n*sqrt_n==n){
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
 }
}
return 0;
}
