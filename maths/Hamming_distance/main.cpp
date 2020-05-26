#include <iostream>

using namespace std;



int Solution::hammingDistance(const vector<int> &A) {
const int mod = 1000000007;

vector <int> binary_array(32,0);

    for (int i = 0; i<A.size();i++){

        int num = A[i];
        int index = 0;
        while (num>0){
            binary_array[index] += (num & 1);
            index++;
            num = num >> 1;
        }
        }
    int ans =0;
    for(int i =0; i < binary_array.size(); i++){
        ans = (ans + 2 * binary_array[i] *(A.size() - binary_array[i]))% mod;
    }
    return ans;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
