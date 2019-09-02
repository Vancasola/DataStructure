//
//  A1025.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/29.
//  Copyright © 2019 none. All rights reserved.
//
/*
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
*/
/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
struct PAT
{
    string id;
    int sc,place;
    int local,all;
}pat[30010];
bool cmp(PAT &p1,PAT &p2)
{
    if(p1.sc!=p2.sc)return p1.sc>p2.sc;
    else return p1.id<p2.id;
}
int n,m;
int main()
{
    cin>>n;
    int j=0,start = 0;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        int k=0;
        for(start = j;k<m;j++,k++)
        {
            cin>>pat[j].id>>pat[j].sc;
            pat[j].place = i+1;
        }
        sort(pat+start,pat+j,cmp);
        int rank=1;
        int last = pat[start+k].sc;
        pat[start+k].local=1;
        for(int k=0;k<=j-start;k++)
        {
            if(last!=pat[start+k].sc)rank=k+1;
            pat[start+k].local = rank;
            last = pat[start+k].sc;
        }
    }
    sort(pat,pat+j,cmp);
    int last = pat[0].sc,rank=1;
    pat[0].all=1;
    for(int k=0;k<j;k++)
    {
        if(last!=pat[k].sc)rank=k+1;
        pat[k].all = rank;
        last = pat[k].sc;
    }
    cout<<j<<endl;
    for(int i=0;i<j;i++)
    {
        cout<<pat[i].id<<' '<<pat[i].all<<' '<<pat[i].place<<' '<<pat[i].local<<endl;
    }
    return 0;
}*/
//9:25-9.57
