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

    
    string t1, t2;
    bool flag;
    int cs,ls1, ls2;
    cin >> cs;
    ford(i, cs)
    {   
        flag = false;
        cin >> t1 >> t2;
        ls1 = t1.length();
        ls2 = t2.length();
        if(ls2 < ls1)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            sort(t1.begin(), t1.end());
            ford(ii, ls2 - ls1 + 1)
            {
                string t2Copy = t2.substr(ii, ls1);
                sort(t2Copy.begin(), t2Copy.end());
                if(!t2Copy.compare(t1))
                {
                    flag = true;
                    break;
                }
            }

            flag ? cout << "YES" << endl : cout << "NO" << endl;
            
        }
    }
    
}