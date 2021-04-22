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

    int k, counter = 0;
    string s;
    bool flag = true;
    int chs[26] = {0};
    cin >> k;
    cin >> s;
    int s_len = s.length();
    for(char i: s)
    {
        chs[i-97]++;
    }
    for(char i:s)
    {
        if(chs[i-97])
        {
            if(chs[i-97] % k == 0)
            {
                continue;
            }
            else
            {
                flag = false;
            }
        }
    }
    if(flag)
    {
        for(int kk = 0; kk < k; kk++)
        {
            for(char i = 'a'; i <= 'z'; i++)
            {
                if(chs[i-97])
                {
                    for(int qqq = 0; qqq < chs[i-97] / k; qqq++)
                    cout << i;
                }
            }
        }
    }
    else
    {
        cout << -1;
    }
    return 0;
}