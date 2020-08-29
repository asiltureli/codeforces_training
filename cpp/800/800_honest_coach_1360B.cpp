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

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
 
#define ford(x,n) for(int x = 0; x < n; ++x)
#define fors(x,k,n) for(int x=k; x < n; ++x)
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
    int cases, person, temp, minimum;
   
    cin >> cases;
    ford(a,cases)
    {
        cin >> person;
        vector<int> stren;
        minimum = 99999;
        ford(b, person)
        {
            cin >> temp;
            stren.push_back(temp);
        }
        sort(stren.begin(), stren.end());
        ford(c, stren.size()-1)
        {
            if(abs(stren.at(c) - stren.at(c+1)) < minimum)
            {

                minimum = abs(stren.at(c) - stren.at(c+1));
                
            }
        }
        cout << minimum << endl;   
    }

    
    
    return 0;   
}