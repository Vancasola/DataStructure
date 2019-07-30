//
//  B1019.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/29.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
int convert(char a[])
{
    int len = strlen(a),ret=0,p=1;
    for(int i=len-1;i>=0;i--)
    {
        ret+=p*(a[i]-'0');
        p*=10;
    }
    return ret;
}
void stoi(int ret,char a[])
{
    int p=1,i=0;
    for(i=0;i<4;i++)
    {
        a[i]=ret%10+'0';
        ret/=10;
    }
}
bool cmp(char a,char b)
{
    return a>b;
}
int main()
{
    char a[5],c[5];
    int ret = 0;
    scanf("%d",&ret);
    stoi(ret,a);
    strcpy(c,a);
    while(1)
    {
        sort(a,a+4);
        sort(c,c+4,cmp);
        ret = convert(c)-convert(a);
        if(ret==0){
            printf("%s - %s = %04d",c,a,ret);
            break;
        }
        else if(ret==6174){
            printf("%s - %s = %04d",c,a,ret);
            break;
        }
        printf("%s - %s = %04d\n",c,a,ret);
        stoi(ret,a);
        strcpy(c,a);
        //printf("a==%s c== %s\n",c,a,ret);
    }
    return 0;
}
*/
