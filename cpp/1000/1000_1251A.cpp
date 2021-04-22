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
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     

    int cs;
    cin >> cs;
    string t1;
    ford(iaa,cs)
    {
        set<char> res;
        cin >> t1;
        if(t1.length() == 1)
        {
            cout << t1 << endl;
            continue;
        }
        ford(i,t1.length()) 
        {
		    int j = i;
		    while (j + 1 < t1.length() && t1[j + 1] == t1[i])
            {
			    j++;
            }
            if ((j - i) % 2 == 0)
            {
			    res.insert(t1[i]);
            }
		i = j;
	}
        for(char a: res)
        {
            cout << a;
        }
        cout << endl;
    }
    return 0;
}