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

    int T, N, H, count, Hp;
    scanf("%d", &T);
    vi ans(T);

    fi(i,0,T) {
        cin >> N >> H;
        vi A(N), B(N);
        for (auto &i : A) cin >> i;
        sort(A.begin(), A.end(), greater<int>());
        for (auto &i : B) cin >> i;
        sort(B.begin(), B.end(), greater<int>());

        count=0;
        Hp=INT_MAX;
        while (H > 0 && H < Hp) {
            Hp = H;
            fi(j,0,N) {
                H -= A[j];
                if (H <= 0) break;
                H += B[j];
            }
            count++;
        }
        ans[i] = (H <= 0) ? count : -1;
    }

    fi(i,0,T)
        cout << "Case #" << i + 1 << ": " << ans[i] << "\n";
}
