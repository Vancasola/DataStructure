//
//  DFS.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/3.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
int n,v,maxV;
int w[1000]={0},c[1000]={0};
void dfs(int index, int sumw,int sumv)
{
    printf("%d %d %d ",index, sumw, sumv);
    printf("%d %d\n",w[index],c[index]);
    if(index==n)
    {
        //printf("\n");
        return;
    }
    dfs(index + 1,sumw, sumv);
    if(sumw<v)
    {
        dfs(index + 1,sumw + w[index],sumv + c[index]);
    }
    
}
int main(){
    int i=0;
    maxV=0;
    scanf("%d %d",&n,&v);
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    dfs(0,0,0);
    printf("%d",maxV);
    return 0;
}
