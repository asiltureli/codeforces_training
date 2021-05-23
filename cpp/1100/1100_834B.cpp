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

    
    int k, n, idx;
    string g;
    vector<char> cl;
    vector<pair<int,int>> pa;
    int occ[26] = {0};
    cin >> n >> k;
    cin >> g;
    char tp = g[0];
    cl.push_back(tp);
    occ[(int)tp - 65]++;
    for(int i = 1; i <n; ++i)
    {
        if(tp == g[i])
        {
            continue;
        }
        else
        {
            cl.push_back(g[i]);
            tp = g[i];
            occ[(int)g[i] - 65]++;
        }
    }

    for(int k = 0; k < 26; ++k)
    {
        if(occ[k] >= 1)
        {
            pair<int,int> temp_p;
            char curr = k+65;
            for(int st = 0; st < cl.size(); ++st)
            {
                if(cl[st] == curr)
                {
                    temp_p.first = st;
                    break;
                }
            }

            for(int ed = cl.size()-1; ed >=0 ; --ed)
            {
                if(cl[ed] == curr)
                {
                    temp_p.second = ed;
                    break;
                }
            }
            pa.push_back(temp_p);
        }
    }
    int max_ti = 0;
    for(int ppo = 0; ppo<pa.size(); ++ppo)
    {
        int counter = 0;
        for(int ppin = 0; ppin < pa.size(); ++ppin)
        {
            if(ppo != ppin)
            {
                if((pa[ppo].first > pa[ppin].first && pa[ppo].first < pa[ppin].second) 
                || (pa[ppo].second > pa[ppin].first && pa[ppo].second < pa[ppin].second))
                    counter++;
            }
        }
        counter > max_ti ? max_ti = counter : 1;
    }
    max_ti >= k ? cout << "YES" : cout << "NO";
    return 0;
}