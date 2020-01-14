//
//  A1033.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/14.
//  Copyright © 2020 none. All rights reserved.
//  9:28
/*
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct node{
    float price;
    int dis;
}m[505];
bool cmp(const node& a,const node&b){
    return a.dis<b.dis;
}
int main(){
    int cmax,dis,d,n;
    float p=0,sum=0;
    cin>>cmax>>dis>>d>>n;
    for(int i=0;i<n;i++){
        scanf("%f %d",&m[i].price,&m[i].dis);
    }
    m[n].price=0;
    m[n].dis=dis;
    sort(m,m+n+1,cmp);
    for(int i=0;i<n;i++){
        printf("%.2f %d\n",m[i].price,m[i].dis);
    }
    bool f=false;
    p=0;
    for(int i=0;i<n;){
        f=false;
        for(int j=i+1;j<=n;j++){
            if(m[j].price<m[i].price){
                while((m[j].dis-m[i].dis)/d > cmax){
                    j--;
                    f=true;
                }
                printf("%d %d %.2f %d\n",m[i].dis,m[j].dis,m[i].price,(m[j].dis-m[i].dis)/d);
                if(f){
                    sum+=(cmax-p)*m[i].price;
                    p=cmax;
                }
                else {
                    
                    sum+=p;
                    p=0;
                }
                p-=((m[j].dis-m[i].dis)/d);
                i=j;
            }
        }
    }
    printf("%.2f",sum);
    return 0;
}
*/
