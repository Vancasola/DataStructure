//
//  A1149.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/28.
//  Copyright © 2020 none. All rights reserved.
//  3:10 3:23
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <set>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    set<int> s[100005],st;
    int n,m,k,t,a,b;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        s[a].insert(b);
        s[b].insert(a);
    }
    for(int i=0;i<m;i++){
        cin>>k;
        st.clear();
        bool f=true;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&t);
            st.insert(t);
        }
        for(set<int>::iterator it=st.begin();it!=st.end();it++){
            for(set<int>::iterator it1=s[*it].begin();it1!=s[*it].end();it1++){
                if(st.find(*it1)!=st.end()){
                    f=false;
                    break;
                }
            }
        }
        if(f)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
*/
