//
//  A1057.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  4:30 4:56 5:13 5:21
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;
const int maxn=100005;
const int len=316;
int main(){
    int n,x;
    int tbl[maxn]={0};
    int b[len+10]={0};
    stack<int> s;
    string t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        if(t=="Push"){
            scanf("%d",&x);
            s.push(x);
            tbl[x]++;
            b[x/len]++;
        }
        else if(t=="Pop"){
            if(s.empty())printf("Invalid\n");
            else {
                printf("%d\n",s.top());
                x=s.top();
                tbl[x]--;
                b[x/len]--;
                s.pop();
            }
        }
        else{
            if(s.empty())printf("Invalid\n");
            else {
                int sum=0,j=0,cnt=0;
                if(s.size()%2==0)cnt=s.size()/2;
                else cnt=(s.size()+1)/2;
                for( j=0;j<=len;j++){
                    sum+=b[j];
                    if(sum>=cnt){
                        sum-=b[j];
                        break;
                    }
                }
                //j=len*max(0,j);
                j=len*max(0,j);
                for(;j<maxn;j++){
                    sum+=tbl[j];
                    if(sum>=cnt){
                        printf("%d\n",j);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
*/
 
