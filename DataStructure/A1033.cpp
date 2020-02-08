//
//  A1033.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/8.
//  Copyright © 2020 none. All rights reserved.
//  3:56  4:56
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(const pair<double,double>& a,const pair<double,double>& b){
    return a.second < b.second;
}
int main(){
    double C,D,A;
    int N;
    double price,d,sum=0.0,store=0.0;
    vector<pair<double,double>> v;
    cin>>C>>D>>A>>N;
    for(int i=0;i<N;i++){
        scanf("%lf %lf",&price,&d);
        v.push_back(pair<double,double>(price,d));
    }
    sort(v.begin(),v.end(),cmp);
    if(v[0].second!=0){printf("The maximum travel distance = 0.00");return 0;}
    v.push_back(pair<double,double>(0,D));
    for(int i=0;i<v.size();){
        int p=-1;
        for(int j=i+1;j<v.size();j++){
            if((v[j].second-v[i].second)/A<=C )p=j;
            else break;
        }
        if(p==-1){
            printf("The maximum travel distance = %.2lf",v[i].second+C*A);
            return 0;
        }
        bool f=false;
        for(int j=i+1;j<=p;j++){
            if(v[j].first<v[i].first){
                double need=(v[j].second-v[i].second)/A;
                if(store>=need)
                    store-=need;
                else{
                    sum+=(need-store)*v[i].first;
                    store=0;
                }
                i=j;
                f=true;
                break;
            }
        }
        if(!f){
            double Min=99999999;
            int id=i;
            for(int j=i+1;j<=p;j++){
                if(v[j].first<Min){
                    Min=v[j].first;
                    id=j;
                }
            }
            double need=(v[id].second-v[i].second)/A;
            if(store<C){
                sum+=(C-store)*v[i].first;
                store=C;
            }
            store-=need;
            i=id;
        }
        if(i==N)break;
    }
    printf("%.2lf",sum);
    return 0;
}
*/
