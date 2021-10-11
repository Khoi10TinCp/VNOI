/* Authors' info:                                                      */
/*                      Name: Professor Mardeus <3 GND                 */
/*                      Birthday: 17 / 04 / 05                         */
/*                 “The unseen blade is the deadliest”                 */
/*                                                                     */
/*             LOL IG: MardeusVN                                       */
/*             FB: https://www.facebook.com/giaosu.mardeus/            */
/*---------------------------------------------------------------------*/

#include<bits/stdc++.h>
#define NAME "POINTL4"
#define Professor freopen(NAME".INP","r",stdin); freopen(NAME".OUT","w",stdout);
#define FOR(i,x,n) for(int i=x; i<=n; i++)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define long long long
#define pii pair<int,int>
#define ALL(v) v.begin(),v.end()

template<typename T, typename U> inline void amin(T &x, U y) { if(y < x) x = y; }
template<typename T, typename U> inline void amax(T &x, U y) { if(x < y) x = y; }

using namespace std;
const int MOD = 1e9+7;

long Pow(long x, int y, int MOD){
    if (!y) return 1;
    long tmp = Pow(x, y / 2, MOD);
    if (y & 1) return (tmp * tmp % MOD) * x % MOD;
    else return tmp * tmp % MOD;
}

int Mul(int n)
{
    int i=0;
    while (pow(2,i) <= n)
    {
        i++;
    }
    i--;
    return i;
}

long VongLap(int n, int k)
{
    int f = Pow(2,Mul(n),MOD);
    int e = n-Pow(2,Mul(n),MOD);

    if (e==0) return Pow(k,Mul(n),MOD);
    else
        return (VongLap(f,k) + VongLap(e,k)) % MOD;
}

int main()
{
    //Professor;
    fast;
    int T; cin >> T;
    while (T--)
    {
        int n,k; cin >> n >> k;
        cout << VongLap(k,n) << '\n';
    }
return 0;
}
