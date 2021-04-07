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
#include <fstream>

using namespace std;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
 
#define ford(x,n) for(int x = 0; x < n; ++x)
#define fors(x,k,n) for(int x=k; x < n; ++x)
#define forsm(x,k,n) for(int x=k; x > n; --x)
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
 
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     

    int cases, len_substr, result;
    string w1, w2;
    cin >> cases;
    ford(n, cases)
    {
        len_substr = 0;
        cin >> w1 >> w2;
        int s1 = w1.size();
        int s2 = w2.size();
        for(int len = 1; len <= min(s1,s2); ++len)
        {
            for(int st1 = 0; st1 + len <= s1; ++st1)
            {
                for(int st2 = 0; st2 + len <= s2; ++st2)
                {
                    if(w1.substr(st1, len) == w2.substr(st2, len))
                    {
                        len_substr = len;
                    }
                }
            }
        }
        result = (max(s1,s2) - len_substr) + (min(s1,s2) - len_substr);
        cout << result << endl;
    }


    return 0;
}