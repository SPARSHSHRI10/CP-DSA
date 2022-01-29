//(using 0(n) space and 0(n) time)

#include<bits/stdc++.h>
long getTrappedWater(long *arr, int n)
{
    long lft[10001],rght[10001];
    int i,j;
    lft[0] = arr[0];
    for(i=1;i<n;i++)
    {
        lft[i] = max(lft[i-1],arr[i]);
    }
    
    rght[n-1] = arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        rght[i] = max(rght[i+1],arr[i]);
    }
    
    long sum = 0;
    for(i=0;i<n;i++)
    {
        sum = sum + abs(min(lft[i],rght[i])-arr[i]);
    }
    
    return sum;
}