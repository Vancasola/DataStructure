//
//  B1023.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/29.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
int main()
{
    int num[11],i=0,pos=1,flag=0;
    char ans[100];
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=1;i<10;i++)
    {
        if(num[i]!=0)
        {
            flag=1;
            ans[0]=i+'0';
            num[i]--;
            break;
        }
    }
    if(flag==0)
    {
        printf("0");
        return 0;
    }
    for(i=0;i<10;i++)
    {
        while(num[i]!=0)
        {
            ans[pos++] = i + '0';
            num[i]--;
        }
    }
    ans[pos]='\0';//*********it is easy to omit '\0' and use wrong index
    printf("%s",ans);
    return 0;
}
*/
