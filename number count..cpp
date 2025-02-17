#include <iostream>
#include <sstream>  // for stringstream
#include <string>   // for string

using namespace std;

int main()
{

    int T;
      cin >> T;
    cin.ignore();

    for(int i= 0 ; i< T; i++){


        string line;

        getline(cin,line);

        stringstream ss(line);

      int count = 0;
        int num ;
         while (ss >> num){
         count ++;

         }

      cout << count<<endl;


}
    return 0 ;
}
