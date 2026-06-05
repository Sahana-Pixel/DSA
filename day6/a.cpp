#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    unordered_map<int,string>mp;
    mp[1]="apple";
    mp[2]="banana";
    for(int i=0;i<mp.size();i++)
    {
        cout<<mp[i];
        
    }
    return 0;
}