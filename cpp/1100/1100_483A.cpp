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
 
#define endl '\n'
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

#define ford(x,end) for(int x = 0; x < end; ++x)
#define fors(x,start,end) for(int x=start; x < end; ++x)
#define forsm(x,start,end) for(int x=start-1; x >= end; --x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef pair<string, string> pss;
const int INF = 1e9;
const double EPS = 0e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
 
    ll range_1, range_2;
    cin >> range_1 >> range_2;
    if(range_1 + 1 == range_2)
    {
        cout << -1;
        return 0;
    }
    else
    {
        bool found_flag = false;
        ll num_1, num_2, num_3;
        for(num_1 = range_1; num_1 < range_2-1; ++num_1)
        {
            for(num_2 = range_2; num_2 > range_1 +1; --num_2)
            {
                for(num_3 = num_1+1; num_3 < num_2; ++num_3)
                {
                    if(__gcd(num_1, num_2) != 1 && __gcd(num_3, num_2) == 1 && __gcd(num_1, num_3) == 1)
                    {
                        found_flag = true;
                    }
                    if (found_flag) break;
                }
                if (found_flag) break;
            }
            if (found_flag) break;
        }
        found_flag == true ? cout << num_1 << " " << num_3 << " " << num_2 : cout << -1;
    }
    
    return 0;
}
