#include <iostream>
using namespace std;
#include<bits/stdc++.h>

class Animal
{
    public:
    virtual void sound()
    {
        cout<<"animal";
    }
};
class Dog:public Animal
{
    public:
    void sound()
    {
        cout<<"dog";
    }
};
int main()
{
    // binding to stype static binding if object dynamic memory
    Dog d;
    d.sound();
    // d.Animal::sound();
    Animal* a=new Dog;
    a->sound();
    return 0;
}