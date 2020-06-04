/*int get_current(int index, int negative, const vector<int> &arr){
    if(index >= arr.size()) return 0;
    if(arr[index]>=0 && negative >=0){
       return arr[index] + get_current(index+1,0,arr) ;
    }
    else if(arr[index]>=0 && negative<0){


            while(arr[index]>=0 && index < arr.size()){
                negative = negative + arr[index];
                index++;
            }
           if (negative > 0){
               return negative + get_current(index+1,0,arr);
           }
           else return 0;

    }
    else {
        negative = negative + arr[index];
        return get_current(index+1,negative,arr);
    }
}
*/
int Solution::maxSubArray(const vector<int> &A) {
    int max = A[0];
    int current = 0;
    for (int i  = 0 ; i<A.size();i++){
        current = current + A[i];
        if(current>max){
            max = current;
        }
        if(current<0) current = 0;

    }
    return max;
}
