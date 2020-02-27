//
//  A1142.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/27.
//  Copyright © 2020 none. All rights reserved.
//  9:50 10:13
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <stack>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;
int main(){
    int n,m,k,h,a,b,t;
    set<int> s[205];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        s[a].insert(b);
        s[b].insert(a);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&h);
        vector<int> v;
        set<int> st;
        for(int j=0;j<h;j++){
            scanf("%d",&t);
            v.push_back(t);
            st.insert(t);
        }
        int f=0;
        for(int j=0;j<h;j++){
            for(int k=j+1;k<h;k++){
                if(s[v[j]].find(v[k])==s[v[j]].end()){
                    f=1;
                    break;
                }
            }
            if(f)break;
        }
        if(f!=1){
            for(int j=1;j<=n;j++){
                if(st.find(j)!=st.end())continue;
                bool f2=true;
                for(set<int>::iterator it=st.begin();it!=st.end();it++){
                    if(s[*it].find(j)==s[*it].end()){
                        f2=false;
                        break;
                    }
                }
                if(f2){
                    f=2;
                    break;
                }
            }
        }
        if(!f)printf("Yes\n");
        else if(f==1)printf("Not a Clique\n");
        else printf("Not Maximal\n");
    }
    return 0;
}
*/
    
