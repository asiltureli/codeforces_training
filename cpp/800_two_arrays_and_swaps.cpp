//  Codeforces_cpp
//
//  Created by Mert Asil Türeli
#include <iostream>
#include <stdio.h>
#include <math.h>
//#include <string.h>
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
    int cases, elem, moves, temp, min,  max;
    cin >> cases;
    vector<int> a,b;
    vector<int>::iterator min_p, max_p;
    ford(k,cases)
    {
        cin >> elem >> moves;
        ford(i, elem)
        {
            cin >> temp;
            a.push_back(temp);
        }
        ford(ii, elem)
        {
            cin >> temp;
            b.push_back(temp);
        }

        ford(fin, moves)
        {
            min_p = min_element(a.begin(), a.end());
            min = *min_p;
            max_p = max_element(b.begin(), b.end());
            max = *max_p;

            if(max>min)
            {
                a.erase(min_p);
                b.erase(max_p);

                a.push_back(max);
                b.push_back(min);
            }
            else
            {
                break;
            }
        }
        int result = 0;
        for(int t: a)
        {
            result += t;
        }
        cout << result << endl;
        a.clear();
        b.clear();
    }
    
    return 0;   
}