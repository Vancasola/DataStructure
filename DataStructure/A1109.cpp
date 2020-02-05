//
//  A1109.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/13.
//  Copyright © 2020 none. All rights reserved.
//  3:10 3:53
/*
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;
bool cmp(const pair<string,int>& a,const pair<string,int>& b){
    if(a.second!=b.second)return a.second>b.second;
    else return a.first<b.first;
}
int main(){
    vector<pair<string,int>> v(10010);
    int n,k;
    string line[10010];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.begin()+n,cmp);
    int mid=5000,p,q;
    int l,r,remain=n-(n/k)*k;
    for(int i=0;i<k;i++){
        p=0;
        q=-1;
        int index=0;
        if(i==0)l=i*(n/k);
        else l=i*(n/k)+remain;
        r=(i+1)*(n/k)+remain;
        for(int j=l;j<r;j++){
            if(index%2==0){
                line[mid+p]=v[j].first;
                p++;
            }
            else {
                line[mid+q]=v[j].first;
                q--;
            }
            index++;
        }
        for(int j=mid+q+1;j<mid+p;j++){
            if(j<mid+p-1)printf("%s ",line[j].c_str());
            else printf("%s\n",line[j].c_str());
        }
    }
    return 0;
}
*/
