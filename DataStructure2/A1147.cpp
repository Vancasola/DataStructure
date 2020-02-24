//
//  A1147.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/24.
//  Copyright © 2020 none. All rights reserved.
//  3:51 4:15
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int a[1005];
    int n,m;
vector<int> v;
void display(){
    for(int i=0;i<m-1;i++)
        printf("%d ",v[i]);
    printf("%d\n",v[m-1]);
    v.clear();
}
void postorder(int x){
    if(2*x+1<m)postorder(2*x+1);
    if(2*x+2<m)postorder(2*x+2);
    v.push_back(a[x]);
}
int judge(){
    int f=0,lc,rc;
    for(int i=0;i<m/2;i++){
        lc=2*i+1;
        rc=2*i+2;
        if(lc<m&&rc<m){
            if(!f){
                if(a[lc]<=a[i]&&a[rc]<=a[i])f=1;
                else if(a[lc]>=a[i]&&a[rc]>=a[i])f=-1;
                else {
                    f=-2;
                    return -2;
                }
            }
            else if(f==1&&a[lc]<=a[i]&&a[rc]<=a[i])continue;
            else if(f==-1&&a[lc]>=a[i]&&a[rc]>=a[i])continue;
            else return -2;
        }
        else if(lc<m){
            if(!f){
                if(a[lc]<=a[i])f=1;
                else if(a[lc]>=a[i])f=-1;
                else {
                    f=-2;
                    return -2;
                }
            }
            else if(f==1&&a[lc]<=a[i])continue;
            else if(f==-1&&a[lc]>=a[i])continue;
            else return -2;
        }
    }
    return f;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)scanf("%d",&a[j]);
        postorder(0);
        if(judge()==1)printf("Max Heap\n");
        else if(judge()==-1)printf("Min Heap\n");
        else printf("Not Heap\n");
        display();
    }
    return 0;
}
*/
