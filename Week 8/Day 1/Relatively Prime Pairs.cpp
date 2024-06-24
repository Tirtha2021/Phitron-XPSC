#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


/// Template
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ){return os << "(" << p.first << ", " << p.second << ")";}

template < typename T >ostream &operator << ( ostream & os, const vector< T > &v ){os << "{";
    for(auto it = v.begin(); it != v.end(); ++it){if( it != v.begin() ) os << ", ";os << *it;}
    return os << "}";}

template < typename T >ostream &operator << ( ostream & os, const set< T > &v ){os << "[";
    for(auto it = v.begin(); it != v.end(); ++it){if( it != v.begin() ) os << ", ";os << *it;}
    return os << "]";}

template < typename T >ostream &operator << ( ostream & os, const multiset< T > &v ){os << "[";
    for(auto it = v.begin(); it != v.end(); ++it){if( it != v.begin() ) os << ", ";os << *it;}
    return os << "]";}

template < typename F, typename S >ostream &operator << ( ostream & os, const map< F, S > &v ){os << "[";
    for(auto it = v.begin(); it != v.end(); ++it){if( it != v.begin() ) os << ", ";os << it -> first << " = " << it -> second ;}
    return os << "]";}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu (){cerr << endl;}

template <typename T>void faltu( T a[], int n ){for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}

template <typename T, typename ... hello>void faltu( T arg, const hello &... rest){cerr << arg << ' ';faltu(rest...);}

typedef long long ll;
int main()
{
    optimize();
    ll a,b;
    cin>>a>>b;
    ll ans = (b-a +1)/2;

    ll x=0;
    if(b>= ans*2)
    {
        cout<<"YES"<<endl;

        for(ll i=a;i<=b;i+=2)
        {
            cout<<i<<" "<<i+1<<endl;
            x++;
            if(x==ans)
            {
                break;
            }
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

/**


**/

