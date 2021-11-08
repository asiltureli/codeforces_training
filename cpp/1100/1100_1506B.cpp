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
 
    int c,k,n;
    char temp;
    cin >> c;
    ford(xs, c)
    {
        vector<char> word;
        cin >> n >> k;
        ford(xss, n)
        {
            cin >> temp;
            word.push_back(temp);
        }
        int counter = 0;
        // Replace start
        ford(idx_st, n)
        {
            if(word[idx_st] == '*')
            {
                word[idx_st] = 'x';
                counter++;
                break;
            }
            if(word[idx_st] == 'x')
            {
                break;
            }
        }

        // Replace end
        forsm(idx_end, n, 0)
        {
            if(word[idx_end] == '*')
            {
                word[idx_end] = 'x';
                counter++;
                break;
            }
            if(word[idx_end] == 'x')
            {
                break;
            }
        }

        // Check distance
        ford(run, n)
        {
            if(word[run] == 'x')
            {
                int last_avab_idx;
                bool broke = true;
                fors(in_run, 1, k+1)
                {
                    if(run + in_run >= n)
                    {
                        run = run + in_run;
                        break;
                    }
                    if(word[run+in_run] == 'x')
                    {
                        run = run+in_run-1;
                        broke = true;
                        break;
                    }
                    if(word[run+in_run] == '*')
                    {
                        last_avab_idx = run+in_run;
                        broke = false;
                    }
                }
                if(!broke)
                {
                    word[last_avab_idx] = 'x';
                    counter++;
                    run = last_avab_idx-1;
                }
            }
        }

        cout << counter << endl;

    }
    return 0;
}
