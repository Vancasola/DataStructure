//
//  A1043.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/7.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
struct node
{
    int data;
    node* lc,*rc;
};
void insert(node* &root,int data)
{
    if(root==NULL)
    {
        root = new node;
        root->data= data;
        root->lc=root->rc=NULL;
        return ;
    }
    else if(data<root->data)
    {
        insert(root->lc, data);
    }
    else if(data>root->data)
    {
        insert(root->rc, data);
    }
    else if(data==root->data)
    {
        return;
    }
    return;
}
void search(node* root,int data)
{
    if(root==NULL)return;
    if( root->data == data)
    {
        printf("%d",root->data);
        return;
    }
    else if(data<root->data)
    {
        search(root->lc, data);
    }
    else if(data>root->data)
    {
        search(root->rc, data);
    }
    return;
}
node* create(int a[],int N)
{
    node* root =NULL;
    for(int i=0;i<N;i++)
    {
        insert(root, a[i]);
    }
    return root;
}
node* findMax(node* root)
{
    while(root->rc!=NULL)root=root->rc;
    return root;
    
}
node* findMin(node* root)
{
    while(root->lc!=NULL)root=root->lc;
    return root;
}
void deletenode(node* &root, int data)
{
    if(root==NULL)return;
    else if(root->data==data)
    {
        if(root->lc==NULL&&root->rc==NULL)
        {
            node*t = root;
            root=NULL;
            delete t;
        }
        else if(root->lc!=NULL)
        {
            node* pre = findMax(root->lc);
            root->data = pre->data;
            deletenode(pre, pre->data);
        }
        else
        {
            node* next = findMax(root->rc);
            root->data = next->data;
            deletenode(next, next->data);
        }
        
    }else if(root->data<data)
    {
        deletenode(root->rc, data);
    }
    else if(root->data>data)
    {
        deletenode(root->lc, data);
    }
}
int main()
{
    int a[100],N;
    node* root;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    root = create(a, N);
    search(root, 2);
    deletenode(root, 2);
    search(root, 2);
    return 0;
}/*
/*
 node* root should be define as NULL
 */
/*
#include<stdio.h>
#include <queue>
using namespace std;
struct node
{
    int data;
    node* lc,*rc;
};
void insert(node* & root,int x)
{
    if(root==NULL)
    {
        root = new node;
        root->data = x;
        root->lc=root->rc=NULL;
    }
    else if(x<root->data) insert(root->lc, x);
    else if(x>=root->data)insert(root->rc, x);
}
node* create(int a[],int n)
{
    node* root =NULL;
    for(int i=0;i<n;i++)
    {
        insert(root, a[i]);
    }
    return root;
}
queue<int> q;
queue<int> nq;
void preorder(node* root)
{
    if(root==NULL)return;
    q.push(root->data);
    preorder(root->lc);
    preorder(root->rc);
}
void nextorder(node* root)
{
    if(root==NULL)return;
    nextorder(root->lc);
    nextorder(root->rc);
    nq.push(root->data);
}
void mirrorinsert(node* & root,int x)
{
    if(root==NULL)
    {
        root = new node;
        root->data = x;
        root->lc=root->rc=NULL;
    }
    else if(x>=root->data) mirrorinsert(root->lc, x);
    else if(x<root->data) mirrorinsert(root->rc, x);
}
node* mirrorcreate(int a[],int n)
{
    node* root =NULL;
    for(int i=0;i<n;i++)
    {
        mirrorinsert(root, a[i]);
    }
    return root;
}
int main()
{
    int n,a[1010];
    bool flag1 = true,flag2=true;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    node* root = create(a, n);
    node* mirrorroot = mirrorcreate(a, n);
    preorder(root);
    for(int i=0;i<n;i++)
    {
        if(!q.empty())
        {
            if(a[i]!=q.front()){
                flag1=false;
                break;
            }
            q.pop();
        }
    }
    while(!q.empty())q.pop();
    
    preorder(mirrorroot);
    for(int i=0;i<n;i++)
    {
        if(!q.empty())
        {
            if(a[i]!=q.front()){
                flag2=false;
                break;
            }
            q.pop();
        }
    }
    if(flag1||flag2)
    {
        printf("YES\n");
        
        if(flag1)nextorder(root);
        else if(flag2)nextorder(mirrorroot);
        while(!nq.empty())
        {
            if(nq.size()==1)
            {
                printf("%d",nq.front());
                nq.pop();
                break;
            }
            printf("%d ",nq.front());
            nq.pop();
        }
    }else
    {
        printf("NO");
    }
    return 0;
}
*/
