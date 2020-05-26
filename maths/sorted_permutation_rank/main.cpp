#include <iostream>

using namespace std;

# define mod 1000003

int factorial (int n){
    if(n==0 || n==1) return 1;
    return (n*factorial(n-1))%mod;
}

int Solution::findRank(string A) {

     int ans = 0 ;
     for (int i = 0 ; i<A.size(); i++){

         int counter= 0;
         for(int j =i +1 ; j<A.size(); j++){
             if (A[i]>A[j]) counter++;
         }
         ans = (ans+ (counter*factorial(A.size() - i -1))%mod)%mod;
     }
     return (ans +1)%mod;
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
