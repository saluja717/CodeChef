#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll Maximum(ll n,ll a[])
{
    ll maxi=0;
  sort(a,a+n);
  ll i=0;
    maxi=abs(a[i]-a[i+1])+abs(a[i+1]-a[n-1])+abs(a[n-1]-a[i]);
    return maxi;
}
int main()
{
    ll t;
    cin>>t;
    ll n;
    while(t--)
    {
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans = Maximum(n,a);
       cout<<ans<<endl;
    }
    return 0;
}
