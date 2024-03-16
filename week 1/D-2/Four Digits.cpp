#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int sz = str.size();
    if(sz>=4)
    {
        cout<<str<<endl;
    }
    else if(sz==3)
    {
        cout<<"0"<<str<<endl;
    }
    else if(sz==2)
    {
        cout<<"00"<<str<<endl;
    }
    else if(sz==1)
    {
        cout<<"000"<<str<<endl;
    }
    return 0;
}
