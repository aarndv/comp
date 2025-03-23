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

    int T, n, sum_b, sum_s;
    cin >> T;
    vi ans(T);

    fi(i,0,T) {
        sum_b=0; sum_s=0;
        cin >> n;
        vi s(n);
        for (auto &i : s) cin >> i;
        sort(s.begin(),s.end(),greater<int>());
        fi(j,0,n/2) {
            sum_b+=s[j];
            sum_s+=s[j+n/2];
        }
        ans[i] = sum_b - sum_s;
    }

    fi(i,0,T) cout << "Case #" << i+1 << ": " << ans[i] << endl;
}