#include <iostream>

using namespace std;

int Solution::isPower(int A) {
    if(A == 1) return 1;

    for (int i = 2; i*i <= A; i++){
        int power = 2;
        int value = pow(i,power);
        while(value <= A && value > 0){

             if (value == A){
                    return true;
        }
            power++;
            value = pow(i,power);
        }
    }
    return false;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
