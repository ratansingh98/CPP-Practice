class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int size=intervals.size(), amountRemoved =0;
        
        if(size<=1) return 0;
        
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a, const vector<int>&b){
            return a[1]<b[1];
        });
        
        int previousEnd =intervals[0][1];
        
        for(int i=1;i<size;i++){
            
            if(intervals[i][0] < previousEnd){
                amountRemoved ++;
            }
            else previousEnd = intervals[i][1];
        }
        return amountRemoved;
    }
};