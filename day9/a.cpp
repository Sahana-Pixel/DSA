#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    vector<vector<int>>v={{1,1,1},{1,0,1},{1,1,1}};
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;i<v.size();j++)
        {
           cout<<v[i][j];
        }
        cout<<endl;
    }
    // int m,n;
    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;i<v.size();j++)
    //     {
    //         if(v[i][j]==0)
    //         {
    //             m=i;
    //             n=j;
    //         }
    //     }
    // }
    // for(int i=0;i<v.size();i++)
    // {
    //     v[i][m]=0;
    // }
    // for(int i=0;i<v.size();i++)
    // {
    //     v[n][i]=0;
    // }
    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;i<v.size();j++)
    //     {
    //        cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }

    


    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;j<v.size();j++)
    //     {
    //         cout<<v[i][j];
    //     }
    //     cout<<endl;
    // }
    // vector<vector<int>>v2;
    // // for(int i=0;i<v.size();i++)
    // // {
    // //     for(int j=i+1;j<v.size();j++)
    // //     {
    // //         swap(v[i][j],v[j][i]);
    // //     }
    // // }

    // for(int i=0;i<v.size();i++)
    // {
    //     for(int j=0;j<v.size();j++)
    //     {
    //         v2[j][i]=v[i][j];
    //     }
    // }
    // for(int i=0;i<v2.size();i++)
    // {
    //     for(int j=0;j<v2.size();j++)
    //     {
    //         cout<<v2[i][j];
    //     }
    //     cout<<endl;
    // }



    return 0;
}