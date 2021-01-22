#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Kth element";
    int k;
    cin>>k;
    sort(a,a+n,greater<int>());
    cout<<a[k-1];
    return 0;
}