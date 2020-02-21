//
//  A1103.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/21.
//  Copyright © 2020 none. All rights reserved.
//  10:07 10:31
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cmath>
using namespace std;
int n,k,p,Max=-1;
vector<int> v,ans;
void dfs(int x,int sum,int cnt){
    v.push_back(x);
    sum+=pow(x,p);
    cnt+=x;
    //cout<<x<<' '<<sum<<' '<<v.size()<<endl;
    if(v.size()>k||sum>n)return ;
    if(v.size()==k && n==sum){
        if(cnt>Max){
            Max=cnt;
            ans=v;
        }
        else if(cnt==Max){
            for(int i=0;i<min(ans.size(),v.size());i++){
                if(ans[i]==v[i])continue;
                else if(v[i]>ans[i]){
                    ans=v;
                    break ;
                }
                else break ;
            }
        }
        return ;
    }
    for(int i=x;i>=1;i--){
        dfs(i,sum,cnt);
        v.pop_back();
    }
}
int main(){
    cin>>n>>k>>p;
    for(int i=pow(double(n),1.0/p)+0.01;i>=1;i--){
        //printf("%d\n",i);
        v.clear();
        dfs(i,0,0);
    }
    if(!ans.size()){
        printf("Impossible\n");
        return 0;
    }
    printf("%d =",n);
    for(int i=0;i<ans.size();i++){
        if(!i){
            printf(" %d^%d",ans[i],p);
        }
        else printf(" + %d^%d",ans[i],p);
    }
    return 0;
}
*/
 
