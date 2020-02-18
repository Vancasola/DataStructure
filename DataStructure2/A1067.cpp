//
//  A1067.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/18.
//  Copyright © 2020 none. All rights reserved.
//。12:45 1:22
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
    int n,a[100005],p[100005];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        p[a[i]]=i;
    }
    int q=1;
    int cnt=0;
    while(1){
        if(a[p[0]]!=p[0]){
            cnt++;
            int p1=p[0],p2=p[p[0]];
            swap(a[p[0]],a[p[p[0]]]);
            p[0]=p2;
            p[p1]=p1;
        }
        else if(a[0]==0){
            for(;q<n;q++){
                if(a[q]!=q){
                    cnt++;
                    p[0]=q;
                    p[a[q]]=0;
                    swap(a[0],a[q]);
                    //swap(p[0],p[q]);
                    //cout<<p[0]<<' '<<p[a[q]]<<endl;
                    break;
                }
            }
            if(q==n)break;
        }
//        for(int j=0;j<n;j++)printf("%d ",a[j]);
//        cout<<endl;
    }
    cout<<cnt<<endl;
    return 0;
}
*/
