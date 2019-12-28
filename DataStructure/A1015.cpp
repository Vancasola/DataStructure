//
//  A1015.cpp
//  DataStructure
//
//  Created by vancasola on 2019/12/28.
//  Copyright © 2019 none. All rights reserved.
// 9:00
/*
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <queue>
using namespace std;
bool prime(int n)
{
    if(n==2)return true;
    if(n==1)return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main()
{
    int n,r=0,a=0,b=0;
    queue<int> q;
    while(1)
    {
        cin>>n;
        if(n<0)break;
        a=0,b=0;
        cin>>r;
        int j=1;
        a=n;
        while(n)
        {
            q.push(n%r);
            n/=r;
        }
        j=1;
        while(!q.empty())
        {
            b=b*r+q.front();
            q.pop();
        }
        if(prime(a)&&prime(b))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
*/
