#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(int a[],int st,int en)
{
    while(st<en)
    {
        swap(a[st],a[en]);
        st++;
        en--;
    }
}

int main() 
{    
    int n;
    cin>>n;
    int a[n];
    int i,j;
    for(i=0;i<n;i++)
        cin>>a[i];
    int rot;
    cin>>rot;
    rotate(a,0,rot-1);
    rotate(a,rot,n-1);
    rotate(a,0,n-1);
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    cout<<endl;
    
    return 0;
}