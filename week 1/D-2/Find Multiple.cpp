#include<bits/stdc++.h>
using namespace std;
bool flag = false;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = -1;
    for(int i=a;i<=b;i++)
    {
        if(i%c==0)
        {
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
