#include <iostream>
using namespace std;
#include<bits/stdc++.h>

// implemented queue using vector
class Stack
{
    public:
    vector<int>v;
    void push(int i)
    {
        v.push_back(i);
        
    }
    void display()
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<"\n";
        }
    }
    void pop()
    {
        v.erase(v.end()-1);
    }
};

int main()
{
    Stack q;
    q.push(1);
    q.push(5);
    q.push(6);
    q.display();
    q.pop();
    q.pop();
    q.display();
    return 0;
}