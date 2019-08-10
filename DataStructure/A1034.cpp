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
