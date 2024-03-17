#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll cnt=0;
    ll x = a,i=2;
    while(1)
    {
        if(x>b)
        {
            break;
        }
        x=x*i;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
