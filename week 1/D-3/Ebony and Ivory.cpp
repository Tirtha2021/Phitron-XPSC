#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx = max(a,b);
    int mn = min(a,b);
    int i=2;
    int val = mx;
    if(c<mn)
    {
        cout<<"No"<<endl;
        return 0;
    }
    if(c%mx==0 or c%mn==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    while(1)
    {
        int biog = c-val;
        if(biog%mn==0)
        {
            cout<<"Yes"<<endl;
            break;
        }
        val = mx*i;
        i++;

        if(val>c)
        {
            cout<<"No"<<endl;
            break;
        }
    }
    return 0;
}

