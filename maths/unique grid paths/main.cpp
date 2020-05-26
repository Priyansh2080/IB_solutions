#include <iostream>

using namespace std;
int Solution::uniquePaths(int A, int B) {

/*
long long int fact[A+B];
fact[0]=1;
for (int i =1 ; i<A+B; i++){
    fact [i]= i*fact[i-1];
}
return fact[A+B-2]/(fact[A-1]*fact[B-1]);
*/

    //base case
    if (A==1 || B==1) return 1;
    return uniquePaths(A-1,B) + uniquePaths(A,B-1);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
