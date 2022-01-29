#include<bits/stdc++.h>
int sumOfMaxMin(int arr[], int n)
{
    int g = INT_MIN , s = INT_MAX;
    int i;
    for(i=0;i<n;i++)
    {
        if (arr[i] >= g)
            g = arr[i];
        if(arr[i] <= s)
            s = arr[i];
    }
    
    int ans = s+g;
    return ans;
}
