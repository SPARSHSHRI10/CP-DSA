long long maxSubarraySum(int a[], int n)
{
    long long sum_here = 0,max_sum = 0;
    int i;
    for(i=0;i<n;i++)
    {
        sum_here += a[i];
        
        if(sum_here >= max_sum)
            max_sum = sum_here;
        
        if(sum_here <= 0)
            sum_here = 0;
    }
    
    return max_sum;
}
