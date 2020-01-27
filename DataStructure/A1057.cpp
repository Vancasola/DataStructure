
//
//  A1057.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/27.
//  Copyright © 2020 none. All rights reserved.
//  2:30 4:10
/*
#include <stdio.h>
#include <iostream>
#include <stack>
#include <string>
#include <cstring>
using namespace std;
int main(){
    int n,t,top=-1;
    int v[100010],tbl[100010]={0},b[316]={0};
    char s[20];
    scanf("%d",&n );
    for(int i=0;i<n;i++){
        scanf("%s",s);
        if(!strcmp(s,"Pop")){
            if(top==-1)
                printf("Invalid\n");
            else{
                printf("%d\n",v[top]);
                tbl[v[top]]--;
                b[v[top]/316]--;
                top--;
            }
        }
        else if(!strcmp(s,"Push")){
            scanf("%d",&t);
            top++;
            v[top]=t;
            tbl[t]++;
            b[t/316]++;
        }
        else if(!strcmp(s,"PeekMedian")){
            if(top==-1)
                printf("Invalid\n");
            else
            {
                int k=0;
                int p,i=0;
                if(!(top+1)%2) p=(top+1)/2;
                else p=(top+2)/2;
                while(k+b[i]<p)k+=b[i++];
                i*=316;
                while(k+tbl[i]<p)k+=tbl[i++];
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
*/
