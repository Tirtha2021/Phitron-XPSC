#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int sz = str.size();
    int arr[26]={0};
    for(int i=0;i<sz;i++)
    {
        arr[str[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            cout<<char(i+'a');
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}


/**


**/

