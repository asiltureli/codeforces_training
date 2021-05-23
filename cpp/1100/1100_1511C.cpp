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

    
    int q, n, temp;
    vector<int> vi;
    int rank[50] = {0};
    cin >> q >> n;
    for(int i = 0; i < q; ++i)
    {
        cin >> temp;
        int a = rank[temp-1];
        if(a == 0) rank[temp-1] = i+1;
    }

    for(int ii = 0; ii < n; ++ii)
    {
        cin >> temp;
        cout << rank[temp - 1] << " ";
        for(int inn = 0; inn < 50; ++inn)
        {
            if(rank[inn] != 0 && rank[inn] < rank[temp - 1]) rank[inn]++;
        }
        rank[temp-1] = 1;
        
    }

    return 0;
}