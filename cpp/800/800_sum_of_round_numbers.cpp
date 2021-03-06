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
#define fors(x,n,k) for(int x=k; x < n; ++x)
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
    int cases;
    cin >> cases;
    int number_in, temp, len, temp2;
    stack<int> divi;
    ford(k,cases)
    {
        int flag_d = 1;
        cin >> number_in;
        while(number_in > 0)
        {
            if(number_in%10 > 0)
            {
                divi.push((number_in%10) * flag_d);
            }
            number_in /= 10;
            flag_d *= 10;
        }
        len = divi.size();
        cout << len << endl;
        ford(i, len)
        {
            cout << divi.top() << " ";
            divi.pop();
        }
        cout << endl;
    }

    return 0;   
}