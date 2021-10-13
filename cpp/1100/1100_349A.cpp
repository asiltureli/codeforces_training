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
 
#define ford(x,end) for(int x = 0; x < end; ++x)
#define fors(x,start,end) for(int x=start; x < end; ++x)
#define forsm(x,start,end) for(int x=k; x > n; --x)
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
typedef pair<string, string> pss;
const int INF = 1e9;
const double EPS = 0e-9;
const double PI = acos(-1.);
 
int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
 
    int c,temp;
    cin >> c;
    int s_25 = 0, s_50 = 0;
    ford(casse,c)
    {
        cin >> temp;
        if(temp == 25) 
        {
            s_25++;
            continue;
        }
        if(temp == 50)
        {
            s_50++;
            if(s_25 > 0)
            {
                s_25--;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        
        if(temp == 100)
        {
            if(s_25 > 0 && s_50 > 0)
            {
                s_25--;
                s_50--;
                continue;
            }
            if(s_25 > 2)
            {
                s_25-=3;
                continue;
            }
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}