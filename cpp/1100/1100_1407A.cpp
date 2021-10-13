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
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     

    int cases, elems;
    cin >> cases;
    int p;  
    ford(kk, cases)
    {
        vector<int> nums;
        int sum_z = 0, sum_o = 0;
        cin >> elems;
        ford(kkk, elems)
        {
            cin >> p;
             p==1 ? sum_o++: sum_z++;
        }
        if(sum_o > sum_z)
        {
            if(sum_o%2 == 0)
            {
                cout << sum_o << endl;
                ford(o, sum_o)
                {
                    cout << "1 ";
                }
            }      
            else
            {
                cout << sum_o-1 << endl;
                ford(o, sum_o-1)
                {
                    cout << "1 ";
                }
            }
            cout << endl;
        }
        else
        {
            cout << sum_z << endl;
            ford(o, sum_z)
            {
                cout << "0 ";
            }
            cout << endl;
        }
    }

    return 0;
}