//
//  c1928.cpp
//  DataStructure
//
//  Created by vancasolaon 2019/7/30.
//  Copyright © 2019 none. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
bool isLeap(int year)
{
    return (year%4==0&&year%100!=0)||(year%400==0);
}
/*
int main()
{
    int t1,y1,m1,d1;
    int t2,y2,m2,d2;
    while(scanf("%d%d",&t1,&t2)!=EOF){
    int ans=1;
    if(t1>t2)swap(t1,t2);
    d1=t1%100;
    m1=(t1%10000)/100;
    y1=t1/10000;
    d2=t2%100;
    m2=(t2%10000)/100;
    y2=t2/10000;
    while(y1<y2||m1<m2||d1<d2)
    {
        //printf("1:%d %d %d\n",y1,m1,d1);
        //printf("2:%d %d %d\n",y2,m2,d2);
        d1++;
        if(d1==month[m1][isLeap(y1)]+1)
        {
            d1=1;
            m1++;
        }
        if(m1==13)
        {
            m1=1;
            y1++;
        }
        ans++;
    }
    printf("%d\n",ans);
}
    return 0;
}
*/
