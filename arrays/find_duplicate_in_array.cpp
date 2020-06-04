int Solution::repeatedNumber(const vector<int> &A) {
    int turtle = A[0];
    int hare  = A[0];
    int i =0;
    while(i<2*A.size()){
        turtle = A[turtle];
        hare = A[A[hare]];
        i++;
        if(turtle == hare)
            break;
    }
    if(i >= 2*A.size()) return -1;
    int ptr1 = turtle;
    int ptr2 = A[0];
    while(ptr1 != ptr2){
        ptr1 = A[ptr1];
        ptr2 = A[ptr2];
    }
    return ptr1;
}
