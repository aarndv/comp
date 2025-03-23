#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define fl(i,s,e) for(long long int i=s;i<e;i++)
#define fi(i,s,e) for(int i=s;i<e;i++)
#define bi(i,s,e) for(int i=s;i>=e;i--) 
#define pb push_back

typedef vector<int> vi;
typedef vector<vector<int>> vii;
typedef pair<int, int> ii;

ll gcd(ll a, ll b) {if (b==0) return a; return gcd(b, a%b);}
bool is_prime(ll a) {if (a==0) return 0; for(int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1;}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, N, c;
    cin >> T;
    vi ans(T);
    
    fi(k,0,T) {
        c=0;
        cin >> N;
        vii wg(N, vector<int>(N, 0));
        vi w(N), res(N, 0);
        for (auto &i : w) cin >> i;

        fi(i,0,N) {
            if (w[i] > 0) {
                fi(j,i,N) {
                    wg[i][j] = w[i] - (j - i);
                    if (wg[i][j]==0) break;
                }
            }
            else 
                for(int j=i;j>=0;j--) {
                    wg[i][j] = w[i] + abs(i-j); 
                    if (wg[i][j]==0) break;
                }
        }
        fi(i,0,N) {
            fi(j,0,N) {
                res[i] += wg[j][i];
            }   
            if (res[i] == 0) c++;
        }
        ans[k]=c;
    }

    fi(i,0,T) cout << "Case #" << i+1 << ": " << ans[i] << endl;

}