vector<int> Solution::plusOne(vector<int> &A) {

    const int x = A.size()-1;
    if(A[x]!= 9){
        vector<int> ans;

    bool non_zero = false;
    for(int i =0;i<x;i++){

        if(A[i]==0 && non_zero==false)
            continue;
        non_zero = true;
        ans.push_back(A[i]);
    }

        ans.push_back(A[x]+1);
        return ans;
    }
    int carry = 1;
    int p_ans[A.size()+1];

    for(int i = A.size();i>0;i--){

        p_ans[i] = A[i-1] + carry;
        if (p_ans[i] == 10){ p_ans[i] = 0 ;carry =1;}
        else carry = 0;
    }
    p_ans[0] = carry;

     vector<int> ans;

    bool non_zero = false;
    for(int i =0;i<A.size() +1;i++){

        if(p_ans[i]==0 && non_zero==false)
            continue;
        non_zero = true;
        ans.push_back(p_ans[i]);

}
return ans;
}
