//
//  B1040.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/29.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <string.h>
/*
int main()
{
    int p,a,t,ret=0,count=0;
    int firstA=1,firstP=1;
    char pat[100005];
    gets(pat);
    int len = strlen(pat);
    for(p=0;p<len;p++)
    {
        if(pat[p]!='P')continue;
        for(a=p+1,firstA=1,count=0;a<len;a++){
            //printf("a==%d %d\n",a,ret);
            if(a>=len)break;
            if(pat[a]=='A'&&firstA)
            {
                for(t=a;t<len;t++){
                    if(pat[t]=='T')count++;
                }
                ret+=count;
                firstA=0;
            }
            else if(pat[a]=='A')
            {
                ret+=count;
            }
            else if(pat[a]=='T')
            {
                if(count>0)count--;
                continue;
            }
            else if(pat[a]=='P')continue;
            ret%=1000000007;
        }
    }
    printf("%d",ret);
    return 0;
}
*/
//consider symetrical situations to find regulation.
/*
int main()
{
    char pat[100010];
    int p[100010]={0},t[100010]={0},result = 0;
    scanf("%s",&pat);
    int len = strlen(pat);
    for(int i=1;i<len;i++)
    {
        if(pat[i-1]=='P')p[i]=p[i-1]+1;
        else p[i]=p[i-1];
    }
    for(int i=len-2;i>0;i--)
    {
        if(pat[i+1]=='T')t[i]=t[i+1]+1;
        else t[i]=t[i+1];
    }
    for(int i=1;i<len-1;i++)
    {
        if(pat[i]=='A')result+=p[i]*t[i];
        result%=1000000007;
    }
    printf("%d",result);
    return 0;
}
*/
