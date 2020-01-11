//
//  A1102.cpp
//  DataStructure
//
//  Created by  on 2020/1/11.
//  Copyright © 2020 none. All rights reserved.
//  6:45 7:11
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
using namespace std;
struct node
{
    int left,right;
    int data;
};
vector<node> v(10);
queue<int> a1,a2;
void level(int r){
    queue<int> q;
    q.push(r);
    while (!q.empty()) {
        int x=q.front();
        a1.push(x);
        q.pop();
        if(v[x].left!=-1)q.push(v[x].left);
        if(v[x].right!=-1)q.push(v[x].right);
    }
}
void inorder(int r){
    if(v[r].left!=-1)inorder(v[r].left);
    a2.push(r);
    if(v[r].right!=-1)inorder(v[r].right);
}
int main()
{
    int n;
    char l,r;
    cin>>n;
    set<int> s;
    for(int i=0;i<n;i++)s.insert(i);
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l!='-')
        {
            v[i].right=l-'0';
            s.erase(l-'0');
        }
        else v[i].right=-1;
        if(r!='-'){
            v[i].left=r-'0';
            s.erase(r-'0');
        }
        else v[i].left=-1;
    }
    level(*s.begin());
    inorder(*s.begin());
    while(a1.size()!=1)
    {
        cout<<a1.front()<<' ';
        a1.pop();
    }
    cout<<a1.front()<<endl;
    while(a2.size()!=1)
    {
        cout<<a2.front()<<' ';
        a2.pop();
    }
    cout<<a2.front()<<endl;
    return 0;
}
*/
