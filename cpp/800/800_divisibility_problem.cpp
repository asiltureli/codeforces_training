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
    int result = 0, leng = 0;
    cin >> leng;
    int temp1, temp2;
    vector<pii> vecp;
    ford(i,leng)
    {
        cin >> temp1 >> temp2;
        vecp.push_back(make_pair(temp1, temp2));
    }
    ford(k, leng)
    {
        if (vecp[k].first % vecp[k].second == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            temp1 = vecp[k].first%vecp[k].second;
            temp1 = vecp[k].second - temp1;
            cout << temp1 << endl;       
        }
        
        
    }
    return 0;   
}
