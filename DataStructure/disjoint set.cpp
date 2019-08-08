//
//  disjoint set.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/7.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
void init(int f[],int n)
{
    for(int i=0;i<=n;i++)f[i]=i;
}
int findfather(int f[], int x)
{
    while(x!=f[x])
    {
        x=f[x];
    }
    return x;
}
void Un(int f[], int a, int b)
{
    int fa,fb;
    fa=findfather(f, a);
    fb=findfather(f, b);
    f[b] = fa;
}
void compression(int f[], int x)
{
    int root = findfather(f, x);
    int z;
    while(x!=f[x])
    {
        z=f[x];
        f[x]=root;
        x=z;
    }
}
int main(void)
{
    int father[10000];
    int n=0,m=0,i=0,j=0,a=0,b=0;
    int ans=0;
    scanf("%d %d",&n,&m);
    init(father,n);
    //for(int i=1;i<=n;i++)printf("%d",father[i]);
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        Un(father,a,b);
        compression(father, a);
    }
    for(i=1;i<=n;i++)printf("%d ",father[i]);

    for(i=1;i<=n;i++)
    {
        if(father[i]==i)ans++;
    }
    printf("\n%d",ans);
    return 0;
}
*/
