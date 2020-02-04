//
//  A1149.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/4.
//  Copyright © 2020 none. All rights reserved.
//  9:20 10:00
/*g*/
#include <stdio.h>
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<string,vector<string>> q,p;
    int n,m,k;
    string a,b;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        p[a].push_back(b);
        q[b].push_back(a);
    }
    for(int i=0;i<m;i++){
        cin>>k;
        set<string> tmp;
        for(int j=0;j<k;j++){
            cin>>a;
            tmp.insert(a);
        }
        bool f=false;
        for(set<string>::iterator it=tmp.begin();it!=tmp.end();it++){
            string x=*it;
            if(p.find(x)!=p.end()){
                for(int j=0;j<p[x].size();j++){
                    if(tmp.find(p[x][j])!=tmp.end()){
                        f=true;
                        break;
                    }
                }
            }
            if(!f){
                if(q.find(x)!=q.end()){
                    for(int j=0;j<q[x].size();j++){
                        if(tmp.find(q[x][j])!=tmp.end()){
                            f=true;
                            break;
                        }
                    }
                }
            }
        }
        if(f)printf("No\n");
        else printf("Yes\n");
    }
    return 0;
}
*/
