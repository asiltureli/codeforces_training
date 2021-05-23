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

    
    string n;
    cin >> n;
    int counter = 0, tm = 1;
    for(int i = 0; i < n.size() - 1; ++i)
    {
        if(n[i] == 'V' && n[i+1] == 'K')
        {
            counter++;
            i++;
        }
        if(i < 1 && n[i] == 'K' && n[i+1] == 'K' && tm)
        {
            counter ++;
            tm--;
        }
        if(i >= 1 && n[i-1] == 'K' && n[i] == 'K' && n[i+1] == 'K' && tm)
        {
            counter ++;
            tm--;
        }
        if( i != n.size() - 2)
        {
            if(n[i] == 'V' && n[i+1] == 'V' && n[i+2] == 'V' && tm)
            {
                counter ++;
                i++;
                tm--;
            }
        }
        else
        {
            if(n[i] == 'V' && n[i+1] == 'V' && tm)
            {
                counter ++;
                i++;
                tm--;
            }
        }
    }
    cout << counter;
    return 0;
}