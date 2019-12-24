//
//  heap.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/8.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <algorithm>
using namespace std;
int heap[1000],n;
void downAdjust(int low,int high)
{
    int i=low,j=2*i;
    while(j<=high)
    {
        if(j+1<=high&&heap[j+1]>heap[j])j=j+1;
        if(heap[j]>heap[i])
        {
            swap(heap[i],heap[j]);
            i=j;
            j=2*i;
        }
        else break;
    }
}
void upAdjust(int low,int high)
{
    int i=high,j=i/2;
    while(j>=low)
    {
        if(heap[j]<heap[i])
        {
            swap(heap[i],heap[j]);
            i=j;
            j=i/2;
        }
        else break;
    }
}
void createHeap()
{
    for(int i=n/2+1;i>=0;i--)
        downAdjust(i, n-1);
}
void deleteTop()
{
    heap[0]=heap[n-1];
    n--;
    downAdjust(0, n-1);
}
void insert(int x)
{
    heap[n++]=x;
    upAdjust(0, n-1);
    return;
}
void heapsort()
{
    createHeap();
    for(int i=n-1;i>0;i--)
    {
        swap(heap[i],heap[0]);
        downAdjust(0, i-1);
    }
}
int main()
{
    n=5;
    for(int i=0;i<n;i++)scanf("%d",&heap[i]);
    createHeap();
    insert(6);
    heapsort();
    for(int i=0;i<n;i++)
    {
        printf("%d ",heap[i]);
    }
    putchar('\n');
    createHeap();
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",heap[0]);
        deleteTop();
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<vector<int>> v(3);
    for(int i=0;i<3;i++)
    for(int j=0;j<2;j++)v[i].push_back(j);
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)printf("%d ",v[i][j]);
        cout<<endl;
    }
    printf("%d,%d",v.size(),v[0].size());
    return 0;
}

*/
