//
//  SeqList.cpp
//  DataStructure
//
//  Created by vancasola on 2019/6/1.
//  Copyright © 2019 none. All rights reserved.
//

#include "SeqList.hpp"
SqList* ListInit(int& MaxSize)
{
    SqList* L = (SqList*)malloc(sizeof(SqList));
    L->MaxSize = MaxSize;
    L->Data = (ElemType*)malloc(sizeof(L->MaxSize));
    L->length = 0;
    return L;
}
bool ListInsert(SqList* L, int i,ElemType *e)
{
    if(i<1||i>L->length+1){
        printf("The index i out of range");
        return false;
    }
    if(L->length>=L->MaxSize)
    {
        printf("The memory is exhausted.");
        return false;
    }
    L->Data[i-1]=*e;
    L->length++;
    return true;
}
bool ListDelete(SqList* L, int i)
{
    int j = 0;
    if(i<1||i>L->length+1){
        printf("The index i out of range");
        return false;
    }
    for(j = i-1; j<L->length; j++)
    {
        L->Data[j]=L->Data[j+1];
    }
    L->length--;
    return true;
}
int ListLocate(SqList* L, ElemType *e)
{
    int i = 0;
    for(i = 0; i<L->length; i++)
    {
        if(L->Data[i] == *e)return i+1;
    }
    return -1;
}
void ListPrint(SqList* L)
{
    int i = 0;
    for(i = 0; i<L->length-1; i++)
    {
        printf("%d ", L->Data[i]);
    }
    if (i==L->length-1)printf("%d\n", L->Data[i]);
}
void ListClear(SqList* L)
{
    for(int i=0;i<L->length;i++)
        *L->Data=0;
    L->length = 0;
}
bool ListFree(SqList* L)
{
    if(L==NULL){
        printf("The pointer is null.");
        return false;
    }
    free(L);
    return true;
}
