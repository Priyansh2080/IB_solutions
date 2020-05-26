#include <iostream>

using namespace std;



bool isprime(int x){
    if (x == 2) return true;
    for (int i=2;i<=x/2;i++){
        if(x%i==0) return false;
    }
    return true;
}



vector<int> Solution::primesum(int A) {
    vector<int> ivec(2);
    for(int i =2; i <= A; i++){
        if (isprime(i) &&  isprime(A-i)){
            ivec[0]=i;
            ivec[1]= A-i;
            return ivec;
        }
    }
    return ivec;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
