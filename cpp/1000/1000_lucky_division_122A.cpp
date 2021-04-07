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
#include <fstream>

using namespace std;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
 
#define ford(x,n) for(int x = 0; x < n; ++x)
#define fors(x,k,n) for(int x=k; x < n; ++x)
#define forsm(x,k,n) for(int x=k; x > n; --x)
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
 
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     

    int inp;
    bool flag = false;
    cin >> inp;
    for(int n = 4; n<= 7; n+=3)
    {
        if(inp%n == 0)
        {
            flag = true;
            break;
        }
        for(int nn = 4; nn<= 7; nn+=3)
        {
            if(inp%(nn*10 + n) == 0)
            {
                flag = true;
                break;
            }
            for(int nnn = 4; nnn<=7; nnn+=3)
            {
                if(inp%(nnn*100 + nn*10 + n) == 0)
                {
                    flag = true;
                    break;
                }
            }
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}