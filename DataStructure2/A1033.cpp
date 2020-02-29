//
//  A1033.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/29.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;
bool cmp(const pair<double,int>&a,const pair<double,int>&b){
    return a.second<b.second;
}
int main(){
    double c,d,a,store=0;
    int n;
    vector<pair<double,double>> v;
    double price,sum=0.0;
    double dis;
    cin>>c>>d>>a>>n;
    for(int i=0;i<n;i++){
        cin>>price>>dis;
        v.push_back(pair<double,double>(price,dis));
    }
    v.push_back(pair<double,double>(0,d));
    sort(v.begin(),v.end(),cmp);
    if(v[0].second!=0){
        printf("The maximum travel distance = %.2lf\n",0);
        return 0;
    }
    for(int i=0;i<n;){
        int index=-1,x=-1;;
        double Min=99999999,t=0;
        bool f=false;
        for(int j=i+1;j<=n;j++){
            if(v[j].second-v[i].second<=c*a){
                f=true;
                if(v[j].first<v[i].first){
                    index=j;
                    break;
                }
                else if(v[j].first<Min){
                    Min=v[j].first;
                    x=j;
                }
            }
            else break;
        }
        if(!f){
            printf("The maximum travel distance = %.2lf\n",v[i].second+c*a);
            return 0;
        }
        //cout<<i<<' '<<index<<' '<<x<<endl;
        if(index!=-1)
        {
            dis=v[index].second-v[i].second;
            if(store>=dis/a)
                store-=dis/a;
            else{
                t=v[i].first*(dis/a-store);
                store=0;
            }
            i=index;
        }
        else {
            dis=v[x].second-v[i].second;
            if(store<c)
                t+=(c-store)*v[i].first;
            store=c-dis/a;
            i=x;
        }
        sum+=t;
    }
    printf("%.2lf",sum);
    return 0;
}
*/
