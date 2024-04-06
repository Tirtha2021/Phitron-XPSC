#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define mid(l,r) ((r+l)/2)
#define left(node) (node*2)
#define right(node) (node*2+1)
#define mx_int_prime 999999937

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int sum_digit(int x) { int sum=0; while(x>0){ sum+=x%10; x/=10; } return sum; }
int reverse_num(int n){ int tmp=n, ans=0, r; while(tmp>0){ r=tmp%10; ans=ans*10+r; tmp/=10; } return ans; }
ll factorial(ll n){ ll i, ans=1; for(i=n; i>1; i--){ans*=i;} return ans; }
ll gcd(ll num1, ll num2) { ll a,b,r; a=num1; b=num2; r=a%b; while(r>0){ a=b; b=r; r=a%b; } return b; }
ll lcm(ll num1, ll num2) { return (num1*num2)/gcd(num1, num2); }
bool prime(ll n) { if(n<2) return false; for(ll i=2;i<=sqrt(n);i++){ if(n%i==0)return false;} return true; }

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
///int dx[] = {0, 0, +1, -1};
///int dy[] = {+1, -1, 0, 0};
///int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
///int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};


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

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    ll sum=0;
    ll cnt=0;
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    vector<ll>vec;
    for(ll i=0;i<n/2;i++)
    {
        if(str[i]=='L')
        {
            sum+=(n-i-1);
            cnt++;
            vec.PB((n-i-1)-i);
        }
        else
        {
            sum+=(n-i-1);
        }
    }
    for(ll i=n/2;i<n;i++)
    {
        if(str[i]=='R')
        {
            sum+=(i);
            cnt++;
            vec.PB(i-(n-i-1));
        }
        else
        {
            sum+=(i);
        }
    }
    //dbg(vec);
    sort(all(vec),greater<ll>());
    vector<ll>ans(n+1);
    for(ll i=sz(vec)-1;i<=n;i++)
    {
        ans[i]=sum;
    }
    for(ll i=sz(vec)-1;i>=1;i--)
    {
        sum-=vec.back();
        vec.pop_back();
        ans[i]=sum;
    }
    for(ll i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
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

