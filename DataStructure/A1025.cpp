//
//  A1025.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/29.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef struct Student
{
    char id[14];
    int score;
    int place;
    int rank;
    int lrank;
}stu;
void display(stu &s)
{
    printf("%s %d %d %d",s.id,s.rank,s.place,s.lrank);
}
bool cmp(stu& s1,stu& s2)
{
    if(s1.score!=s2.score)return s1.score>s2.score;
    else return strcmp(s1.id,s2.id)<0;//*************
}
void local_rank(stu s[],int from,int to)
{
    int i=0,j=0,lr=1;
    for(i=from,j=0;i<to;i++,j++)
    {
        if(i!=0&&s[i].score!=s[i-1].score)lr=j+1;
        s[i].lrank=lr;
    }
}
int main()
{
    int i=0,j=0,p=0,p0=0,N=0,k=0,r=1,lr=1;
    stu s[30001];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            s[p].place = i+1;
            scanf("%s %d",s[p].id,&s[p].score);
            p++;
        }
        sort(s+p0,s+p,cmp);
        local_rank(s,p0,p);
        p0=p;
    }
    sort(s,s+p,cmp);
    for(i=0,j=0;i<p;i++,j++)
    {
        if(i!=0&&s[i].score!=s[i-1].score)r=j+1;
        s[i].rank=r;
    }
    printf("%d\n",p);
    for(i=0;i<p-1;i++)
    {
        display(s[i]);
        putchar('\n');
    }
    display(s[i]);
    return 0;
}
