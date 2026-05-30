#include <iostream>
using namespace std;
#include<bits/stdc++.h>

class Person
{
    public:
    int apple;
    Person(int value) : apple(value){}

};

int main()
{
    Person a(10);
    cout<<a.apple;
    return 0;

    
}