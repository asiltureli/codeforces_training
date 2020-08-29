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
    int cases, gifts, temp;
    long long counter;
    long long min_a, min_b;
    long long dif_a, dif_b;
    cin >> cases;

    ford(k, cases)
    {
        vector<int> a, b;
        cin >> gifts;
        counter = 0;
        ford(x, gifts)
        {
            cin >> temp;
            a.push_back(temp);
        }
        ford(x, gifts)
        {
            cin >> temp;
            b.push_back(temp);
        }

        min_a = *min_element(a.begin(), a.end());
        min_b = *min_element(b.begin(), b.end());

        ford(x, gifts)
        {
            dif_a = a.at(x) - min_a;
            dif_b = b.at(x) - min_b;
            counter += MAX(dif_a, dif_b);
        }
        cout << counter << endl;
    }
    
    return 0;

}