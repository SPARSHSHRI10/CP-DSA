(constant space method)
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    //kth largest using binary search
    int s = -1000000000;
    int g = 1000000000;
    int ans1;
    while(s <= g)
    {
        int mid = s + (g-s)/2;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] >= mid)
            {
                cnt++;
            }
        }
        if(cnt < k)
        {
            g = mid-1;
        }
        else
        {
            ans1 = mid;
            s = mid+1;
        }
    }

    vector<int>v;
    v.push_back(ans1);
    return v;
}

//using priority queue
#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{   
    priority_queue<int,vector<int>,greater<int>>pq1;
    for(int i=0;i<n;i++)
    {
        if(pq1.size() == k)
        {
            if(pq1.top() <= arr[i])
            {
                pq1.pop();
                pq1.push(arr[i]);
            }
        }
        else
        {
            pq1.push(arr[i]);
        }
    }
    int ans1 = pq1.top();
    vector<int>v;
    v.push_back(ans1);
    return v;
}
