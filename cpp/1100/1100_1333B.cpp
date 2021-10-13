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
 
    int c, len, temp;
    cin >> c;
    ford(casse,c)
    {
        vector<int> first, second;
        cin >> len;
        bool one = 0, mone = 0;
        ford(x,len)
        {
            cin >> temp;
            first.push_back(temp);
        }
        ford(y, len)
        {
            cin >> temp;
            second.push_back(temp);
        }
        if(first[0] != second[0])
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {   
            bool no_flag = 0;
            ford(z,len)
            {
                if(second[z] > first[z] && !one)
                {
                    no_flag = 1;
                    continue;
                }
                if(second[z] < first[z] && !mone)
                {
                    no_flag = 1;
                    continue;
                }
                if(first[z] == 1) one = 1;
                if(first[z] == -1) mone = 1;
                
            }
            no_flag == 1 ? cout << "NO" << endl : cout <<"YES"<<endl;
        }

    }
    
    return 0;
}
