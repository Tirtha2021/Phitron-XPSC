
///   9  6  9   ///
/// AIM CM at CF *__* asap.
/// I were also a novice when I started.
/// Never open a rank list until and unless I done with solving problems.
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a) * (a))

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


void err(istream_iterator<string> it) { cout << endl; }
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) {
    cout << *it << " = " << a << " "; err(++it, args...); }

template<class T1, class T2> ostream &operator<<(ostream &os, pair<T1, T2> &p) {
    os << "{" << p.first << ", " << p.second << "} "; return os; }

template<class T> ostream &operator<<(ostream &os, vector<T> &v) {
    os << "[ "; for (int i = 0; i < v.size(); i++) { os << v[i] << " "; } os << "]"; return os; }

template<class T> ostream &operator<<(ostream &os, deque<T> &v) {
    os << "[ "; for (int i = 0; i < v.size(); i++) { os << v[i] << " "; } os << "]"; return os; }

template<class T> ostream &operator<<(ostream &os, set<T> &v) {
    os << "[ "; for (T i : v) { os << i << " "; } os << "]"; return os; }

template<class T> ostream &operator<<(ostream &os, multiset<T> &v) {
    os << "[ "; for (T i : v) { os << i << " "; } os << "]"; return os; }

template<class T1, class T2> ostream &operator<<(ostream &os, map<T1, T2> &v) {
    for (auto i : v) { os << "Key : " << i.first << " , Value : " << i.second << endl; } return os; }

template<class T1, class T2> ostream &operator<<(ostream &os, unordered_map<T1, T2> &v) {
    for (auto i : v) { os << "Key : " << i.first << " , Value : " << i.second << endl; } return os; }

#define HERE cout << "here - " << __LINE__ << "\n";
#define debug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); \
    istream_iterator<string> _it(_ss); err(_it, args); }


void TEST_CASES()
{
    ll n;
    cin>>n;
    ll arr[n+3];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    ll mx=0, mn = -1000000100;
    vector<ll>vec;

    bool tb=0,bt=0;
    for(ll i=1;i<=n;i++)
    {
        ll x = arr[i];
        //debug(x);
        if(x<0)
        {
            if(mx!=0 and bt==0)
            {
                vec.PB(mx);
                bt=1;
                mx=0;
                tb=0;
            }
            if(x>mn)
            {
                mn = x;
            }
            else
            {
                mn = mn;
            }
        }

        if(x>0)
        {
            if(mn!=-1000000100 and tb==0)
            {
                vec.PB(mn);
                tb=1;
                mn=-1000000100;
                bt=0;
            }
            if(x>mx)
            {
                mx = x;
            }
            else
            {
                mx = mx;
            }
        }
    }
    //debug(vec);
    if(mx!=0)
    {
        vec.PB(mx);
    }
    if(mn!= -1000000100)
    {
        vec.PB(mn);
    }

    //debug(vec);
    ll sum=0;

    ll ans = accumulate(all(vec),sum);

    cout<<ans<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}


