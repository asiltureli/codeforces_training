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
    // insert code here...
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
    unsigned int in_num, temp;
    float cont;
    cin >> in_num;
    ford(x,in_num)
    {
        cin >> temp;
        cont += temp;   
    }
    cont = cont / in_num;
    cout << cont << endl;
    return 0;
}
