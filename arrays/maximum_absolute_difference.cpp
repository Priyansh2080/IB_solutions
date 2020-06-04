int Absolute(int n){
    if(n<0){
        n = -n;
    }
    return n;
}

int Solution::maxArr(vector<int> &A) {
    int max = 0 ;
    int current = 0;
    for(int i = 0;i<A.size()-1 ;i++){
        for (int j = i+1; j<A.size(); j++){
            int current = Absolute((A[i] - A[j])) + Absolute((i - j));
            if(current>max)
                max = current;
        }
    }
    return max;
}
