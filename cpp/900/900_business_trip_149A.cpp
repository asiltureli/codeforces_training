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
#include <fstream>

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
    int minim, n, counter = 0, mcounter = 0;
    bool flag = 0;
    vector<int> months;  
    cin >> minim;
    ford(i, 12)
    {
        cin >> n;
        months.push_back(n);
    }
    sort(months.begin(), months.end(), greater <>());
    ford(ii, 12)
    {
        if(counter < minim)
        {
            n = months.at(ii);
            counter += n;
            mcounter ++;
        }
        else
        {
            cout << mcounter << endl;
            flag = 1;
            break;
        }       
    }
    if(counter >= minim)
    {
        cout << mcounter << endl;
        flag = 1;
    }
    if(!flag)
    {
        cout << -1 << endl;
    }

    return 0;
}