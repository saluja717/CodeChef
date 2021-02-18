Two sisters, A and B, play the piano every day. During the day, they can play in any order. 
That is, A might play first and then B, or it could be B first and then A.
But each one of them plays the piano exactly once per day. 
They maintain a common log, in which they write their name whenever they play.
You are given the entries of the log, 
but you're not sure if it has been tampered with or not. Your task is to figure out whether these entries could be valid or not.

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    string n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll j=1;
        for(ll i=0;n[i]!='\0';i+=2)
        {
            if((n[i]=='A' && n[i+1]== 'B') || (n[i]=='B' && n[i+1]=='A'))
            {
                continue;
            }
            else
            {
                j=0;
                break;
            }
        }
        if(j)
        {
            cout<<"yes\n";
        }
        else{
           cout<<"no\n";
        }
    }
    return 0;
}
