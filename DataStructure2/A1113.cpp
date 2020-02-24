//
//  A1113.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/24.
//  Copyright © 2020 none. All rights reserved.
//  3:43 3:51
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n,sum=0;
    int a[100005];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a,a+n);
    //for(int i=0;i<n;i++)printf("%d ",a[i]);
    int s1=0,s2=0,p=0,ansn=9999999,anss=-1;
    for(int i=0;i<n;i++){
        s1+=a[i];
        s2=sum-s1;
        if(abs(i+1-(n-i-1))<ansn){
            ansn=abs(i+1-(n-i-1));
            anss=abs(s1-s2);
        }
        else if(abs(i+1-(n-i-1))==ansn){
            if(anss<abs(s1-s2)){
                anss=abs(s1-s2);
            }
        }
    }
    printf("%d %d",ansn,anss);
    return 0;
}
*/
