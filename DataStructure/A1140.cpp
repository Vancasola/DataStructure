//
//  A1140.cpp
//  DataStructure
//
//  Created by vancasola on 2020/1/15.
//  Copyright © 2020 none. All rights reserved.
//  8:12 9:00
/*
#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    int n,cnt=0;
    cin>>a>>n;
    char last;
    for(int i=1;i<n;i++){
        last=a[0];
        b=a[0];
        cnt=1;
        int j=0;
        bool f;
        if(a.size()==1){
            b+=cnt+'0';
            cnt=1;
        }
        else
        for( j=1;j<a.size();j++){
            if(a[j]==last){cnt++;}
            else{
                f=false;
                b+=cnt+'0';
                b+=a[j];
                cnt=1;
            }
            last=a[j];
        }
        if(a.size()!=1)b+=cnt+'0';
        a=b;
    }
    cout<<a;
    return 0;
}
*/
