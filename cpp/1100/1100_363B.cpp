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

    
    int n, k, temp, min = 0, temp_min = 0, idx = 1, start, end;
    cin >> n >> k;
    vector<int> veci;
    cin >> start;
    min += start;
    veci.push_back(start);
    fors(ii,1, k)
    {
        cin >> temp;
        veci.push_back(temp);
        min += temp;
    }
    temp_min = min;
    fors(i, k ,n)
    {
        cin >> temp;
        veci.push_back(temp);
        temp_min += temp;
        temp_min -= veci.at(i-k);
        if(temp_min < min)
        {
            min = temp_min;
            idx = i-k +2;
        }
    }
    cout << idx;
    return 0;
}