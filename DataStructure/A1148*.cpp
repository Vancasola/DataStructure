//
//  A1148.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/16.
//  Copyright © 2020 none. All rights reserved.
//  2:41
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
struct node {
    int first;
    int second;
    node (int f,int s){first=f;second=s;}
};
struct vote {
    int cnt;
    int human;
};
bool cmp(const node& a, const node& b){
    if(a.first==b.first)return a.second<b.second;
    return a.first<b.first;
}
int main(){
    int n;
    vector<int> s(105);
    vector<node> ans;
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&s[i]);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            vector<int> wolf;
            vector<int> v(105);
            for(int k=1;k<=n;k++){
                if(k==i || k==j){
                    if(-1*s[k]<0)v[abs(s[k])]--;
                    else v[abs(s[k])]++;
                }
                else if(s[k]<0)v[abs(s[k])]--;
                else v[abs(s[k])]++;
            }
            for(int k=1;k<=n;k++){
                if(v[k]<0)wolf.push_back(k);
            }
            cout<<wolf.size()<<endl;
            if(wolf.size()!=2)continue;
            cout<<wolf[0]<<' '<<wolf[1]<<endl;
            if((wolf[0]==i || wolf[0]==j) && (wolf[1]==i || wolf[1]==j)){
                if((wolf[0]==i && wolf[1]==j) || (wolf[0]==j && wolf[1]==i))continue;
                printf("%d %d",i,j);
                return 0;
            }
            
        }
    }
        printf("No Solution");
    return 0;
}
*/
