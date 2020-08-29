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
    int result = 0, leng = 0;
    cin >> leng;
    vector<char> wrd(leng);
    char tem;
    ford(i,leng)
    {
        cin >> tem;
        wrd[i] = tolower(tem);
    }
    if(wrd.size() < 26)
    {
        cout << "NO";
    }
    else
    {
        int co = 0;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        stack<char> alp;
        for(char k:alphabet)
        {
            alp.push(k);
        }
        char temp;
        bool flag = 1;
        ford(p, 26)
        {
            flag = 1;
            temp = alp.top();
            alp.pop();
            for(char d: wrd)
            {
                if (d == temp)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag){break;}
        }
        
        if(!flag)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";    
        }
        
    }
    return 0;   
}
