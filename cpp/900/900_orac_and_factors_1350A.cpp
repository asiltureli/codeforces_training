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
    int cases, n ,k;
    bool flag;
    cin >> cases;
    string temp;
    ford(i, cases)
    {
        cin >> n >> k;
        if(n%2 == 0)
        {
            n += k*2;
        }
        else
        {
            ford(ii ,k)
            {
                flag = 0;
                if(n%2 == 0)
                {
                    n += 2*(k-ii+1);
                    break;
                }
                else if (n%3 == 0)
                {
                    n += 3;
                    continue;
                }
                else
                {
                    fors(iii, 1, sqrt(n)/6)
                    {
                        if(n % (6*iii - 1) == 0)
                        {
                            n += 6*iii - 1;
                            flag = 1;
                            break;
                        }
                        else if (n % (6*iii + 1) == 0)
                        {
                            n += 6*iii + 1;
                            flag = 1;
                            break;
                        }
                        
                    }
                    if(!flag)
                    {
                        n += n;
                    }
                }           
            }
        }
        cout << n << endl;
    }
    return 0;
}