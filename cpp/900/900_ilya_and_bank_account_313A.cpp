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
    int acc;
    string str_acc;
    vector<char> char_acc;
    cin >> acc;
    if(acc >= 0)
    {
        cout << acc;
    }
    else
    {
        str_acc = to_string(acc);
        for(char a: str_acc)
        {
            char_acc.push_back(a);
        }
        if(char_acc.at(char_acc.size()-1) > char_acc.at(char_acc.size()-2))
        {
            vector<char>::iterator it = char_acc.begin() + char_acc.size() - 1;
            char_acc.erase(it);
        }
        else
        {
            vector<char>::iterator it = char_acc.begin() + char_acc.size() - 2;
            char_acc.erase(it);
        }
        
        if(char_acc.size() == 2 && char_acc.at(1) == '0')
        {
            cout << 0;
            return 0;
        }
        ford(ii, char_acc.size())
        {
            cout << char_acc.at(ii);
        }

    }
    
    
    
    return 0;
}