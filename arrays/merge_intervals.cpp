

    /**
     * Definition for an interval.
     * struct Interval {
     *     int start;
     *     int end;
     *     Interval() : start(0), end(0) {}
     *     Interval(int s, int e) : start(s), end(e) {}
     * };
     */
    vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
        // Do not write main() function.
        // Do not read input, instead use the arguments to the function.
        // Do not print the output, instead return values as specified
        // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

        // base cases
        if(intervals.empty()){
            intervals.push_back(newInterval);
            return intervals;
        }
        if(newInterval.start > intervals[intervals.size()-1].end){
            intervals.push_back(newInterval);
            return intervals;
        }
        if(intervals[0].start > newInterval.end){
            intervals.insert(intervals.begin(),newInterval);
        }
        vector<Interval> ans;
        Interval first;
        int index = 0;
        while (first.start == 0){
            if(newInterval.start > intervals[index].end ){
                ans.push_back(intervals[index]);
                index++;
            }
            else if(newInterval.start < intervals[index].start){
                first.start = newInterval.start ;
            }
            else if(newInterval.start >= intervals[index].start && newInterval.start <= intervals[index].end){
                first.start = intervals[index].start;
            }
        }
        while (first.end ==0){
            if(index>=intervals.size()){
                first.end = newInterval.end;
                ans.push_back(first);
                return ans;
            }
            if(newInterval.end > intervals[index].end ){
                index++;
            }
            else if(newInterval.end < intervals[index].start){
                first.end = newInterval.end;
                ans.push_back(first);
                ans.push_back(intervals[index]);
                index++;
            }
            else if(newInterval.end >= intervals[index].start && newInterval.end <= intervals[index].end){
                first.end = intervals[index].end;
                ans.push_back(first);
                index++;
            }

        }
        while(index < intervals.size()){
            ans.push_back(intervals[index]);
            index++;
        }
        return ans;
    }

