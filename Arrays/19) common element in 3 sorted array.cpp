vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    vector<int>ans,v;
    int i=0,j=0,k=0;
    
    while(i<a.size() && j<b.size() && k<c.size())
    {
        if(a[i] == b[j] && b[j] == c[k])
        {
            ans.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        else
        {
            if(a[i] <= b[j] && a[i] <= c[k])
                i++;
            else if(b[j] <= a[i] && b[j] <= c[k])
                j++;
            else
                k++;
        }
    }
    
    if(ans.size() == 0)
        return ans;
    
    for(i=0;i<ans.size()-1;i++)
    {
        if(ans[i] != ans[i+1])
           v.push_back(ans[i]); 
    }
    
    v.push_back(ans[i]);
    return v;
}