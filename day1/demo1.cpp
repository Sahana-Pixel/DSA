
#include<iostream>
using namespace std;
int main()
{
int x=1;
int x(5);
int y=2;
//list initilisation
int y{5};
//type promotion char a   x+a ascii 97+1=98
cout<<x+y;
return 0;
}

// int x=10
// float y=10.5f
// x+y -> 20.5   accuracy float more priority even size id=f eq
// type casting int(10.0)


// bool x=20
// bool y=22
// x+y boolean not inbuilt type stdbool.h we need to include
// <bits/stdc++.h>
// 1+1=10