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
bool is_prime(ll a) {if (a==0) return 0; for(int i=2;i<round(sqrt(a));++i) if (a%i==0) return 0; return 1;}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    scanf("%d", &N);
    fi(i,1,N+1) {
        fi(j,1,N+1) {
            int i2, j2;
            i2 = (i > N / 2) ? N + 1 - i : i;
            j2 = (j > N / 2) ? N + 1 - j : j;
            if (min(i2, j2) % 2 == 0) printf(".");
            else printf("#");
            if (j == N) printf("\n");
        }
    }
}