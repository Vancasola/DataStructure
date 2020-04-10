
//
//  A1106.cpp
//  DataStructure
//
//  Created by 周政演 on 2020/4/10.
//  Copyright © 2020 none. All rights reserved.
//  4:26 4:46
/*
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;
int n,k,t,a=1;
vector<int> v[100005];
double p,r;
double m=99999999;
void dfs(int x,int sum){
    if(v[x].size()==0){
        double total=p*pow(1+r*0.01,sum);
        if(total<m){
            m=total;
            a=1;
        }
        else if(total==m)a++;
        return;
    }
    for(int i=0;i<v[x].size();i++){
        dfs(v[x][i],sum+1);
    }
}
int main(){
    cin>>n>>p>>r;
    for(int i=0;i<n;i++){
        scanf("%d",&k);
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            v[i].push_back(t);
        }
    }
    dfs(0,0);
    printf("%.4lf %d",m,a);
    return 0;
}
*/
