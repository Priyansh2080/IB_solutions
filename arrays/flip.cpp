vector<int> Solution::flip(string A) {
/*   int a =0  , b = 0 , c = 0;
    vector<int> ans;
    ans.reserve(2);
    for(int i = 0 ; i<A.length(); i++){
        if (A.at(i) == '0'){
            b++;
        }
        else if(A.at(i) == '1' && ans.empty())
            continue;
        else if(A.at(i) == '1'){
            b--;
            c++;
        }

        if(b>a){
            a = b;
            ans[1] = i+1;
            ans[0] = i-a-(2*c)+2;
        }
        else if(b<=0){
           c=0;
           b=0;
        }
    }

return ans;*/

    vector<int> V;
    int begenning=-1;
    int ending=-1;
    int sum=0;
    int finalSum=0;
    int beg=0;
    int end=0;
    for(int i=0;i<A.length();i++)
    {
        int num=A[i]-'0';

        if(num==0)
        {
            sum++;
        }
        else
        {
            sum--;
        }

        if(sum<0)
        {
            sum=0;
            beg=i+1;
        }

        if(sum>finalSum)
        {
            finalSum=sum;
            begenning=beg;
            end=i;
            ending=i;
        }
    }

    if(begenning!=-1 && ending!=-1)
    {
        V.push_back(begenning+1);
        V.push_back(ending+1);
    }

    return V;
}
