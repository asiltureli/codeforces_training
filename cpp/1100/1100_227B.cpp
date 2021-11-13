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
 
    int elem_num, elem_q, temp, res;
    cin >> elem_num;
    vector<int> nums;
    int distance[100000] = {0};
    ford(x, elem_num)
    {
        cin >> temp;
        nums.push_back(temp);
        distance[temp] = x + 1;
    }
    cin >> elem_q;
    ll res_1 = 0, res_2 = 0;
    ford(xx,elem_q)
    {
        cin >> temp;
        res_1 += distance[temp];
        res_2 += elem_num - distance[temp] + 1;
    }
    cout << res_1 << " " << res_2; 

    
    return 0;
}
