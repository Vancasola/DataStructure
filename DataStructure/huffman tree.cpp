//
//  huffman tree.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/8.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <queue>
using namespace std;
int main()
{
    priority_queue <int ,vector<int>,greater<int>> q;
    int n,data,x,y,ans=0;
    scanf("%d ",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        q.push(data);
    }
    while(q.size()>1)
    {
        x = q.top();
        q.pop();
        y = q.top();
        q.pop();
        q.push(x+y);
        ans+=x+y;
    }
    printf("%d",ans);
    return 0;
}
*/
/*
#include <cstdio>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;
struct node
{
    char ch;
    int lw,rw;
    int w;
    node* lc,*rc;
};
struct cmp
{
    bool operator () ( node *&a, node *&b)const
    {
        return a->w > b->w;
    }
};
node* newnode(char ch, int weight)
{
    node* n = new node;
    n->ch = ch;
    n->lc=n->rc=NULL;
    n->lw = 1;
    n->rw = 0;
    n->w = weight;
    return n;
}
void preorder(node* root)
{
    if(root==NULL)return;
    printf("%d ",root->w);
    if(root->lc!=NULL)preorder(root->lc);
    if(root->rc!=NULL)preorder(root->rc);
}
void inorder(node* root)
{
    if(root==NULL)return;
    if(root->lc!=NULL)inorder(root->lc);
    printf("%d ",root->w);
    if(root->rc!=NULL)inorder(root->rc);
}
void search(node* root, const char ch,queue<int> code,int c)
{
    //for(int i=0;i<code.size();i++)printf("%d",code[i]);
    //putchar('\n');
    code.push(c);
    if(root->ch==ch)
    {
        if(!code.empty())code.pop();
        while(!code.empty())
        {
            printf("%d",code.front());
            code.pop();
        }
        putchar('\n');
        return;
    }
    if(root==NULL)
    {
        cout<<"cannot find the "<<ch<<endl;;
        return ;
    }
    if(root->lc!=NULL)
    {
        search(root->lc,ch,code,1);
    }
    if(root->rc!=NULL)
    {
        search(root->rc,ch,code,0);
    }
    return ;
}
int main()
{
    int n,i,a[100];
    node Node, *root,*n1,*n2,*N;
    priority_queue <node*,vector<node*>,cmp> q;
    
    cin>>n;
    //for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)
    {
        N = newnode('a'+i,i+1);
        q.push(N);
    }
    while(q.size()>1)
    {
        n1 = q.top();
        q.pop();
        n2 = q.top();
        q.pop();
        //cout<<n1.w<<' '<<n2.w<<endl;
        node* N = new node;
        N->ch = '#';
        N->lc = n1;
        N->rc = n2;
        N->lw = 1;
        N->rw = 0;
        N->w = n1->w + n2->w;
        //printf("%c:%d ",Node->ch,Node->w);
        q.push(N);
    }
    N = q.top();
    q.pop();
    root = N;
    //cout<<root->w<<' '<<root->lc->w<<' '<<root->lc->lc->w;//<<' '<<root->lc->lc->w;
    //cout<<(root==NULL)<<' '<<(root->lc==NULL)<<' '<<(root->rc==NULL);
    preorder(root);
    putchar('\n');
    inorder(root);
    putchar('\n');
    queue<int> code;
    char ch = 'a';
    printf("a");
    search(root,'a',code,1);
    while(!code.empty())code.pop();
    printf("b");
    search(root,'b',code,1);
    while(!code.empty())code.pop();
    printf("c");
    search(root,'c',code,1);
    return 0;
}
*/
