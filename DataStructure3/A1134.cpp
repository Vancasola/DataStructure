//
//  A1134.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/3.
//  Copyright © 2020 none. All rights reserved.
//  10:42 10:53
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    int n,m,k,a,b;
    set<pair<int,int>> s;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d ",&a,&b);
        s.insert(pair<int,int>(a,b));
    }
    cin>>k;
    int d,t;
    for(int i=0;i<k;i++){
        scanf("%d",&d);
        bool f=true;
        set<int> st;
        for(int j=0;j<d;j++){
            scanf("%d",&t);
            st.insert(t);
        }
        for(set<pair<int,int>>:: iterator it=s.begin();it!=s.end();it++){
            if(st.find((*it).first)==st.end() && st.find((*it).second)==st.end()){
                f=false;
                break;
            }
        }
        if(f)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/
