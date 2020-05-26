#include <iostream>

using namespace std;

//[−2,147,483,647, +2,147,483,647]
//int ulta(int n, long int multiplier){
//     int x = n%10;
// /    n = n/10;
//     return x*multiplier + ulta(n,multiplier/10);

//}


int Solution::reverse(int A) {
  /* long int multiplier = 1;

        while (A%multiplier >= 10 ){
            multiplier *= 10 ;
        }
    if (A< 0){

        long int x = ulta(-A, multiplier);
        return -x;
    }*/
 int reverse = 0;
 while(A!=0){
     int digit = A%10;
     int temp =  digit + reverse*10;
     if (temp/10 != reverse){
         return 0;
     }
     reverse =  temp;
     A = A/10;
 }
    return reverse;
}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
