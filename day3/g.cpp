#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    vector<int>nums={1,2,3,4};
    int k=2;
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.end()-k,nums.end());
    reverse(nums.begin(),nums.end());
    
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i];
        cout<<endl;
    }

    return 0;
}