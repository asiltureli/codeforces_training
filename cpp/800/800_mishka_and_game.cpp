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
#define fors(x,k,n) for(int x=k; x < n; ++x)
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
    int loop, mishka=0, chris=0, m, c;
    cin >> loop;
    ford(k,loop)
    {
        cin >> m >> c;
        if(m > c)
        {
            mishka++;
        }
        if(c > m)
        {
            chris++;
        }
    }

    if(mishka>chris)
    {
        cout << "Mishka";
    }
    if(chris>mishka)
    {
        cout << "Chris";
    }
    if(chris == mishka)
    {
        cout << "Friendship is magic!^^";
    }
    return 0;   
}