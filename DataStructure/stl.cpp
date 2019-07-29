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
#include <algorithm>
using namespace std;
/*
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
}*/
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
/*
bool cmp(int a, int b)
{
    return a>b;
}
struct node
{
    int a,b;
}N[5];
bool cmp1(node n1, node n2)
{
    return n1.a>n2.a;
}
int main(void)
{
    int a = 1, b = 2, x[5] = {1,2,3,4,5}, i=0;
    printf("%d\n",max(1,max(2,3)));
    printf("a==%d b==%d\n",a,b);
    swap(a,b);
    printf("a==%d b==%d\n",a,b);
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
    reverse(x,x+5);
    reverse(x,x+5);
    for(i=0;i<5;i++)
    {
        printf("%d ",x[i]);
    }
    string str="abcde";
    reverse(str.begin(), str.end());
    printf("%s\n",str.c_str());
    printf("%d%d%d%d%d\n",x[0],x[1],x[2],x[3],x[4]);
    while(next_permutation(x,x+3))
    {
        printf("%d%d%d%d%d\n",x[0],x[1],x[2],x[3],x[4]);
    }
    //fill(x,x+5,666);
    sort(x,x+5,cmp);
    printf("\n%d%d%d%d%d\n",x[0],x[1],x[2],x[3],x[4]);
    for(i=0;i<5;i++)
    {
        N[i].a=i;
        N[i].b=5-i;
    }
    for(i=0;i<5;i++)
    {
        printf("a = %d b = %d\n",N[i].a,N[i].b);
    }
    sort(N,N+5,cmp1);
    for(i=0;i<5;i++)
    {
        printf("a = %d b = %d\n",N[i].a,N[i].b);
    }
    vector<int> v;
    for(i=0;i<5;i++)
        v.push_back(i);
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        printf("%d ",*it);
    }
    sort(v.begin(),v.end(),cmp);
    putchar('\n');
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        printf("%d ",*it);
    }
    putchar('\n');
    reverse(x,x+5);
    for(i=0;i<5;i++)
        printf("%d ",x[i]);
    printf("\n%d,%d\n",lower_bound(x, x+5, 3)-x,upper_bound(x,x+5,3)-x);
    return 0;
}
*/
