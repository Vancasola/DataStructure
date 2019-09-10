//
//  7-3.cpp
//  DataStructure
//
//  Created by vancasola on 2019/9/9.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
struct node
{
    string x;
    int lc,rc;
}tr[1000];
void postorder(int u,int deep)
{
    if(u==-1)
    {
        return;
    }
    else
    {
        if(tr[root].rc!=-1&&deep>1)
            printf("(");
        postorder(tr[root].lc,deep+1);
        printf("%s",tr[root].data.c_str());
        postorder(tr[root].rc,deep+1);
        if(tr[root].rc!=-1&&deep>1)
            printf(")");
    }
}
int main()
{
    int n;
    string str;
    int lc,rc;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        getchar();
        cin>>str>>lc>>rc;
        //scanf("%d %d",&lc,&rc);
        tr[i].x = str;
        tr[i].lc = lc;
        tr[i].rc = rc;
        //printf("%d: %c %d %d\n",i,ch , lc ,rc );
        //printf("%d: %s %d %d\n",i,tr[i].x.c_str() , tr[i].lc ,tr[i].rc );
    }
    postorder(5);

    return 0;
}
