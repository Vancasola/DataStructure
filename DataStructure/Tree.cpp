//
//  Tree.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/4.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <queue>
using namespace std;
struct node
{
    int data;
    node* lchild;
    node* rchild;
};
node* root=NULL;
node* newnode(int v)
{
    node* Node = new node;
    Node->data=v;
    Node->lchild=NULL;
    Node->rchild=NULL;
    return Node;
}
void search(node* root, int x, int newdata)
{
    if(root==NULL)return;
    if(root->data==x)
    {
        root->data = x;
        return;
    }
    search(root->lchild,x,newdata);
    search(root->rchild,x,newdata);
}
void insert(node* &root, int x)
{
    if(root==NULL)
    {
        root = newnode(x);
        return;
    }
    if(1)
    {
        insert(root->lchild,x);
    }
    else{
        insert(root->rchild, x);
    }
}
node* Create(int data[],int n)
{
    node* root = NULL;
    for(int i=0;i<n;i++)
    {
        insert(root, data[i]);
    }
    return root;
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d",root->data);
    preorder(root->lchild);
    preorder(root->rchild);
}
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->lchild);
    printf("%d",root->data);
    inorder(root->rchild);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->lchild);
    postorder(root->rchild);
    printf("%d",root->data);
}
void Layerorder(node* root)
{
    queue<node *> q;
    q.push(root);
    node* Node;
    while (!q.empty()) {
        Node=q.front();
        
        printf("%d ",Node->data);
        q.pop();
        if(Node->lchild!=NULL)
        {
            //Node = Node->lchild;
            q.push(Node->lchild);
        }
        if(Node->rchild!=NULL)
        {
            //Node = Node->rchild;
            q.push(Node->rchild);
        }
    }
}
int pre[100],in[100];
node* create(int preL,int preR,int inL,int inR)
{
    if(preL>preR)
    {
        return NULL;
    }
    //printf("%d %d %d %d\n",preL,preR,inL,inR);
    node* root = new node;
    root->data = pre[preR];
    int k;
    for(k=inL;k<=inR;k++)
    {
        if(in[k]==pre[preR]){
            break;
        }
    }
    int numL=k-inL;
    //root->lchild = create(preL+1,preL+numL,inL,k-1);
    //root->rchild = create(preL+1+numL,preR,k+1,inR);
    root->lchild = create(preL,preL+numL-1,inL,k-1);
    root->rchild = create(preL+numL,preR-1,k+1,inR);
    return root;
}
node* buildTree(int root, int start, int end) {
    //printf("%d %d %d\n",root,start,end);
    if(start > end) return NULL;
    int i = start;
    while(i < end && in[i] != pre[root]) i++;
    node* t = new node;
    t->data = pre[root];
    t->lchild = buildTree(root + 1, start, i - 1);
    t->rchild = buildTree(root + 1 + i - start, i + 1, end);
    return t;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&pre[i]);
    for(int i=0;i<n;i++)scanf("%d",&in[i]);
    node* root = create(0, n-1, 0, n-1);
    //node* root = buildTree(0,0,n-1);
    Layerorder(root);
    preorder(root);
    putchar('\n');
    inorder(root);
    putchar('\n');
    postorder(root);
    return 0;
}
*/
/*
 pre
7
2 3 6 4 1 5 7
6 3 2 5 1 4 7
 post
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7
 */
/*
#include <stdio.h>
#include <queue>
using namespace std;
int pre[100],in[100],post[100];
int N=0;
int num=0;
struct node{
    int data;
    node* lchild,*rchild;
};
node* create(int postL, int postR, int inL, int inR)
{
    if(postL>postR)
    {
        return NULL;
    }
    node* root = new node;
    root->data = post[postR];
    int i=0;
    for(i=inL;i<=inR;i++)
    {
        if(post[postR]==in[i])break;
    }
    int numL = i-inL;
    root->lchild= create(postL,postL+numL-1,inL,i-1);
    root->rchild= create(postL+numL,postR-1,i+1,inR);
    return root;
}
void Layerorder(node* root)
{
    queue<node*> q;
    q.push(root);
    node* n;
    while(!q.empty())
    {
        n = q.front();
        printf("%d",n->data);
        if(num++<N-1)printf(" ");
        q.pop();
        if(n->lchild!=NULL)q.push(n->lchild);
        if(n->rchild!=NULL)q.push(n->rchild);
    }
}
int main()
{
    N=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
        scanf("%d", &post[i]);
    for(int i=0;i<N;i++)
        scanf("%d", &in[i]);
    
    node* root = create(0, N-1, 0, N-1);
    Layerorder(root);
    return 0;
}
*/
