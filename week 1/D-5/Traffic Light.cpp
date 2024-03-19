#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve()
{
    int n;
    cin>>n;
    char ch;
    cin>>ch;
    string str;
    cin>>str;
    str = str+str;
    int sz = str.size();
    int lock=-1;
    int ans=0;
    if(ch == 'g')
    {
        cout << 0 <<endl;
        return;
    }
    for(int i=0;i<sz;i++)
    {
        if(lock==-1)
        {
            if(str[i]==ch)
            lock=i;
        }
        else
        {
            if(str[i]=='g')
            {
                ans=max(ans,i-lock);
                lock=-1;
            }
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

