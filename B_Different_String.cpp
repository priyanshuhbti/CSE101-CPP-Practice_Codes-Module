/* ॐ श्री वेंकटेश्वराये नमो नमः */ 
/* श्रीमन नारायण नमो नमः */

#include <bits/stdc++.h>
using namespace std;

/* Code written by Priyanshu Yadav IIT Kanpur  */
 //Zyada idhar udhar pagalao nhi..Do only codeforces and also do only prepare for your exams 
         //COdeforces +GATE CSE only..
         //Zyada in sb me mt pado AI/ML ..Backend ..DEvops ..
         //Ekk baar rating bn gyi .. then ye sbb tou hota hi rhega 


/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define f(i, s, e) for (long long int i = s; i < e; i++)
#define cf(i, s, e) for (long long int i = s; i <= e; i++)
#define rf(i, e, s) for (long long int i = e - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back


/* PRINTS */
template <class T>
void print(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
void input(vector<ll>& v) {
    for (auto& x : v) {
        cin >> x;
    }
}
/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a, int b) { if (a < b) return a; return b; }
ll min(int a, ll b) { if (a < b) return a; return b; }
ll max(ll a, int b) { if (a > b) return a; return b; }
ll max(int a, ll b) { if (a > b) return a; return b; }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 'a' - 'A'; return a; }
string to_lower(string a) { for (int i = 0; i < (int)a.size(); ++i) if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 'a' - 'A'; return a; }
bool prime(ll a) { if (a == 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;

/* clang-format on */

/* Main()  function */
int main()
{
     ios::sync_with_stdio(0); 
      cin.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif

    ll t;
    cin >> t;
    while (t--)
    {
        //SOlution form here onwards..
        string str;
        cin>>str;
        bool ok=false;

        for(int i=1; i<str.length(); i++){
            if(str[i] !=str[0]){ swap(str[i],str[0]); ok=true; break; }
        }
        if(!ok){
            cout<<"NO"<<endl;
           

        }else{
            cout<<"YES"<<endl;
            cout<<str<<endl;

        }



    }
    return 0;
}