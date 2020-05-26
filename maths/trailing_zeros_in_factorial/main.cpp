#include <iostream>

using namespace std;

int Solution::trailingZeroes(int A) {
    int fives= 0 ;
    while (A){
        fives = fives + (A/5);
        A = A /5;
    }
    return fives;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
