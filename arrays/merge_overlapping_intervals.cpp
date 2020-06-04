/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}

vector<Interval> Solution::merge(vector<Interval> &A) {

    int n = A.size();
    if (n <= 0)
        return A;

    vector<Interval> ans;
    sort(A.begin(),A.end(), compareInterval);

    ans.push_back(A[0]);

    for (int i = 1 ; i < n; i++)
    {
        int x = ans.size() -1;
        if(ans[x].end < A[i].start)
            ans.push_back(A[i]);
        else if(ans[x].end <= A[i].end)
        {
            ans[x].end = A[i].end;
        }
    }
    return ans;
}
