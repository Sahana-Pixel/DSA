#include <iostream>
using namespace std;
#include<bits/stdc++.h>

void registers()
{
    string s;
    string p;
    int ui;
    cout<<"name ui password";
    cin>>s>>p>>ui;
    
}
void login()
{
    string s,p;
    int ui;
    cout<<"ui password";
    cin>>p>>ui;
}
void adminlogin()
{
    string s,p;
    int ui;
    cout<<"ui password";
    cin>>p>>ui;
}
void logout()
{
    cout<<"logout successfully";
}

int main()
{
    bool flag=true;
    while(flag)
    {
        int n;
        cout<<"enter 1 ->register\n 2-> login\n 3-> admin login \n 4-> logout";
        cin>>n;
        switch(n)
        {
        case 1: registers(); 
                break;
        case 2:login();
         break;
        case 3:adminlogin();
         break;
        case 4:logout();
         break;
        case 5: break;
        default:
            break;
        }
    }
}