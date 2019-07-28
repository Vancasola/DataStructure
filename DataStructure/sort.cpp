//
//  sort.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/28.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
/*
void InsertSort(int a[], int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        if(a[i]<a[i-1])
        {
            a[0]=a[i];
        }
        for(j=i-1;a[0]<a[j];j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=a[0];
    }
    return;
}*/
void SelectSort(int a[],int n)
{
    int i,j,min=0,t=0;
    for(i=1;i<n;i++)
    {
        for(j=i+1,min=i;j<=n;j++)
            if(a[j]<a[min])min=j;
        if(min!=i)
        {
            t=a[i];
            a[i]=a[min];
            a[min]=t;
        }
    }
}
/*
int main()
{
    int a[6] = {0,5,4,3,2,1},i=0;
    SelectSort(a, 5);
    for(i=1;i<6;i++)
        printf("%d ",a[i]);
    return 0;
}
 */
