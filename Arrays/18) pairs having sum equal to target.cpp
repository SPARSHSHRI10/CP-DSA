int pairSum(vector<int> &arr, int n, int target)
{
	int ans = 0;
    int i,j;
    i=0,j=n-1;
    while(i<j)
    {
        if(arr[i] + arr[j] == target)
        {
            ans++;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] < target)
            i++;
        else 
            j--;
    }
    
    if(ans!=0)
    return ans;
    return -1;
}