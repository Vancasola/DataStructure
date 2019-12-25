//
//  A1006.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/25.
//  Copyright © 2019 none. All rights reserved.
//
//7:22-7:46
/*
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
struct id
{
    string name;
    int h1,m1,s1,h2,m2,s2;
};
bool compfirst(struct id &a,struct id &b)
{
    if(a.h1==b.h1)
    {
        if(a.m1=b.m1){
            return a.s1<b.s1;
        }
        return a.m1<b.m1;
    }
    return a.h1<b.h1;
}
bool compsecond(struct id &a,struct id &b)
{
    if(a.h2==b.h2)
    {
        if(a.m2=b.m2){
            return a.s2<b.s2;
        }
        return a.m2<b.m2;
    }
    return a.h2<b.h2;
}
int main()
{
    int N;
    id first,last,t;
    first.h1=9999;first.m1=9999;first.s1=9999;
    last.h2=-1;last.m2=-1;last.s2=-1;
    string a;
    int h1,m1,s1,h2,m2,s2;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>t.name;
        scanf("%d:%d:%d %d:%d:%d",&t.h1,&t.m1,&t.s2,&t.h2,&t.m2,&t.s2);
        if(compfirst(t, first)){
            first=t;
        }
        if(compsecond(last,t)){
            last=t;
        }
    }
    cout<<first.name<<' '<<last.name;
    return 0;
}
*/
