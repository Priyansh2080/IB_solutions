vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i =0 ; i<A.size()-1;i = i+2){

        int x = A[i+1];
        A[i+1] = A[i];
        A[i] = x;
    }
    return A;
}
