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
    ios::sync_with_stdio(0);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
 
    int c, k, n, temp;
    cin >> c;
    ford(xs,c)
    {
        cin >> k >> n;
        vector<pii> nums;
        ford(nn, k)
        {
            cin >> temp;
            nums.push_back(make_pair(temp,nn));
        }
        sort(nums.begin(), nums.end());
        int counter = 1;
        for(int st = 1; st < k; ++st)
        {
            if(nums[st-1].second + 1 != nums[st].second) counter++;
        }
        cout << (counter > n ? "No" : "Yes") << "\n";

    }
    return 0;
}
