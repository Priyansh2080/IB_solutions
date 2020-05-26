#include <iostream>

using namespace std;

int Solution::cpFact(int A, int B) {
    int gd = __gcd(A,B);
    if (gd==1) return A;
    else{
        while (gd != 1){
            A = A/gd;
            gd = __gcd(A,B);
        }
        return A;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
