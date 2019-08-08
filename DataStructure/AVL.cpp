//
//  AVL.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/8.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;
struct node
{
    int data;
    node* lc,*rc;
    int h;
};
node* newnode(int data)
{
    node* root = new node;
    root->data=data;
    root->lc = root->rc = NULL;
    root->h=1;
    return root;
}
int getheight(node* root)
{
    if(root==NULL)return 0;
    else return root->h;
}
int getfactor(node* n)
{
    return getheight(n->lc)-getheight(n->rc);
}
void updateheight(node* n)
{
    n->h = max(getheight(n->lc),getheight(n->rc))+1;
    return;
}
void search(node* root, int data)
{
    if(root==NULL)return;
    else if(data==root->data)
    {
        printf("%d",root->data);
    }
    else if(data<root->data)
    {
        search(root->lc,data);
    }
    else if(root)
    {
        search(root->rc,data);
    }
    return;
}
void R(node* &root)
{
    node* l=root->lc;
    root->lc = l->rc;
    l->rc = root;
    updateheight(root);
    updateheight(l);
    root = l;
}
void L(node* &root)
{
    node* r=root->rc;
    root->rc=r->lc;
    r->lc=root;
    updateheight(root);
    updateheight(r);
    root = r;
}
void layerorder(node* root);
void insert(node* &root, int data)
{
    if(root==NULL)
    {
        root = newnode(data);
        return;
    }
    if(data<root->data)
    {
        insert(root->lc, data);
        updateheight(root);
        if(getfactor(root)==2)
        {
            if(getfactor(root->lc)==1)
            {
                R(root);
            }
            else if(getfactor(root->lc)==-1)
            {
                L(root->lc);
                R(root);
            }
        }
    }
    else
    {
        insert(root->rc, data);
        updateheight(root);
        if(getfactor(root)==-2)
        {
            if(getfactor(root->rc)==1)
            {
                R(root->rc);
                L(root);
            }
            else if(getfactor(root->rc)==-1)
            {
                L(root);
            }
        }
    }
}
void preorder(node* root)
{
    if(root==NULL)return;
    printf("%d ",root->data);
    preorder(root->lc);
    preorder(root->rc);
}
void inorder(node* root)
{
    if(root==NULL)return;
    inorder(root->lc);
    printf("%d ",root->data);
    inorder(root->rc);
}
void postorder(node* root)
{
    if(root==NULL)return;
    postorder(root->lc);
    postorder(root->rc);
    printf("%d ",root->data);
}
void layerorder(node* root)
{
    if(root==NULL)return;
    queue<node*> q;
    node* n;
    q.push(root);
    while(!q.empty())
    {
        n = q.front();
        printf("%d ",n->data);
        q.pop();
        if(n->lc!=NULL)q.push(n->lc);
        if(n->rc!=NULL)q.push(n->rc);
    }
    putchar('\n');
}
node* create(int a[],int n)
{
    node* root = NULL;
    for(int i=0;i<n;i++)
    {
        insert(root, a[i]);
    }
    return root;
}
int main()
{
    int a[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    node* root = create(a, n);
    preorder(root);
    putchar('\n');
    inorder(root);
    putchar('\n');
    postorder(root);
    putchar('\n');
    layerorder(root);
    return 0;
}*/
