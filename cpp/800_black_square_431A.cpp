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
using namespace std;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
 
#define ford(x,n) for(int x = 0; x < n; ++x)
#define fors(x,k,n) for(int x=k; x < n; ++x)
#define forsm(x,k,n) for(int x=k; x > n; --x)
typedef long long ll;
typedef pair<int, int> pii;
 
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
    int cases, a_1, a_2, a_3, a_4;
    cin >> a_1 >> a_2 >> a_3 >> a_4;
    string inp_str;
    cin >> inp_str;
    int a_1_c = count(inp_str.begin(), inp_str.end(), '1');
    int a_2_c = count(inp_str.begin(), inp_str.end(), '2');
    int a_3_c = count(inp_str.begin(), inp_str.end(), '3');
    int a_4_c = count(inp_str.begin(), inp_str.end(), '4');

    cases = a_1*a_1_c + a_2*a_2_c + a_3*a_3_c + a_4*a_4_c;
    cout << cases;
    
    return 0;

}