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

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <queue>
#include <iostream>
#include <map>
using namespace std;
bool judge(int a,int b,int c)
{
    if(a+b>c&&a+c>b&&b+c>a)return true;
    else return false;
}
int main(){
    long long a,b,s=1;
    cin>>a>>b;
    s=1;
    while(a){
        if(s>1000000000){
            s%=1000000000;
        }
        s*=a;
        a--;
    }
    string r,x=to_string(s);
    //cout<<x<<endl;
    int k=0;
    for(int i=x.size()-1;i>=0;i--){
        if(x[i]=='0')k++;
        else{
            for(int j=i;j>=0&&i-j<b;j--){
                r.push_back(x[j]);
            }
            break;
        }
        
    }
    for(int i=r.size()-1;i>=0;i--)printf("%c",r[i]);
    printf(" %d",k);
}

//Bu ChuiZi ChuiZi ChuiZi JianDao Bu Bu JianDao ChuiZi ChuiZi ChuiZi JianDao JianDao
