//
//  main.cpp
//  DataStructure
//
//  Created by vancasola on 2019/6/1.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
/*
#include "SeqList.hpp"
int MaxSize = 100;
int main(int argc, const char * argv[]) {
    SqList *L = ListInit(MaxSize);
    ElemType e = 0;
    int lct = 1;
    for(lct = 1; lct <= 10; lct++)
    {
        e = lct;
        ListInsert(L, lct, &e);
    }
    lct = 1;
    for(int i = 1; i <= 5; i++)
    {
        ListPrint(L);
        ListDelete(L, lct);
    }
    ListPrint(L);
    ListFree(L);
    return 0;
}
*/
#include "LinkList.hpp"
int main(int argc, const char * argv[])
{
    LinkList L;
    int e = 5, i = 4;
    L = List_TailInsert(L);
    List_Insert(L, &e, 2);
    List_PreInsert(L, &e, &i);
    List_Delete(L, 10);
    List_Print(L);
    List_DeleteElem(L, &e);
    List_Print(L);
    printf("2: %d\n",GetElem(L,2)->Data);
    //printf("2: %d\n",LocateElem(L,&e)->Data);
    printf("the length: %d\n",List_GetLength(L));
    return 0;
}
