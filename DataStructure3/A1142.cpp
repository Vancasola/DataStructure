//
//  A1142.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/23.
//  Copyright © 2020 none. All rights reserved.
//  10:29 10:43
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    int n,e,a,b,t;
    set<pair<int,int>> s;
    cin>>n>>e;
    for(int i=0;i<e;i++){
        scanf("%d %d",&a,&b);
        s.insert(pair<int,int>(a,b));
        s.insert(pair<int,int>(b,a));
    }
    int k,m;
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&m);
        vector<int> v;
        set<int> st;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&t);
            v.push_back(t);
            st.insert(t);
        }
        bool f=true;
        for(int j=0;j<m;j++){
            for(int k=j+1;k<m;k++){
                if(s.find(pair<int,int>(v[j],v[k]))==s.end()){
                    printf("Not a Clique\n");
                    f=false;
                    break;
                }
            }
            if(!f)break;
        }
        if(!f)continue;
        for(int j=1;j<=n;j++){
            if(st.find(j)!=st.end())continue;
            bool f1=true;
            for(int k=0;k<m;k++){
                if(s.find(pair<int,int>(j,v[k]))==s.end()){
                    f1=false;
                    break;
                }
            }
            if(f1){
                printf("Not Maximal\n");
                f=false;
                break;
            }
        }
        if(!f)continue;
        printf("Yes\n");
    }
    return 0;
}
*/
