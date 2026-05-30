#include <iostream>
using namespace std;

void printf(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
void printh(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==1||i==n)
        {
            cout<<"*";
        }
        else
        {cout<<" ";}
    }
    cout<<endl;
    
}

int main()
{
    printf(5);
    printh(5);
    printf(5);
    cout<<endl<<endl;
    int n=5;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 ||i==n|| j==1 || j==n )
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
  
           
        }
           cout<<endl;
        
       
    }
}