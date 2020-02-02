//
//  A1130.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/2.
//  Copyright © 2020 none. All rights reserved.
//  
/*
#include <stdio.h>
#include <stack>
#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;
vector<string> v;
int root;
struct node {
    int left,right;
    string data;
}a[25];
void inorder(int r){
    if ( r!=root && !(a[r].left==-1 && a[r].right==-1))v.push_back("(");
    if(a[r].left!=-1)inorder(a[r].left);
    v.push_back(a[r].data);
    if(a[r].right!=-1)inorder(a[r].right);
    if ( r!=root && !(a[r].left==-1 && a[r].right==-1))v.push_back(")");
}
int main(){
    int n;
    set<int> s;
    cin>>n;
    for(int i=1;i<=n;i++)
        s.insert(i);
    for(int i=1;i<=n;i++){
        cin>>a[i].data>>a[i].left>>a[i].right;
        s.erase(a[i].left);
        s.erase(a[i].right);
    }
    root=*s.begin();
    inorder(*s.begin());
    for(int i=0;i<v.size();i++)
        printf("%s",v[i].c_str());
    return 0;
}
*/
