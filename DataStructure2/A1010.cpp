//
//  A1010.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/11.
//  Copyright © 2020 none. All rights reserved.
//  3:33

#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;
long long convert(char c){
    if(c>='a' && c<='z'){
        return 10+c-'a';
    }
    else return c-'0';
}
long long count(string sa,long long radix){
    long long sum=0,t=1,x;
    for(int i=sa.size()-1;i>=0;i--){
        x=convert(sa[i]);
        sum+=x*t;
        t*=radix;
    }
    return sum;
}
int main(){
    string sa,sb;
    long long a,tag,radix;
    bool f=false;
    cin>>sa>>sb>>tag>>radix;
    if(tag==2)swap(sa,sb);
    a=count(sa, radix);
    long long Max=-1;
    for(int i=0;i<sb.size();i++)if(convert(sb[i])>Max)Max=convert(sb[i]);
    long long left=Max+1,right=max(a,Max+1);
    long long m,sum;
    while(left<=right){
        m=(left+right)/2;
        sum=count(sb,m);
        if(sum>a||sum<0){
            right=m-1;
        }
        else if(sum==a){
            f=true;
            break;
        }
        else{
            left=m+1;
        }
    }
    if(f)cout<<m;
    else cout<<"Impossible";
    return 0;
}
