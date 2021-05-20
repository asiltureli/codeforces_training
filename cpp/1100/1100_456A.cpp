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

    
    int p, q, num, max;
    bool flag = false;
    vector<pair<int,int>> vecp;
    cin >> num;
    ford(i, num)
    {
        cin>> p >> q;
        vecp.push_back(make_pair(p,q));
    }
    sort(vecp.begin(), vecp.end());
    pair<int,int> maxp = vecp[0];
    for(int ot = 1; ot < vecp.size(); ++ot)
    {
        if(vecp[ot].second < maxp.second)
        {
            if(vecp[ot].first > maxp.first)
            {   
                flag = true;
                break;
            }
        }
        else
        {
            maxp = vecp[ot];
        }
        if(flag) break;
    }
    if(flag)
    {
        cout << "Happy Alex";
    }
    else
    {
        cout << "Poor Alex";
    }

    return 0;
}