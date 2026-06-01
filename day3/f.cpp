#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    vector<int>nums={1,2,3,4};
    int k=2;
    int maxi=0;
    int l=0;
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=nums[i];
    }
    maxi=max(sum,maxi);
    for(int i=k;i<nums.size();i++)
    {
        sum-=nums[l++];
        sum+=nums[i];
        maxi=max(maxi,sum);

    }
    cout<<maxi;
    return 0;
}