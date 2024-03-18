#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    string str[3][n];
    map<string,int>mp;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>str[i][j];
            mp[str[i][j]]++;
        }
    }

    for(int i=0;i<3;i++)
    {
        int ans =0;
        for(int j=0;j<n;j++)
        {
            if(mp[str[i][j]]==2)
            {
                ans++;
            }
            else if(mp[str[i][j]]==1)
            {
                ans+=3;
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
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
