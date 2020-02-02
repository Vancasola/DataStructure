//
//  A1142.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/2.
//  Copyright © 2020 none. All rights reserved.
//  7:40 8:37
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int n,e,k,m,a,b;
set<int> d[205];
vector<int> c(205);
int main(){
    cin>>n>>e;
    for(int i=0;i<e;i++){
        scanf("%d %d",&a,&b);
        d[a].insert(b);
        d[b].insert(a);
    }
    cin>>k;
    for(int i=0;i<k;i++){
        scanf("%d",&m);
        set<int> s;
        for(int j=0;j<m;j++){
            scanf("%d",&c[j]);
            s.insert(c[j]);
        }
        bool isc=false;
        int cnt=0;
        for(int j=0;j<m;j++){
            for(int k=j+1;k<m;k++){
                if(d[c[j]].find(c[k])==d[c[j]].end()){
                    printf("Not a Clique\n");
                    isc=true;
                    break;
                }
                cnt++;
            }
            if(isc)break;
        }
        if(isc)continue;
        //cout<<s1.size();
        bool ism=false;
        for(int j=1;j<=n;j++){
            int sum=0;
            if(s.find(j)==s.end()){
                for(int k=0;k<m;k++){
                    if(c[k]==j)continue;
                    if(d[j].find(c[k])!=d[j].end())sum++;
                }
            }
            if(sum==m){
                printf("Not Maximal\n");
                ism=true;
                break;
            }
        }
        if(!ism)printf("Yes\n");
    }
    return 0;
}
*/
