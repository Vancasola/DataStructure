//
//  caculator.cpp
//  DataStructure
//
//  Created by vancasola on 2019/7/31.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
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
string Convertexp(string str, queue<node> &q)
{
    node t;
    stack<node> op;
    stack<char> tch;
    map<char,int> mp;
    mp['*']=1,mp['/']=1,mp['+']=0,mp['-']=0,mp['(']=2,mp[')']=-1;
    int len = str.length(), p = 1;
    bool firstnum=true;
    for(int i=0;i<len;i++)
    {
        while(i<len&&isnum(str[i]))
        {
            if(firstnum)
            {
                tch.push(str[i]);
                firstnum = false;
            }
            else
            {
                tch.push(str[i]);
            }
            i++;
        }
        if(!firstnum)
        {
            node n;
            n.isnum = true;
            n.num = tch.top()-'0';
            p*=10;
            tch.pop();
            q.push(n);
            while(!tch.empty())
            {
                q.back().num+=(tch.top()-'0')*p;
                p*=10;
                tch.pop();
            }
            firstnum = true;
            p = 1;
        }
        if(i>=len)break;
        if(!isnum(str[i]))//operator
        {
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
    return str;
}
void PrintQueue(queue<node> q)
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
    putchar('\n');
}
void PrintStack(stack<node> s)
{
    while(!s.empty())
    {
        printf("%.lf\n",s.top().num);
        s.pop();
    }
}
double Count(char ch, double a,double b)
{
    double r;
    switch (ch) {
        case '+':
            r = a + b;
            break;
        case '-':
            r = a - b;
            break;
        case '*':
            r = a * b;
            break;
        case '/':
            r = a / b;
            break;
        default:
            break;
    }
    return r;
}
string filter(char s[])
{
    string ret = "";
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')continue;
        ret+=s[i];
    }
    return ret;
}
double Calculate(queue<node>q)
{
    node t;
    double a,b,r;
    char op;
    stack<node> numstack;
    while(!q.empty())
    {
        while(!q.empty()&&q.front().isnum)
        {
            //cout<<"size"<<q.size()<<endl;
            t = q.front();
            numstack.push(t);
            q.pop();
        }
        //PrintQueue(q);
        //PrintStack(numstack);
        op = q.front().oper;
        q.pop();
        b = numstack.top().num;
        numstack.pop();
        a = numstack.top().num;
        numstack.pop();
        r = Count(op,a,b);
        t.isnum = true;
        t.num = r;
        numstack.push(t);
    }
    return numstack.top().num;
}
int main()
{
    string str = "1+2-1*((3+4)/5-6)+7";
    char s[1000], test;
    while(scanf("%c",&test)!=EOF)
    {
        if(test=='0')break;
        if(test=='\0'||test==' '||test=='\n')continue;
        s[0] = test;
        gets(s+1);
        str = filter(s);
        queue<node> q;
        Convertexp(str,q);
        //PrintQueue(q);
        printf("%.2lf",Calculate(q));
    }
    return 0;
}
*/
