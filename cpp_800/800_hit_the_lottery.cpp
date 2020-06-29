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
 
#define ford(x,n) for(int x = 0; x < n; ++x)
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
    int inp;
    cin >> inp;
    int result = 0;
    vector<int> bills{100,20,10,5};
    int div = 0;
    for(int k:bills)
    {
        div = inp / k;
        if(div > 0)
        {
            result += div;
            inp -= k*div;
        }
    }
    result += inp;
    cout << result;
    
    return 0;   
}