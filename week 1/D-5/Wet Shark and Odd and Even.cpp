#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+2];
    ll mx = 0,sum=0;
    vector<ll>odd;
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0)
        {
            odd.push_back(arr[i]);
        }
        sum+=arr[i];
    }
    sort(odd.begin(),odd.end());
    sort(arr,arr+n);
    if(n==1)
    {
        if(arr[0]%2!=0)
        {
            cout<<0<<endl;
            return;
        }
    }
    if(sum%2==0)
    {
        cout<<sum<<endl;
        return;
    }
    else
    {
        sum-=odd[0];
        cout<<sum<<endl;
    }
}


int main()
{
    optimize();
    solve();
    return 0;
}

