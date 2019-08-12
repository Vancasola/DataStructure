//
//  A1034.cpp
//  DataStructure
//
//  Created by vancasola on 2019/8/10.
//  Copyright © 2019 none. All rights reserved.
//
/*
#include <stdio.h>
#include <string>
#include <set>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
map <string,int> mp[2005];
struct gang
{
    string name;
    int w;
};
bool cmp(gang& g1,gang& g2)
{
    return g1.name<g2.name;
}
int main()
{
    int n=0,thresh = 0,time=0,ind=0,maxv = 0,gangnum=0,j=0;
    bool first = true;
    map <string,int>::iterator its;
    string stra,strb,head;
    gang ans[2000];
    int weight[2005]={0};
    scanf("%d %d",&n,&thresh);
    if(n==0)
    {
        printf("0");
        return 0;
    }
    cin>>stra>>strb>>time;
    mp[ind][stra] = time;
    mp[ind][strb] = time;
    weight[ind]+=time;
    for(int i=1;i<n;i++)
    {
        cin>>stra>>strb>>time;
        if(mp[ind].find(stra)==mp[ind].end()&&mp[ind].find(strb)==mp[ind].end())
        {
            ind++;
            mp[ind][stra] = time;
            mp[ind][strb] = time;
        }
        else if(mp[ind].find(stra)!=mp[ind].end()&&mp[ind].find(strb)!=mp[ind].end())
        {
            mp[ind][strb] += time;
            mp[ind][stra] += time;
        }
        else if(mp[ind].find(stra)!=mp[ind].end())
        {
            if(mp[ind].find(strb)==mp[ind].end())
            {
                mp[ind][strb] = time;
                mp[ind][stra] += time;
            }
        }
        else if(mp[ind].find(strb)!=mp[ind].end())
        {
            if(mp[ind].find(stra)==mp[ind].end())
            {
                mp[ind][stra] = time;
                mp[ind][strb] += time;
            }
        }
        weight[ind]+=time;
    }
    
    for(int i=0;i<=ind;i++)//
    {
        //printf("%d %d\n",mp[i].size(), weight[i]);
        if(mp[i].size()<=2)continue;
        if(weight[i]>thresh)
        {
            for(its = mp[i].begin();its!=mp[i].end();its++)//two heads?
            {
                //cout<<its->first<<' '<<its->second<<' '<<maxv<<endl;
                if(its->second > maxv)
                {
                    head = its->first;
                    maxv = its->second;
                }
            }
            ans[j].name = head;
            ans[j].w = mp[i].size();
            //cout<<"ands"<<ans[j].name<<' '<<ans[j].name<<endl;
            j++;
            maxv = 0;
        }
    }
    printf("%d\n",j);
    sort(ans,ans+j,cmp);
    for(int i=0;i<j;i++)
    {
        printf("%s %d\n",ans[i].name.c_str(),ans[i].w);
    }
    return 0;
}

*/
/*
#include<stdio.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
const int maxn = 2005;
map<string, string> f;
string findfather(string x)
{
    string temp = x;
    while(f[temp]!=temp)
    {
        temp = f[temp];
    }
    return temp;
}
int fathernum()
{
    map<string, string>::iterator it;
    int num = 0;
    for(it=f.begin();it!=f.end();it++)
    {
        if(it->first==it->second)num++;
    }
    return num;
}

int main()
{
    map<string, int>  num;
    map<string, int>  weight;
    map<string, int> ans;
    map<string, string> result;
    map<string, int> total;
    int n=0, thresh = 0, time = 0;
    int i=0, j=0;
    string stra, strb;
    scanf("%d %d",&n,&thresh);
    for(int i=0;i<n;i++)
    {
        cin>>stra>>strb>>time;
        if(f.find(stra)==f.end()&&f.find(strb)==f.end())
        {
            f[stra] = stra;
            f[strb] = stra;
            weight[stra] = time;
            weight[strb] = time;
            num[stra] = 2;
        }
        else if(f.find(stra)!=f.end()&&f.find(strb)!=f.end())
        {
            weight[stra] += time;
            weight[strb] += time;
        }
        else if(f.find(stra)!=f.end()&&f.find(strb)==f.end())
        {
            f[strb] = findfather(stra);
            weight[stra] += time;
            weight[strb] = time;
            num[findfather(stra)]++;
        }
        else if(f.find(stra)==f.end()&&f.find(strb)!=f.end())
        {
            f[stra] = findfather(strb);
            weight[stra] = time;
            weight[strb] += time;
            num[findfather(strb)]++;
        }
        string father = findfather(stra);
        if(total.find(father)==total.end())
        {
            total[father]=time;
        }
        else
        {
            total[father]+=time;
        }
        //cout<<"!"<<endl;
    }
    string father;
    int w;
    map<string, string>::iterator it;
    bool flag=true;
    for(it=f.begin(),i=0;it!=f.end();it++)
    {
        father = findfather(it->first);
        w = weight[it->first];
        //cout<<it->first<<' '<<weight[it->first]<<' '<<it->second<<' '<<findfather(it->first)<<' '<<ans[father]<<endl;
        if(num[father]<=2||total[father]<=thresh)continue;
        if(ans.find(father)==ans.end())
        {
            result[father] = it->first;
            ans[father] = w;
        }
        if(w > ans[father])
        {
            result[father] = it->first;
            ans[father] = w;
        }
    }
    
    printf("%d\n",result.size());
    for(it=result.begin();it!=result.end();it++)
    {
        //if(num[it->first]<=2||total[findfather(it->first)]<=thresh)continue;
        printf("%s %d\n",it->second.c_str(),num[it->first]);
    }

    return 0;
}
*/
/*
10 70
AAA BBB 10
BBB AAA 20
AAA CCC 40
DDD EEE 5
EEE DDD 70
FFF GGG 30
GGG HHH 20
HHH FFF 10
AAA BBB 10
HHH GGG 30
 */
/*
#include<stdio.h>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
const int MAXN = 2010, INF = 9999999999;
map<int, string> ItoS;
map<string, int> StoI;
map<string, int> gang;
int G[MAXN][MAXN] = {0}, weight[MAXN] = {0};
int n,k,numperson = 0;
bool vis[MAXN] = {false};
void DFS(int nowvisit,int& head ,int& num ,int& total)
{
    vis[nowvisit] = true;
    num++;
    if(weight[nowvisit]>weight[head]){head = nowvisit;}
    
    for(int i=0;i<numperson;i++)
    {
        if(G[nowvisit][i]>0)
        {
            total+=G[nowvisit][i];
            G[nowvisit][i] = 0;
            G[i][nowvisit] = 0;
            if(vis[i]==false)
            {
                DFS(i, head, num, total);
            }
        }
    }
}
void DFSTrave()
{
    for(int i=0;i<numperson;i++)
    {
        if(vis[i]==false)
        {
            int head=i, num=0, total = 0;
            DFS(i,head,num,total);
            if(num>2&&total>k)
            {
                gang[ItoS[head]]=num;
            }
        }
    }
}
int change(string str)
{
    if(StoI.find(str)!=StoI.end())
    {
        return StoI[str];
    }
    else
    {
        StoI[str] = numperson;
        ItoS[numperson] = str;
        return numperson++;
    }
}
 
int main()
{
    int w;
    string str1,str2;
    cin>>n>>k;
    int id1, id2;
    for(int i=0;i<n;i++)
    {
        cin>>str1>>str2>>w;
        id1 = change(str1);
        id2 = change(str2);
        weight[id1] += w;
        weight[id2] += w;
        G[id1][id2] += w;
        G[id2][id1] += w;
    }
    DFSTrave();
    cout<< gang.size()<<endl;
    for(map<string,int>::iterator it = gang.begin();it!=gang.end();it++)
    {
        cout<<it->first<<' '<<it->second<<endl;
    }
    return 0;
}
*/
/*
#include<stdio.h>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
const int MAXN =2010, INF= 999999999;
int G[MAXN][MAXN] = {0};
bool vis[MAXN] = {false};
int numid=0;
int thresh = 0;
map<string,int> strtoi;
map<int,string> itostr;
int weight[MAXN] = {0};
map<string,int> gang;
void DFS(int x,int& head,int &numperson,int &wei)
{
    //cout<<itostr[x]<<' '<<weight[x]<<endl;
    vis[x] = true;
    numperson++;
    if(weight[x]>weight[head])
    {
        head = x;
    }
    for(int i=0;i<numid;i++)
    {
        if(G[x][i]!=0)
        {
            wei += G[x][i];
            G[i][x] = 0;
            G[x][i] = 0;
            if(vis[i]==false)
            {
                DFS(i,head,numperson,wei);
            }
        }
    }
}

void DFSTrav()
{
    int numperson = 0,head = 0,wei = 0;
    for(int i=0;i<numid;i++)
    {
        if(vis[i]==false)
        {
            numperson = 0,head = i,wei = 0;
            DFS(i,head, numperson, wei);
            //cout<<"numperson "<<numperson<<"wei "<<wei<<endl;
            if(numperson>2&&wei>thresh)
                gang[itostr[head]]=numperson;
        }
    }
}
int change(string& str)
{
    if(strtoi.find(str)!=strtoi.end())
    {
        return strtoi[str];
    }
    else
    {
        strtoi[str]=numid;
        itostr[numid]=str;
        return numid++;
    }
}
int main()
{
    int n,w,id1,id2;
    string str1,str2;
    scanf("%d %d",&n,&thresh);
    for(int i=0;i<n;i++)
    {
        cin>>str1>>str2>>w;
        id1=change(str1);
        id2=change(str2);
        G[id1][id2] += w;
        G[id2][id1] += w;
        weight[id1] += w;
        weight[id2] += w;
    }
    DFSTrav();
    cout<<gang.size()<<endl;
    for(map<string,int>::iterator it = gang.begin();it!=gang.end();it++)
    {
        cout<<it->first<<' '<<it->second<<endl;
    }
    
    return 0;
}
*/
/*
#include <stdio.h>
#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
const int MAXN = 2010;
map<string,int> strtoi;
map<int,string> itostr;
map<string,int> gang;
int G[MAXN][MAXN] = {0};
int vis[MAXN] = {false};
int n,th,idnum=0;
int weight[MAXN]={0};
void DFS(int x,int &head,int &totalnum,int &totalweight)
{
    vis[x] = true;
    totalnum++;
    if(weight[x]>weight[head])head = x;
    for(int i=0;i<idnum;i++)
    {
        if(G[x][i]>0)
        {
            totalweight+=G[x][i];
            G[x][i]=0;
            G[i][x]=0;
            if(vis[i]==false)
            {
                DFS(i,head,totalnum,totalweight);
            }
        }
    }
}
void DFSTrave()
{
    int head=0, totalweight = 0, totalnum = 0;
    for(int i=0;i<idnum;i++)
    {
        head = i,totalnum = 0, totalweight = 0;
        if(vis[i]==false)
        {
            DFS(i,head,totalnum,totalweight);
            if(totalnum>2&&totalweight>th)
            {
                gang[itostr[head]]=totalnum;
            }
        }
    }
}
int change(string &str)
{
    if(strtoi.find(str)!=strtoi.end())
    {
        return strtoi[str];
    }
    else{
        strtoi[str] = idnum;
        itostr[idnum] = str;
        return idnum++;
    }
}
int main()
{
    cin>>n>>th;
    string str1,str2;
    int w,id1,id2;
    for(int i=0;i<n;i++)
    {
        cin>>str1>>str2>>w;
        id1 = change(str1);
        id2 = change(str2);
        G[id1][id2]+=w;
        G[id2][id1]+=w;
        weight[id1]+=w;
        weight[id2]+=w;
    }
    DFSTrave();
    cout<<gang.size()<<endl;
    for(map<string,int>::iterator it = gang.begin();it!=gang.end();it++)
    {
        cout<<it->first<<' '<<it->second<<endl;
    }
    return 0;
    
}
*/
