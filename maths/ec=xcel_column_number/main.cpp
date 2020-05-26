#include <iostream>

using namespace std;

int Solution::titleToNumber(string A) {


    int ans = 0;
    int j =0;
    for (int i = A.size() - 1 ; i>=0; i--){
        ans = ans + pow(26,j)*(A[i]- 'A'+1);
        j++;
    }
    return ans;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
