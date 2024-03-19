#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    ll n;
    cin>>n;
    ll arr[n+2];
    ll mx = 0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        mx = max(mx,arr[i]);
    }

    ll i=1,j=1,cnt=0,ans=0;
    while(i<=mx)
    {
        if(i>=arr[j])
        {
            i++;
            j++;
        }
        else if(i<arr[j])
        {
            cnt=(arr[j]-i);
            ans+=cnt;
            i+=(cnt+1);
            j++;
        }
    }
    cout<<ans<<endl;
}


int main()
{
    optimize();
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

