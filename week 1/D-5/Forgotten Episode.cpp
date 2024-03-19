#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+2];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(ll i=0;i<n;i++)
    {
        if(arr[i]!=(i+1))
        {
            cout<<i<<endl;
            break;
        }
    }
}
int main()
{
    optimize();
    solve();
    return 0;
}

