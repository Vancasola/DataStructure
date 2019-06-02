//
//  LinkList.hpp
//  DataStructure
//
//  Created by vancasola on 2019/6/1.
//  Copyright © 2019 none. All rights reserved.
//

#ifndef LinkList_hpp
#define LinkList_hpp

#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct LNode{
    ElemType Data;
    struct LNode *next;
}LNode, *LinkList;
LinkList List_HeaderInsert(LinkList L);
LinkList List_TailInsert(LinkList L);
LinkList List_Insert(LinkList L, ElemType* e, int i);
LinkList List_PreInsert(LinkList L, ElemType* e, ElemType* i);
int List_GetLength(LinkList L);
LNode* GetElem(LinkList L, int i);
LNode* LocateElem(LinkList L, ElemType *e);
LinkList List_Delete(LinkList L, int i);
LinkList List_DeleteElem(LinkList L, ElemType *e);
void List_Print(LinkList L);
#endif /* LinkList_hpp */
