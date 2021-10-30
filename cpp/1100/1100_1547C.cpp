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
    ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
 
    int c, k,n,m;
    int temp;
    cin >> c;
    ford(xs, c)
    {
        cin >> k >> n >> m;
        vector<int> mon, pol;
        ford(xss,n)
        {
            cin >> temp;
            mon.push_back(temp);
        }
        ford(xss,m)
        {
            cin >> temp;
            pol.push_back(temp);
        }
        int point_p = 0, point_m = 0;
        bool zort = false;
        vector<int> ses;
        ford(xaa, n+m)
        {
            if(pol[point_p] == 0 && point_p < m)
            {
                k++;
                point_p++;
                ses.push_back(0);
                continue;
            }
            else if(mon[point_m] == 0 && point_m < n)
            {
                k++;
                point_m++;
                ses.push_back(0);
                continue;
            }
            else if(mon[point_m] <= k && point_m < n)
            {
                ses.push_back(mon[point_m]);
                point_m++; 
                                  
            }
            else if(pol[point_p] <= k && point_p < m)
            {
                ses.push_back(pol[point_p]);
                point_p++;
                continue; 
            }
            else
            {
                zort = true;
                cout << -1 << endl;
                break;
            }
            
        }
        if(!zort)
        {
            for(auto k: ses)
            {
                cout << k <<" ";
            }
            cout << endl;
        }

    }
    return 0;
}
