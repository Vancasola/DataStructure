//
//  caculator.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/31.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <map>
#include <string>
#include <string.h>
using namespace std;
struct node
{
    char oper;
    double num;
    bool isnum;
};
bool isoper(char ch)
{
    if(ch=='+'||ch=='/'||ch=='-'||ch=='*')return true;
    return false;
}
bool isnum(char ch)
{
    if(ch>='0'&&ch<='9')return true;
    else return false;
}
void PrintQueue(queue<node> & q)
{
    node t;
    while(!q.empty())
    {
        t = q.front();
        if(t.isnum)
            printf("%.lf",t.num);
        else
            printf("%c",t.oper);
        
        q.pop();
    }
}
string Convertexp(string str)
{
    node t;
    stack<node> op;
    queue<node> q;
    map<char,int> mp;
    mp['*']=1,mp['/']=1,mp['+']=0,mp['-']=0,mp['(']=2,mp[')']=-1;
    int len = str.length(), p = 1;
    bool firstnum=true;
    for(int i=0;i<len;i++)
    {
        if(isnum(str[i]))
        {
            if(firstnum)
            {
                node n;
                n.isnum = true;
                n.num = str[i]-'0';
                q.push(n);
                p*=10;
                firstnum = false;
            }
            else
            {
                q.back().num+=(str[i]-'0')*p;
                p*=10;
            }
        }
        else//operator
        {
            firstnum = true;
            p = 1;
            if(op.empty())
            {
                node n;
                n.isnum = false;
                n.oper = str[i];
                op.push(n);
            }
            else
            {
                node n;
                n.isnum = false;
                n.oper = str[i];
                if(mp[op.top().oper]<mp[n.oper])
                {
                    op.push(n);
                }
                else if(str[i]==')')
                {
                    while(1)
                    {
                        if(op.top().oper=='(')
                        {
                            op.pop();
                            break;
                        }
                        t=op.top();
                        q.push(t);
                        op.pop();
                    }
                }
                else
                {
                    while(!op.empty()&&mp[op.top().oper]>=mp[n.oper])
                    {
                        t=op.top();
                        if(t.oper=='(')break;
                        q.push(t);
                        op.pop();
                    }
                    op.push(n);
                }
            }
        }
    }
    while(!op.empty())
    {
        t=op.top();
        q.push(t);
        op.pop();
    }
    PrintQueue(q);
    return str;
}
int main()
{
    string str = "1+2-1*((3+4)/5-6)+7";
    Convertexp(str);
    return 0;
}
