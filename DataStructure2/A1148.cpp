//
//  A1148.cpp
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
int main(){
    int a[205],n,t,w1=99999999,w2=99999999;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j)continue;
            if(-1*a[i]>0  ){
                if(-1*a[i]==j || -1*a[i]==i)continue;
            }
            else if(-1*a[i]<0){
                if(a[i]!=j && a[i]!=i)continue;
            }
            if(a[j]>0  ){
                if(a[j]==j || a[j]==i)continue;
            }
            else if(a[j]<0){
                if(-1*a[j]!=j && -1*a[j]!=i)continue;
            }
            int cnt=0;
            for(int k=1;k<=n;k++){
                if(k==i || k==j)continue;
                t=a[k];
                if(t>0&&(t==i || t==j))cnt++;
                else if(t<0 && (-1*t!=i&&-1*t!=j))cnt++;
            }
            //cout<<cnt<<endl;
            if(cnt==1){
                int t1=i,t2=j;
                if(t1>t2)swap(t1,t2);
                if(t1<w1){
                    w1=t1;
                    w2=t2;
                }
                else if(t1==w1 && t2<w2){
                    w1=t1;
                    w2=t2;
                }
                break;
            }
        }
    }
    if(w1!=99999999 && w2!=99999999){
        printf("%d %d",w1,w2);
    }
    else printf("No Solution");
    return 0;
}
*/

