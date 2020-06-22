//
//  800_hulk.cpp
//  Codeforces_cpp
//
//  Created by Mert Asil Türeli on 17.06.20.
//  Copyright © 2020 Mert Asil Türeli. All rights reserved.
//
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
#include <cstring>
using namespace std;

#define ford(x,n) for(int x = 0; x < n; ++x)
typedef long long ll;
typedef pair<int, int> pii;

const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
   
   
    int k,l,m,n,d;
    cin  >> k >> l >> m >> n >> d;
    vector<int> div = {k,l,m,n};
    vector<int> numbers(d,0);
    if (k == 1 || l == 1 || m ==1 || n == 1)
    {
        cout << d;
        return 0;
    }
    ford(x,d)
    {
        ford(y,4)
        {
            if ((x+1)%div[y] == 0)
            {
                numbers[x] = 1;
            }
        }
    }

    cout << count(numbers.begin(), numbers.end(), 1) << endl;
    return 0;
   
}
