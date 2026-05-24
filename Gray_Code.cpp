#include <bits/stdc++.h>
using namespace std;

vector<string> f( int n ){
    if( n == 1 ){
        return { "0" , "1" } ;
    }
    vector<string> prev = f(n-1) ;
    vector<string> rev = prev ;
    reverse(rev.begin(),rev.end()) ;

    int sz = prev.size() ;
    int i = 0 ;
    while( i < sz ){
        prev[i] = "0" + prev[i] ;
        rev[i] = "1" + rev[i] ;
        prev.push_back(rev[i]) ;
        i++ ;
    }
    return prev ;
}
int main(){
    int n ;
    cin >> n ;

    vector<string> res = f(n);
    for (auto code : res)
        cout << code << "\n";
    return 0 ;
}