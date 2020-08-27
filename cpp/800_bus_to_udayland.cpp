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
    int seats;
    cin >> seats;
    vector<string> bus;
    bool flag = 1;
    string temp;
    ford(i, seats)
    {  
        cin >> temp;
        if(flag)
        {
            ford(ii, 4)
            {
                if(temp[ii] == 'O' && temp[ii+1] == 'O')
                {
                    temp[ii] = '+';
                    temp[ii+1] = '+';
                    flag = 0;
                    bus.push_back(temp);
                    break;
                }                            
            }
            if(flag)
            {
                bus.push_back(temp);
            }
        }
        else
        {
            bus.push_back(temp);
            continue;
        }
    }
    if(flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        ford(iii, seats)
        {
            cout << bus.at(iii) << endl;
        }
    }
    
    
    return 0;

}