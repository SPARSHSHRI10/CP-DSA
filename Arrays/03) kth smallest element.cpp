(constant space method)
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
// kth smallest element using binary search
    int s = -1000000000;
    int g = 1000000000;
    int ans;
    while(s <= g)
    {
        int mid = s + (g-s)/2;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i] <= mid)
            {
                cnt++;
            }
        }
        if(cnt < k)
        {
            s = mid+1;
        }
        else
        {
            ans = mid;
            g = mid-1;
        }
    }
    
    vector<int>v;
    v.push_back(ans);
    return v;
}


//using priority_queue
#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    // kth smallest element
	priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        if(pq.size() == k)
        {
            if(pq.top() >= arr[i])
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        else
        {
            pq.push(arr[i]);
        }
    }
    int ans = pq.top();
    
    vector<int>v;
    v.push_back(ans);
    return v;
}
