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
    int temp, cases;
    vector<int> number;
    cin >> cases;
    ford(k,cases)
    {
        cin >> temp;
        number.push_back(temp);
    } 
    vector<int>::iterator it;
    int amount = 0, counter = 0;
    struct triple
    {
        int a;
        int b;
        int c;
    };
    vector<triple> vec_trip;
    while(1)
    {
        triple temp_s;
        bool find = 1, flag_1 = 1, flag_2 = 1, flag_3 = 1;
        for(it = number.begin(); it != number.end(); it++)
        {
            if(*it == 1 && flag_1)
            {
                flag_1 = 0;
                counter ++;
                temp_s.a = it - number.begin() + 1;
                *it = 0;
            }
            
            if(*it == 2 && flag_2)
            {
                flag_2 = 0;
                temp_s.b = it - number.begin() + 1;
                *it = 0;
                counter ++;
            }

            if(*it == 3 && flag_3)
            {
                flag_3 = 0;
                temp_s.c = it - number.begin() + 1;
                *it = 0;
                counter ++;
            }
            if(counter == 3)
            {
                amount ++;
                vec_trip.push_back(temp_s);
                counter = 0;
                find = 0;
                break;
            }
        }
        if(find)
        {
            break;
        }
    }
    cout << amount << endl;

    for(triple a : vec_trip)
    {
        cout << a.a << " " << a.b << " " << a.c << endl;
    }
    

    return 0;   
}