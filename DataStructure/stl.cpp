//
//  stl.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/28.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    vector<int> name;
    int i=0;
    for(i=0;i<5;i++)
        name.push_back(i);
    vector<int>::iterator it = name.begin();
    cout << name[0];
    printf("%d",name[0]);
    for(it = name.begin();it!=name.end();it++)
        printf("%d",*it);
    name.pop_back();
    for(it = name.begin();it!= name.end();it++)
        printf("%d",*it);
    //name.clear();
    name.insert(name.begin()+2,9);
    name.erase(name.begin()+2);
    printf("s:%d",name.size());
    name.erase(name.begin(),name.begin()+4);
    for(it = name.begin();it!=name.end();it++)
        printf("%d",*it);
    
    printf("size:%d\n",name.size());
    
    set<int> s;
    for(i=0;i<5;i++)
    s.insert(i);
    for(i=0;i<5;i++)
        s.insert(i);
    set<int>::iterator its = s.begin();
    its = s.find(3);
    printf("%d\n",*its);
    for(its = s.begin();its!=s.end();its++)
        printf("%d ",*its);
    its = s.find(3);
    s.erase(its,s.end());
    for(its = s.begin();its!=s.end();its++)
        printf("%d ",*its);
    
    string str,str2 = "bcde";
    str = "abcd";
    cout<<str+str<<endl;
    printf("%s\n",str.c_str());
    printf("%d\n",str<str2);
    printf("%d %d\n",str.length(),str.size());
    str.insert(1,str2);
    string::iterator itr = str.begin();
    str.erase(itr+2,itr+4);
    printf("%s\n",str.c_str());
    printf("%s\n",str.substr(3,5).c_str());
    if(str.find("b")!=string::npos)printf("find\n");
    str.replace(1,3,"hhhh");
    cout<<str<<endl;
    cout<<str.substr(2,5);
    return 0;
}
/*
 vector<type> name; variable array
 vector<vector<type>> name; two dimensions array
 set<type> name;
 
 fundamental operation;
 vector<type>::iterator it;
 for(it = name.begin();it!=name.end();it++)printf("%d",*it);
 name.find(value)
 name.insert(it)
 name.erase(it)
 name.clear()
 name.size()
 
 string name;
 name = "abcd";
 cin>>name;
 cout<<name;
 printf("%s",name.c_str());
 if(name.find()!=string::npos)cout<<"find"<<endl;
 name.replace(pos1,pos2,str1);
 name.insert(pos,value)
 name.erase(it+1,it+4)
 name.substr(2,5)
*/
