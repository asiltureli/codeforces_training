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
   
   
    int result, n;
    cin  >> n;
    vector<int> sold(n);
    ford(k,n)
    {
        int ans;
        cin >> ans;
        sold[k] = ans;
    }
    int max_el = *max_element(sold.begin(), sold.end());
    int min_el = *min_element(sold.begin(), sold.end());
    int max_idx, min_idx;
    vector<int>::iterator it;
    for(it = sold.begin(); it <= sold.end(); ++it)
    {
        if (*it == max_el)
        {
            max_idx = it - sold.begin();
            break;
        }
    }
    for(it = sold.end(); it >= sold.begin(); --it)
    {
        if (*it == min_el)
        {
            min_idx = sold.end() - it;
            break; 
        }
    }
    if (min_idx + max_idx > n)
    {
        result = min_idx + max_idx - 2;
    }
    else
    {
        result = min_idx + max_idx - 1;
    }

    cout << result;
    return 0;
   
}
