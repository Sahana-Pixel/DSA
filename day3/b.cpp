#include <iostream>
using namespace std;
#include<bits/stdc++.h>

// diferent type is sent we have to decide the return type : template
// for auto based on parameter type : auto
template<typename T,typename K>
T sum (T a,K b)
{
    return a+b;
}

int main()
{
    int arr[5]={1,12,3};
    int k=12;
    // cout<<*arr; //1
    // cout<<*(arr+1); //2
    bool flag=true;
    for(int i=0;i<sizeof(arr);i++)
    {
        if(arr[i]==k)
        {
            arr[i]=-1;
            cout<<arr[i];
            break;
            
        }
    }
    
    // cout<<sum(2,'a');
    return 0;
}

// vector<int>v={1,2,3};
// v.size()
// v.push_back(4)

// a[i][j]