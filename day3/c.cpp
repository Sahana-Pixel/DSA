// two pointer
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    int arr[5]={1,6,10,14,15};
    
    int k=11;
    int l=0;
    int r=4;
  
    // two pointer
    while(l<r)
    {
        if((arr[l]+arr[r])==k){
            cout<<l<<"\n"<<r;
            exit(0);
        }
        else if((arr[l]+arr[r])>k)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    // brute force
    // for(int i=0;i<5;i++)
    // {
        
    //     for(int j=i+1;j<5;j++)
    //     {
    //         if((arr[i]+arr[j])==k)
    //         {
    //             cout<<i+1;
    //             cout<<",";
    //             cout<<j+1;
    //             break;
    //         }
    //     }
    // }
    return 0;
}