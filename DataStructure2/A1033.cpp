
//
//  A1033.cpp
//  DataStructure
//
//  Created by vancasola on 2020/2/14.
//  Copyright © 2020 none. All rights reserved.
//  10:03 10:13
/*
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct student{
    string name,id,g;
    int sc;
};
int main(){
    int n;
    //vector<student> m,f;
    student m,f;
    int Max=-1,Min=99999;
    cin>>n;
    for(int i=0;i<n;i++){
        student s;
        cin>>s.name>>s.g>>s.id>>s.sc;
        if(s.g=="M" && s.sc<Min){
            Min=s.sc;
            m=s;
        }
        else if (s.g=="F" && s.sc>Max){
            Max=s.sc;
            f=s;
        }
    }
    if(Max==-1)printf("Absent\n");
    else{
        cout<<f.name<<' '<<f.id<<endl;
    }
    if(Min==99999)printf("Absent\n");
    else{
        cout<<m.name<<' '<<m.id<<endl;
    }
    if(Max==-1 || Min==99999)printf("NA\n");
    else printf("%d\n",Max-Min);
}
*/
