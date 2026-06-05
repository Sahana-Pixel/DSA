#include <iostream>
using namespace std;
#include<bits/stdc++.h>

class Person{
    protected:
    string status;

};

class admin:public Person{
    protected:
    int n;
};

class admin2:public admin{
    
};

int main()
{
    admin a;
    a.n=2.5;
    return 0;
}