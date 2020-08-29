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
   
   
    int temp, n, len_x, len_y;
    cin  >> n;
    cin >> len_x;
    vector<int> x(len_x);
    ford(y,len_x)
    {
        cin >> temp;
        x[y] = temp;
    }
    cin >> len_y;
    vector<int> y(len_y);
    ford(i,len_y)
    {
        cin >> temp;
        y[i] = temp;
    }
    
    int len_res = len_x + len_y;
    vector<int> res(0);
    res.insert(res.begin(), x.begin(), x.end());
    res.insert(res.begin(), y.begin(), y.end());
    sort(res.begin(), res.end());
    vector<int>::iterator it;
    it = unique(res.begin(), res.end());
    res.resize(distance(res.begin(), it));
    if (res.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
    
    return 0;
   
}
