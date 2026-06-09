#include <iostream>
using namespace std;
#include<bits/stdc++.h>

struct dog{
    string name;

    dog()
    {
        name="dummy";
        cout<<this->name;
    }
};
class animal{
    public:
    string variant;
    animal()
    {
        this->variant="hello";
    }
};
