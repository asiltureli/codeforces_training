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
    int cases, length ,result, temp;
    bool flag = 0;

    vector<int> array;
    cin >> cases;

    ford(x, cases)
    {
        cin >> length;
        ford(x, length)
        {
            cin >> temp;
            array.push_back(temp);
        }
        int loop = array.size() - 1;
        sort(array.begin(), array.end());
        int counter = 0;
        ford(y, loop)      
        {       
            if(abs(array.at(y) - array.at(y+1)) <= 1)
            {
                counter ++;
            }
        }

        if(array.size() == counter + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        array.clear();
    }
    
    return 0;   
}