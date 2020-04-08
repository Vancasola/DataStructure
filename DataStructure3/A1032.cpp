//
//  A1032.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/8.
//  Copyright © 2020 none. All rights reserved.
//  10:40 10:50
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
#include <iostream>
#include <set>
using namespace std;
struct node{
    char x;
    int addr,next;
}a[100005];
int main(){
    int h1,h2,n;
    int addr,next;
    set<int> s;
    char ch;
    cin>>h1>>h2>>n;
    for(int i=0;i<n;i++){
        scanf("%d %c %d",&addr,&ch,&next);
        a[addr].addr=addr;
        a[addr].x=ch;
        a[addr].next=next;
    }
    for(int i=h1;i!=-1;i=a[i].next)
        s.insert(i);
    for(int j=h2;j!=-1;j=a[j].next){
        if(s.find(j)!=s.end()){
            printf("%05d",j);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
*/
