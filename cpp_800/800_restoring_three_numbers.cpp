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
    int temp;
    vector<int> numbers(4);
    ford(k,4)
    {
        cin >> temp;
        numbers[k] = temp;
    }
    vector<int>::iterator ite = max_element(numbers.begin(), numbers.end());
    int add = *ite;
    numbers.erase(ite);
    numbers.shrink_to_fit();

    int a = add - numbers[0];
    int b = add - numbers[1];
    int c = add - numbers[2];
    cout << a << " " << b << " " << c;

    return 0;   
}