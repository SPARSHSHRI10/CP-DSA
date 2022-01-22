vector<int> separateNegativeAndPositive(vector<int> &arr)
{
    int low,high;
    int n = arr.size();
    low = 0,high = n-1;
    while(low <= high)
    {
        if(arr[low] < 0)
        {
            low++;
        }
        else
        {
            swap(arr[high],arr[low]);
            high--;
        }
    }
    return arr;
}