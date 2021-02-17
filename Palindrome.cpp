Chef likes strings a lot but he likes palindromic strings more. Today, Chef has two strings A and B, 

each consisting of lower case alphabets.

Chef is eager to know whether it is possible to choose some non empty strings s1 and s2 where s1 is a substring of A,

s2 is a substring of B such that s1 + s2 is a palindromic string. 

Here '+' denotes the concatenation between the strings.

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        ll j=0;
        int c[26],d[26];
        for(int i=0;i<26;i++)
        {
            d[i]=0;
            c[i]=0;
        }
        for(int i=0;i<a.length();i++)
        {
            c[a[i]-97]=1;
        }
        for(int i=0;i<b.length();i++)
        {
            d[b[i]-97]=1;
        }
        for(int i=0;i<26;i++)
        {
            if(c[i]==1 && d[i]==1)
            {
                j=1;
                break;
            }
        }
        if(j)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
