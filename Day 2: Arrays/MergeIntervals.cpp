class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<n;i++)
        {
            int first = intervals[i][0];
            int second = intervals[i][1];
            if(!ans.empty() && second <=ans.back()[1])
                continue;
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=second)
                {
                    second=max(second,intervals[j][1]);
                }
            }
            ans.push_back({first,second});
        }
        return ans;
    }
};