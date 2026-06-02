// string stream ->
//3 LC
#include <iostream>
using namespace std;
#include<bits/stdc++.h>
string substr(int st,int end,string s)
{
    string result="";
    for(int i=st;i<end;i++)
    {
        result+=s[i];
    }
    return result;
}

bool empty(int st,int end,string s)
{
    for(int i=st;i<end;i++)
    {
        if(s[i]!=' ')
        {
            return false;
        }
        else 
         return true;
    }
}

int count(int st,int end,string s)
{
    int c=0;
    for(auto str:s)
    {
        c++;
    }
    return c;
}

// repeated substring
bool repeatedSubstringPattern(string s) {
        string t = s + s;
        return t.find(s, 1) != s.size();
}

int finds(int st,int end,string s,char k)
{
    for(int i=0;i<end;i++)
    {
        if(s[i]==k)
        {
            return i;
            
        }
    }
}

string append(string s,string p)
{
    // int lens=s.length();
    // for(auto str:p)
    // {
    //     s+=str;
    // }
    // return s;
    s+=p;
    return s;
    
}

int lenghtword(string s)
{
    int c=0;
    stringstream ss(s);
    string a,res;
    while(ss>>a)
    {
        res=a;
    }
    c=res.size();
    return c;
    // for(int i=s.length()-1;i>=0;i--)
    // {
    //     if(s[i]==' ')
    //     {
    //         return c;
    //     }
    //     c++;
    // }
    
}

string revserse(string s)
{
    int c=0;
    stringstream ss(s);
    string word,res="";
    vector<string> temp;
    while(ss>>word)
    {
        temp.push_back(word);
    }
    reverse(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++)
    {
        
        res+=temp[i];
        res+=' ';
    }
    
    return res;
}

// repeated substring patter
bool repeated(string s)
{
    string doubled="";
    string trimmed=doubled.substr(1,doubled.size()-1);

    // if(trimmed.find(s)!=string::npose) 
    //     return true;
    // else 
    //     return false;
}

int longest(string s)
{
    int right=0,left=0;
    int cnt[120]={0};int maxi=0;
    for(right;right<s.size();right++)
    {
        cnt[s[right]]++;
        while(cnt[s[right]]>1)
        {
            cnt[s[left]]--;left++;

        }
        maxi=max(maxi,right-left+1);
    }
}




// valid palindrome
bool palindrome(string s)
{
    int l=0,r=s.length()-1;
    while(l<r)
    {
        if(s[l]!=s[r])
        {
            return false;
        }
        l++,r--;
    }
    return true;
}

// longest common prefix


int main()
{
    // string name;
    // string dept;
    // int classno;
    // cout<<"enter name dept class no";
    // getline(cin,name);  
    // getline(cin,dept); 
    string s="aaaa";
    string p="aaaaaa";
    // cout<<revserse(s);
    // cout<<lenghtword(s);
    // cout<<repeated(s);
    // cout<<lenghtword(s);
    cout<<palindrome(s);

    // cout<<empty(0,6,s);
    // cout<<finds(0,6,s,'s');
    // cout<<append(s,p);
    
    // cin>>name>>dept>>classno;
    // cout<<"---------------------------------\n";
    // cout<<name<<"\n"<<dept<<"\n";
    return 0;

}