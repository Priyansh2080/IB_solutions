#include <iostream>
#include <vector>
using namespace std;
#define mod 10^9+7

long long int power(long long int A, long long int B){


    //base case
    if(A==0) return 0;
    if (B==0) return 1;

    long result;
    if(B%2==0){
        result = power(A,B/2);
        result = (result * result)%mod;
    }
    else{
        result = A%mod;
        result = ((result%mod)*power(A,B-1)%mod)%mod;
    }

    return result%mod;
}

int Solution::solve(int A, vector<int> &B) {

    //factorial
    int n = A;
    long long int fact[n];
    fact[0]= 1;
    for (int i =1 ; i<n ; i++ ){
        fact[i]= ((i%mod)*(fact[i-1]%mod))%mod;
    }

    // dividing blocks
    vector <int> blocks (B.size()-1);
    sort(B.begin(),B.end());
    for (int i=0; i<B.size()-1; i++){
        blocks[i]= B[i+1]- B[i] -1;
    }

    int ans1=0, ans2=1 , ans3 =1;
    for (int i = 0; i<blocks.size(); i++){
        ans1 = ((ans1)%mod +(blocks[i])%mod)%mod;
        ans2 = ((ans2%mod)*fact[blocks[i]]%mod)%mod;
        if (i ==0 || i ==blocks.size()-1) continue;
        ans3 = ((ans3%mod)*power(2, blocks[i]-1)%mod)%mod;

    }
    ans1 = fact[ans1]%mod;
    return ((ans1%mod)*(ans3%mod)*(power(ans2,mod-2)%mod))%mod;
}
