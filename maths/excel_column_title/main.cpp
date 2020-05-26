#include <iostream>

using namespace std;


string Solution::convertToTitle(int A) {
 /*   int x = log(A)/log(26);
   char ans [x];
    string ans ;


    for (int i= x ; i>=0;i--){

    int value = pow(26, i);
   string s = (A/value)+"A"- 1;
  //  A = A%value;
    ans = ans+ s;

    }

//  return ans;*/

string map = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string ans;
while(A>0){
    A = A -1;
    int rem = A%26;
    ans = (map[rem]) + ans;
    A = A/26;
}
return ans;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
