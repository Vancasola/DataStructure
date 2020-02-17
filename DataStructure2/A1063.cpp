//
//  A1063.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/17.
//  Copyright © 2020 none. All rights reserved.
//  10:27 10:35
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>
using namespace std;
int main(){
    int n,m,k,t;
    set<int> s[51];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m;
        for(int j=0;j<m;j++)
        {
            scanf("%d",&t);
            s[i].insert(t);
        }
    }
    scanf("%d",&k);
    int a,b;
    for(int i=0;i<k;i++){
        scanf("%d %d",&a,&b);
        double sum=0.0;
        for(set<int>::iterator it=s[a].begin();it!=s[a].end();it++){
            if(s[b].find(*it)!=s[b].end())sum++;
        }
        printf("%.1lf%%\n",(sum/(s[a].size()+s[b].size()-sum))*100);
        
    }
    return 0;
}
*/
