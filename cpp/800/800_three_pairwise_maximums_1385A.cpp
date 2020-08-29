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
#define forsm(x,k,n) for(int x=k; x > n; --x)
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
    int cases, temp1, temp2, x, y, z;
    cin >> cases;
    ford(i,cases)
    {
        cin >> x >> y >> z;
        if(x == y && x == z)
        {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
            continue;
        }
        temp1 = MAX(x,MAX(y,z));
        if(temp1 == x && temp1 == y || temp1 == x & temp1 == z || temp1 == y && temp1 == z)
        {
            temp2 = MIN(x, MIN(y,z));
            cout << "YES" << endl;
            cout << temp1 << " " << temp2 << " " << temp2 << endl;          
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;

}