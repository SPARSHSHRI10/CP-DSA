
#include<bits/stdc++.h>
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
    int st = intervals[0][0];
    int end = intervals[0][1];
    vector<vector<int>>v;
    
    int i;
    for(i=1;i<intervals.size();i++)
    {
        if(intervals[i][0] <= end)
        {
            end = max(end,intervals[i][1]);
        }
        else
        {
            v.push_back({st,end});
            st = intervals[i][0];
            end = intervals[i][1];
        }
    }
    
    v.push_back({st,end});
    return v;
    
}
