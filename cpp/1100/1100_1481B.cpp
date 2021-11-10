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
 
    int k,n,casess, temp;
    cin >> casess;
    ford(x,casess)
    {
        vector<int> mountains;
        cin >> n >> k;
        ford(xx, n)
        {
            cin >> temp;
            mountains.push_back(temp);
        }
        int last_ball;
        if(n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        ford(ball, k)
        {
            ford(m_idx,n-1)
            {
                if(mountains[m_idx] >= mountains[m_idx+1])
                {
                    if(m_idx == n-2)
                    {
                        last_ball = -1;
                        break;
                    }
                    last_ball = m_idx+2;
                    continue;                    
                }
                else
                {
                    mountains[m_idx]++;
                    last_ball = m_idx+1;
                    break;
                }
            }      
            if(last_ball == -1) break;      
        }
    cout << last_ball << endl;

    }
    return 0;
}
