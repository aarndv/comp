#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fl(i,s,e) for(long long int i=s;i<e;i++)
#define fi(i,s,e) for(int i=s;i<e;i++)
#define pb push_back

typedef vector<int> vi;
typedef pair<int, int> ii;

ll gcd(ll a, ll b) {if (b==0) return a; return gcd(b, a%b);}
bool is_prime(ll a) {if (a==0) return 0; for(int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1;}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    scanf("%d",&N);
    vi v[N];
    for (auto &i : v) cin >> i;
    map<int,int> mp;

    int ans = 1e9;

    fi(i,0,N) {
        if (mp.count(v[i]) == 0) mp[v[i]] = i;
        else {
            int diff = i - mp[v[i]] + 1;
            ans = min(ans, diff);
            mp[v[i]] = i;
        }
    }

    if (ans == 1e9) cout << -1;
    else cout << ans;
}