#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count_cap=0;
    int count_low=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        count_cap++;
        else
        count_low++;
    }
    if(count_cap>count_low)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]+'A'-'a';
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]-'A'+'a';
        }
    }
    cout<<s<<endl;

    return 0;
}