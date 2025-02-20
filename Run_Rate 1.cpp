#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int opponent_runs,current_runs,remaining_balls;
    cin>>opponent_runs>>current_runs>>remaining_balls;

    double remaining_overs= remaining_balls/6.0;
    double crr = current_runs/(double)(remaining_balls/6.0);
    double rrr= (opponent_runs+1-current_runs)/remaining_overs;

    cout<<"Current Run Rate : "<<crr<<endl;
    cout<<"Required Run Rate :"<<rrr<<endl;
}
return 0;
}
