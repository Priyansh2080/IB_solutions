#include <iostream>

using namespace std;

void Solution::arrange(vector<int> &A) {

  int n =  A.size();
  for (int  i=0;i<n; i++){
      A[i]= (A[A[i]]%n)*n + A[i];
  }
  for (int  i=0;i<n; i++){
      A[i]= A[i]/n;
  }

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
