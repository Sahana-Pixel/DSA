#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    vector<int>v={1,2,2,4};
    sort(v.begin(),v.end());
    int n=v.size();
    int count=0;
    for(int h=n-1;h>=2;h--)
    {
        int l=0;int r=h-1;
        while(l<r)
        {
            if(v[l]+v[r]>v[h])
            {
                count+=(r-l);
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    cout<<count;
    return 0;
}