/*int find_duplicate(const vector<int> &nums){
    int hare = nums[0];
    int turtle = nums[0];

    while (true){
        turtle = nums[turtle] -1;
        hare = nums[nums[hare]] -1;
        if(hare == turtle) break;
    }

    int num1 = nums[0];
    int num2 = turtle;
    while(num1 != num2){
        num1 = nums[num1];
        num2 = nums[num2];
    }

    return num1;
}*/

vector<int> Solution::repeatedNumber(const vector<int> &A) {

   vector<int> ans ;
    long s=0;
    long sq = 0 ;
        for(int i=1;i<=A.size();i++){
            s=s+(long)i-(long)A[i-1];
            sq = sq + (long)i*i - (long)A[i-1]*A[i-1];
        }

        long x = ((sq/s)+ s)/2;
        long y=(x-s);
        ans.push_back((int)y);
        ans.push_back((int)x);
        return ans;
}
