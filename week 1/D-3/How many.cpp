#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if((i+j+k)<=a and (i*j*k<=b))
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
