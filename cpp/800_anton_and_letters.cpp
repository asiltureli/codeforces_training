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
   
    vector<char> inp(0);
    char temp;
    int result;
    ford(k,1000)
    {
        cin >> temp;
        if (temp == '{' || temp == ','){continue;}
        if (temp== '}'){break;}
        inp.insert(inp.end(),temp);
    }
    sort(inp.begin(), inp.end());
    vector<char>::iterator it;
    it = unique(inp.begin(), inp.end());
    inp.resize(distance(inp.begin(), it));
    result = inp.size();
    cout << result;
    return 0;
   
}
