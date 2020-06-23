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
   
   
    int result = 0, n;
    cin >> n;
    vector<string> words(n);
    ford(k,n)
    {
        string ans;
        cin >> ans;
        words[k] = ans;
    }
    vector<string>::iterator it;
    string tetra = "Tetrahedron";
    string cube = "Cube";
    string octa = "Octahedron";
    string dode = "Dodecahedron";
    string ico = "Icosahedron";
    for(it = words.begin(); it <= words.end(); ++it)
    {
        if(*it == tetra)
        {
            result += 4;
        }
        if(*it == cube)
        {
            result += 6;
        }
        if(*it == octa)
        {
            result += 8;
        }
        if(*it == dode)
        {
            result += 12;
        }
        if(*it == ico)
        {
            result += 20;
        }
    }
    
    cout << result;
    return 0;
   
}
