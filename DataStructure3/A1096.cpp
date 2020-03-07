//
//  A1096.cpp
//  DataStructure
//
//  Created by vancasola on 2020/3/7.
//  Copyright © 2020 none. All rights reserved.
//  2:40 2:51
/*
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,t;
    vector<int> v,ans;
    int m=0;
    cin>>n;
    t=n;
    for(int j=2;j<=sqrt(n)+1;j++){
        for(int i=j;i<=sqrt(n)+1;i++){
            if(t%i==0 && t){
                v.push_back(i);
                t/=i;
            }
            else {
                if(ans.size()<v.size() || !m){
                    m=1;
                    ans=v;
                }
                v.clear();
                t=n;
                break;
            }
        }
    }
    if(ans.size()<v.size() || !m){
        m=1;
        ans=v;
    }
    if(!ans.size()){
        printf("%d\n%d",1,n);
        return 0;
    }
    printf("%d\n",ans.size());
    for(int i=0;i<ans.size();i++){
        if(!i)printf("%d",ans[i]);
        else printf("*%d",ans[i]);
    }
    return 0;
}
*/
