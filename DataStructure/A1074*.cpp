//
//  A1074.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/18.
//  Copyright © 2020 none. All rights reserved.
//  9:10
/*
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int h,n,k,p;
int t,x,i;
struct node{
    int addr;
    int data;
    int next;
};
vector<node> l1(100100),l2(100100);
int main(){
    int addr,data,next,cnt=0;
    cin>>h>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&addr,&data,&next);
        l1[addr].addr=addr;
        l1[addr].data=data;
        l1[addr].next=next;
    }
    for(i=0,x=h;x!=-1;x=l1[x].next,i++){
        l2[i]=l1[x];
        cnt++;
    }
    for(int i=0;i<cnt;i+=k){
        if(i+k<=cnt)
        reverse(l2.begin()+i,l2.begin()+i+k);
    }
    for(x=0;x<cnt-1;x++)
        printf("%05d %d %05d\n",l2[x].addr,l2[x].data,l2[x+1].addr);
    printf("%05d %d %d\n",l2[x].addr,l2[x].data,-1);
    return 0;
}
*/
