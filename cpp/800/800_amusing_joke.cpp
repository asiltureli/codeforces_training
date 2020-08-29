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
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;


    if (word1.size() + word2.size() != word3.size())
    {
        cout << "NO";
    }
    else
    {
        vector<char> vec1(0);
        vector<char> vec3(0);
        for(char i: word1)
        {
            vec1.push_back(i);
        }
        for(char i: word2)
        {
            vec1.push_back(i);
        }
        for(char i: word3)
        {
            vec3.push_back(i);
        }
        sort(vec1.begin(), vec1.end());
        sort(vec3.begin(), vec3.end());
        vec1.push_back('\0');
        vec3.push_back('\0');
        bool flag = 1;
        ford(k,vec1.size())
        {
            cout << vec1[k] << "  " << vec3[k] << endl;
            if (vec1[k] != vec3[k])
            {
                flag = 0;
                break;
            } 
        }
        if (flag)
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
