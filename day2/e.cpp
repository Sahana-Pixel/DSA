#include <iostream>
using namespace std;
#include<bits/stdc++.h>

class Rectangle
{
    public:
    int l,b;
    Rectangle(int l,int b)
    {
        this->l=l;
        this->b=b;
    }
    Rectangle& operator+(Rectangle& r2)
    {
        this->l=this->l+r2.l;
        this->b=this->b+r2.b;
        return *this;
    }
};

int main()
{
    Rectangle r1(10,10);
    Rectangle r2(10,10);

    Rectangle r3=r1+r2;
    cout<<r3.l<<r3.b;
    return 0;


}