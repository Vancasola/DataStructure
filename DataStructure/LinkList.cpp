//
//  LinkList.cpp
//  DataStructure
//
//  Created by vancasola on 2019/6/1.
//  Copyright © 2019 none. All rights reserved.
//

#include "LinkList.hpp"
LinkList List_HeaderInsert(LinkList L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    ElemType e;
    LNode* s;
    printf("Header insert, please enter your number:\n");
    scanf("%d", &e);
    while(e!=9999)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->Data = e;
        s->next = L->next;
        L->next = s;
        scanf("%d", &e);
    }
    return L;
}
LinkList List_TailInsert(LinkList L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    LNode* t = L;
    LNode* s;
    ElemType e;
    printf("Tail insert, please enter your number:\n");
    scanf("%d",&e);
    while(e!=9999)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->Data = e;
        s->next = NULL;
        t->next = s;
        t = s;
        scanf("%d",&e);
    }
    return L;
}
LNode* GetElem(LinkList L, int i)
{
    LNode* p = L->next;
    int j = 1;
    if(i==0)return L;
    else if(i<0)return NULL;
    while(p && j<i)
    {
        p = p->next;
        j++;
    }
    return p;
}
LNode* LocateElem(LinkList L, ElemType *e)
{
    LNode* p = L->next;
    while(p&&p->Data!=*e)
        p = p->next;
    return p;
}
LinkList List_Insert(LinkList L, ElemType* e, int i)
{
    LNode* p = GetElem(L, i-1);
    LNode* t = (LNode*)malloc(sizeof(LNode));
    t->Data = *e;
    t->next = p->next;
    p->next = t;
    return L;
}
LinkList List_PreInsert(LinkList L, ElemType* e, ElemType* i)
{
    LNode* p = LocateElem(L, e);
    LNode* t = (LNode*)malloc(sizeof(LNode));
    LNode* temp = (LNode*)malloc(sizeof(LNode));
    t->Data = *i;
    t->next = p->next;
    p->next = t;
    temp->Data = p->Data;
    temp->next = t->next;
    p->Data = t->Data;
    p->next = temp;
    free(t);
    return L;
}
LinkList List_Delete(LinkList L, int i)
{
    if(i<=0)
    {
        printf("i is illegal.\n");
    }
    LNode* p = GetElem(L, i-1);
    if(!p)
    {
        printf("The i node is null.\n");
        return NULL;
    }
    LNode *t = p->next;
    p->next = t->next;
    free(t);
    return L;
}
LinkList List_DeleteElem(LinkList L, ElemType *e)
{
    LNode* p = LocateElem(L, e), *t;
    if(!p->next)
    {
        p = NULL;
        free(p);
    }
    else{
        p->Data = p->next->Data;
        t = p->next;
        p->next = p->next->next;
        free(t);
    }
    return L;
}
int List_GetLength(LinkList L)
{
    int len = 0;
    LNode* p = L->next;
    while(p)
    {
        len++;
        p=p->next;
    }
    return len;
}
void List_Print(LinkList L)
{
    LNode* s=L->next;
    while(s->next)
    {
        printf("%d ",s->Data);
        s = s->next;
    }
    if(s)
        printf("%d\n",s->Data);
}
