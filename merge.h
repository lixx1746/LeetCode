bool cmp(Interval a, Interval b) { return a.start < b.start; }
class Solution {
public:
    vector<Interval> merge(vector<Interval> &intervals) {
        int n = intervals.size();
        vector<Interval> res;
        if(n <= 0) return res;
        sort(intervals.begin(), intervals.end(), cmp);
        Interval pre;
        bool is_inserted = true;
        for(int i = 0; i < n;){
            if(is_inserted) {
                pre = intervals[i++];
                is_inserted = false;
            }
            else if(pre.end < intervals[i].start) {
                res.push_back(pre);
                is_inserted = true;
            }
            else pre.end = max(intervals[i++].end, pre.end);
        }
        if(!is_inserted) res.push_back(pre);
        return res;
    }
};
