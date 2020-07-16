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
    
    int cases,a,b,temp, result;
    cin >> cases;
    ford(k,cases)
    {
        cin >> a >> b;
        if(a > b)
        {
            if(2*b > a)
            {
                result = 4*b*b;
            }
            else
            {
                result = a*a;
            }
            
        }
        else
        {
            if(2*a > b)
            {
                result = 4*a*a;
            }
            else
            {
                result = b*b;
            }
        }

        cout << result << endl;

    }
    
    return 0;   
}