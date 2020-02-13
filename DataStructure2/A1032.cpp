
//
//  A1032.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/13.
//  Copyright © 2020 none. All rights reserved.
//  3:07 3:19
/*
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct node{
    int addr,next;
    char x;
    int cnt=0;
}a[100005];
int main(){
    int h1,h2,n;
    int addr,next;
    char x;
    cin>>h1>>h2>>n;
    if(h1==h2){printf("%05d",h1);return 0;}
    for(int i=0;i<n;i++){
        scanf("%d %c %d",&addr,&x,&next);
        a[addr].addr=addr;
        a[addr].x=x;
        a[addr].next=next;
    }
    for(int i=h1;i!=-1;i=a[i].next)
        if(a[i].next!=-1)a[a[i].next].cnt++;
    for(int i=h2;i!=-1;i=a[i].next)
        if(a[i].next!=-1)a[a[i].next].cnt++;
    for(int i=h1;i!=-1;i=a[i].next){
        if(a[i].cnt>=2){
            printf("%05d",a[i].addr);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
*/
