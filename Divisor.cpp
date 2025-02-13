#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
 int T;
 cin>>T;
 for(int case_num =1; case_num<=1;++ case_num){

    int n;
    cin >>n ;

    vector<int>divisor;
    for(int i = 1; i<=n; ++i){
        if(n%i==0){

        divisor.push_back(i);
        }
    }

 cout<<"case"<<case_num<<":";
 for(size_t i=0; i<divisor.size(); ++i){
    cout<<divisor[i];

    if(i!=divisor.size()-1){
        cout <<" ";
    }
 }
 cout<<endl;

 }
return 0;
}
