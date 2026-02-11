#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <iomanip>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

int t;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vpii = vector<pii>;
using vvi = vector<vi>;
using vs = vector<string>;


#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define set_bits __builtin_popcountll
#define vb vector<bool>
#define m(a, b) map<a, b>
#define um(a, b) unordered_map<a, b>
#define f(i, a, b) for (int i = a; i < b; i++)
#define rf(i, a, b) for (int i = a; i >= b; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define fsort(arr) sort(arr.begin(), arr.end())
#define sum(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define maxel(arr) *max_element(arr.begin(), arr.end())
#define minel(arr) *min_element(arr.begin(), arr.end())
#define rsort(arr) sort(arr.rbegin(), arr.rend())
#define take(arr)       \
    for (auto &i : arr) \
        cin >> i;
#define endl "\n"
// #define int long long
#define MOD 1000000007

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // check divisors up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}


void solve(){
    string s ;
    cin >> s ;

    ll n = s.size() ;
    ll i = 0 , ans = 0 ;
    while( i < n ){
        ll j = i + 1 ;
        while( j < n && s[j] == s[i] ){
            j++ ;
        }
        ans = max(ans, j - i ) ;
        i = j ;
    }
    cout << ans ;
}


int main()
{

    solve();

    return 0;
}