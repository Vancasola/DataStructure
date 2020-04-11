//
//  A1064.cpp
//  DataStructure
//
//  Created by vancasola on 2020/4/11.
//  Copyright © 2020 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;
int a[1010],b[1010],n,t,p=0;
vector<int> v;
void inorder(int x){
    if(2*x+1<n)inorder(2*x+1);
    b[x]=a[p++];
    if(2*x+2<n)inorder(2*x+2);
}
int main(){
    fill(a,a+1010,-1);
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    inorder(0);
    for(int i=0;i<n;i++){
        if(i)printf(" %d",b[i]);
        else printf("%d",b[i]);
    }
    return 0;
}
*/
