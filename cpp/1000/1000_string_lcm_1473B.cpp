//  Codeforces_cpp
//
//  Created by Mert Asil Türeli
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <locale>
#include <queue>
#include <algorithm>
#include <sstream>
#include <stack>
#include <iomanip>
#include <assert.h>
#include <cstdio>
#include <cmath>
#include <iterator>
#include <cstring>
#include <fstream>
#include <numeric>

using namespace std;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
 
#define ford(x,n) for(int x = 0; x < n; ++x)
#define fors(x,k,n) for(int x=k; x < n; ++x)
#define forsm(x,k,n) for(int x=k; x > n; --x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef pair<string, string> pss;
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     

    int cs;
    string t1, t2;
    bool f = false;
    int s1,s2, len1, len2;
    cin >> cs;
    ford(i, cs)
    {
        cin >> t1 >> t2;
        len1 = t1.length();
        len2 = t2.length();
        int g = __gcd(len1,len2);
        string k1 = "";
        string k2 = "";
        s1 = len1 /g;
        s2 = len2/g;
        while(s1)
        {
            k2 += t2;
            --s1;
        }
        while(s2)
        {
            k1 += t1;
            --s2;
        }
        if(!k1.compare(k2))
        {
            cout << k1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    } 
    return 0;
}