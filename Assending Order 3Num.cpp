#include<iostream>
#include <algorithm>
using namespace std;
int main(){
int T;
cin>>T;

for(int t=1;t<=T;t++){

    int a,b,c;
    cin>>a>>b>>c;
    int numbers[3]={a,b,c};
 sort(numbers,numbers+3);
     cout<<"case"<<t<<" : "<<numbers[0]<<" " <<numbers[1]<<" " <<numbers[2]<<endl;

}
return 0;
}
