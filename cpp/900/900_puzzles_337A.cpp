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

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
 
#define ford(x,n) for(int x = 0; x < n; ++x)
#define fors(x,k,n) for(int x=k; x < n; ++x)
#define forsm(x,k,n) for(int x=k; x > n; --x)
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
    int n, m, temp, best_idx, best_diff = 10001;
    vector<int> pieces;
    cin >> n >> m;
    ford(i, m)
    {
        cin >> temp;
        pieces.push_back(temp);
    }
    if(n==m)
    {
        best_diff = *max_element(pieces.begin(), pieces.end()) - *min_element(pieces.begin(), pieces.end());
        cout << best_diff;
        return 0;
    }
    sort(pieces.begin(), pieces.end());
    ford(ii, m-n + 1)
    {
        if(pieces.at(ii + n - 1) - pieces.at(ii) < best_diff)
        {
            best_diff = pieces.at(ii + n - 1) - pieces.at(ii);
        }
    }
    cout << best_diff;
    return 0;

}