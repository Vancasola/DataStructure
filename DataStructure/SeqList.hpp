//
//  SeqList.hpp
//  DataStructure
//
//  Created by vancasola on 2019/6/1.
//  Copyright © 2019 none. All rights reserved.
//

#ifndef SeqList_hpp
#define SeqList_hpp
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct{
    ElemType* Data;
    int MaxSize, length;
}SqList;
SqList* ListInit(int &MaxSize);
bool ListInsert(SqList* L, int i,ElemType *e);
bool ListDelete(SqList* L, int i);
int ListLocate(SqList* L, ElemType *e);
void ListPrint(SqList* L);
void ListClear(SqList* L);
bool ListFree(SqList* L);
#endif /* SeqList_hpp */
