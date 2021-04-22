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

    string n,m;
    int lenn, lenm;
    cin >> n >> m;
    lenn = n.length();
    lenm = m.length();
    int cntn = 0, cntm = 0;
    if(lenn == lenm)
    {
        for(int k = 0; k < lenn; k++)
        {
            if(n[k] == 'a'|| n[k] == 'e'|| n[k] == 'i'|| n[k] == 'o'|| n[k] == 'u')
            {
                if(m[k] == 'a'|| m[k] == 'e'|| m[k] == 'i'|| m[k] == 'o'|| m[k] == 'u')
                
                {
                    cntn++;
                    cntm++;
                }
                else
                {
                    cntn--;
                }
            }
            else
            {
                if(!(m[k] == 'a'|| m[k] == 'e'|| m[k] == 'i'|| m[k] == 'o'|| m[k] == 'u'))
                {
                    cntn++;
                    cntm++;
                }
            }
        }
        if(cntm == cntn && cntm)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
        return 0;
    }
    else
    {
        cout << "No";
        return 0;
    }
}