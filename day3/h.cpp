#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    vector<int>v={1,2,2,1,1,3,4};
    int n=v.size();
    int ind=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
          v[ind++]=v[i];
         
    }
    for(int i=0;i<ind;i++)
    {
        cout<<v[i]<<"\n";
    }
    return 0;
}