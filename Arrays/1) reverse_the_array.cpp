void reverseArray(vector<int> &arr , int m)
{
	int n = arr.size();
    int i = m+1,j=n-1;
    while(i<j)
    {
        int k = arr[i];
        arr[i] = arr[j];
        arr[j] = k;
        i++;
        j--;
    }
}
