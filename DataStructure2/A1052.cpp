//
//  A1052.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/15.
//  Copyright © 2020 none. All rights reserved.
//  9:50 10:06
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
struct node{
    int x,addr,next;
}a[100005],b[100005];
bool cmp(const node& a,const node& b){
    return a.x<b.x;
}
int main(){
    int h,n,addr,x,next,i,p;
    cin>>n>>h;
    if(!n)return 0;
    if(h==-1){printf("0 -1");return 0;}
    bool f=false;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&x,&next);
        a[addr].addr=addr;
        a[addr].x=x;
        a[addr].next=next;
    }
    for( i=h,p=0;i!=-1;i=a[i].next,p++)
        b[p]=a[i];
    sort(b,b+p,cmp);
    printf("%d %05d\n",p,b[0].addr);
    for(int i=0;i<p-1;i++)
        printf("%05d %d %05d\n",b[i].addr,b[i].x,b[i+1].addr);
    printf("%05d %d %d",b[p-1].addr,b[p-1].x,-1);
    return 0;
}
*/
