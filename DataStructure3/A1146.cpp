//
//  A1146.cpp
//  DataStructure
//
//  Created by vancasola on 2020/5/19.
//  Copyright © 2020 none. All rights reserved.
//  10:07
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,m,a,b,k,t;
    bool vis[1005]={false};
    set<int> s[1005];
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&a,&b);
        s[b].insert(a);
    }
    scanf("%d",&k);
    vector<int> r;
    for(int i=0;i<k;i++){
        vector<int> v;
        set<int> vis;
        for(int j=0;j<n;j++){
            scanf("%d",&t);
            v.push_back(t);
            vis.insert(t);
        }
        bool f=false;
        for(int j=0;j<n;j++){
            t=v[j];
            for(set<int>::iterator it=s[t].begin();it!=s[t].end();it++){
                if(vis.find(*it)!=vis.end()){
                    f=true;
                    break;
                }
            }
            vis.erase(t);
            if(f)break;
        }
        if(f)r.push_back(i);
    }
    for(int i=0;i<r.size();i++){
        if(!i)printf("%d",r[i]);
        else printf(" %d",r[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <queue>
#include <iostream>
using namespace std;
int main(){
    long long a,b,s=1;
    cin>>a>>b;
    int m=0;
    for(int i=1;i<=a;i++){
        if(i%5==0)m++;
    }
    int p=pow(10,b+m);
    s=1;
    while(a){
        s%=p;
        s*=(a%p);
        a--;
    }
    string r,x=to_string(s);
    int k=0;
    k=b-(x.size()-m);
    while(k--)printf("0");
    for(int i=0;i<x.size()-m;i++){
        printf("%c",x[i]);
    }
    printf(" %d",m);
}
*/
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <queue>
#include <iostream>
using namespace std;
bool judge(int a,int b,int c)
{
    if(a+b>c){
        if(a+c>b){
            if(b+c>a)return true;
            else return false;
        }
        else return false;
    }
    else return false;
}
int main(){
    int n,m,t;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v.push_back(t);
    }
    int sum=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)printf("%d ",v[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(judge(m,v[i],v[j])){
                sum++;
                //printf("%d %d\n",v[i],v[j]);
            }
            else break;
        }
    }
    printf("%d",sum);
}
*/
