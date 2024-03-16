#include<bits/stdc++.h>
using namespace std;
bool flag = false;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int i=1,ans=0;
    while (1)
    {
        int x = a*i;
        if((x>c))
        {
            break;
        }
        ans+=b;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}
