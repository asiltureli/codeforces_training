//
//  800_hulk.cpp
//  Codeforces_cpp
//
//  Created by Mert Asil Türeli on 17.06.20.
//  Copyright © 2020 Mert Asil Türeli. All rights reserved.
//

#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    unsigned int in_num;
    scanf("%u", &in_num);
    int grp_cnt = 1;
    char prev_magnet[5], current_magnet[5];
    scanf("%s", &prev_magnet);
    for(int i = 1; i<in_num; ++i)
    {
        scanf("%s", &current_magnet);
        if (current_magnet[0] != prev_magnet[0])
        {
            grp_cnt++;
        }
        prev_magnet[0] = current_magnet[0];

    }
    std::cout << grp_cnt;
    return 0;
}
