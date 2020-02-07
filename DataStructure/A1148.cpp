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
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int n;
    vector<int > liar;
    int a[105],c[105],x=999,y=999;
    cin>>n;
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int w1=i,w2=j;
            fill(c,c+105,1);
            c[w1]=c[w2]=-1;
            for(int k=1;k<=n;k++)
                if(c[abs(a[k])]*a[k]<0)
                    liar.push_back(k);
            if( liar.size()==2 && c[abs(liar[0])]+c[abs(liar[1])]==0){
                if(w1<x){
                    x=w1;
                    y=w2;
                }
                else if(w1==x && w2<y){
                    x=w1;
                    y=w2;
                }
            }
            else liar.clear();
        }
    }
    if(x!=999)printf("%d %d\n",x,y);
    else printf("No Solution\n");
    return 0;
}
*/
