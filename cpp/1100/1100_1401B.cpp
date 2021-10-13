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

    int c;
    cin >> c;
    int64_t x_1, x_2, y_1, y_2, z_1, z_2, score;
    ford(lop, c)
    {
        score = 0;
        cin >> x_1 >> y_1 >> z_1;
        cin >> x_2 >> y_2 >> z_2;

        
        int m;
        m = MIN(z_1, y_2);
        score += 2* m;
        z_1 -= m;
        y_2 -= m;

        m = MIN(x_1, z_2);
        x_1 -= m;
        z_2 -= m;

        m = MIN(y_1, x_2);
        y_1 -= m;
        x_2 -= m;

        
        m = MIN(y_1, z_2);

        score -= 2*m;

        cout<<score << endl;
    }

    return 0;
}