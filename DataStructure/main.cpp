//
//  main.cpp
//  DataStructure
//
//  Created by vancasola on 2019/6/1.
//  Copyright © 2019 none. All rights reserved.
//

//#include <stdio.h>
/*
#include "SeqList.hpp"
int MaxSize = 100;
int main(int argc, const char * argv[]) {
    SqList *L = ListInit(MaxSize);
    ElemType e = 0;
    int lct = 1;
    for(lct = 1; lct <= 10; lct++)
    {
        e = lct;
        ListInsert(L, lct, &e);
    }
    lct = 1;
    for(int i = 1; i <= 5; i++)
    {
        ListPrint(L);
        ListDelete(L, lct);
    }
    ListPrint(L);
    ListFree(L);
    return 0;
}
*/
/*
#include "LinkList.hpp"
int main(int argc, const char * argv[])
{
    LinkList L;
    int e = 5, i = 4;
    L = List_TailInsert(L);
    List_Insert(L, &e, 2);
    List_PreInsert(L, &e, &i);
    List_Delete(L, 10);
    List_Print(L);
    List_DeleteElem(L, &e);
    List_Print(L);
    printf("2: %d\n",GetElem(L,2)->Data);
    //printf("2: %d\n",LocateElem(L,&e)->Data);
    printf("the length: %d\n",List_GetLength(L));
    return 0;
}
*/
/*

#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
//c++实现快速排序
void quicksort(vector<int> &data, int left,int right)
{
    if (left >= right)
        return;
    int pivot = (left+right)/2;
    vector<int> less;
    vector<int> greater;
    int tmp;
    for (int i = left; i < right; i++)
    {
        if (i == pivot)
            tmp = data[pivot];
        else if (data[i] < data[pivot])
            less.push_back(data[i]);
        else
            greater.push_back(data[i]);
    }
    for (int i = left; i < right; i++)
    {
        if (i < left + less.size())
            data[i] = less[less.size() - i - 1 + left];
        else if (i == left + less.size())
            data[i] = tmp, pivot = i;
        else
            data[i] = greater[greater.size() - i+ less.size() + left];
    }
    quicksort(data,left, pivot);
    quicksort(data, pivot+1,right);
    
    
}


int main()
{
    vector<int> data = { 12, 4, 34, 6, 8, 65, 3, 2, 988, 45 };
    cout << "排序前：";
    for each (auto var in data)
    {
        cout << var << "  ";
    }
    cout << endl;
    quicksort(data, 0, data.size());
    cout << "排序后：";
    for each (auto var in data)
    {
        cout << var << "  " ;
    }
    
    
    while (1);
    return 0;
    
    
}
*/
/*
#include <cstdio>
int partition(int low,int high,int a[]){
    int p=a[low];
    while(low<high){
        while(low<high&&a[high]>p)--high;
        a[low]=a[high];
        while(low<high&&a[low]<p)++low;
        a[high]=a[low];
    }
    a[low]=p;
    return low;
}
void quicksort(int low,int high,int a[]){
    if(low<high){
        int p=partition(low, high, a);
        quicksort(low, p-1, a);
        quicksort(p+1, high, a);
    }
    return;
}
 */
/*
#include <string>
#include <iostream>
using namespace std;
void display(string&s,int next[]){
    for(int i=1;i<=s.size();i++)
        printf("%d ",next[i]);
    printf("\n");
}
void get_next(string T,int next[]){
    int i=1,j=-1;
    next[0]=-1;
    while(i<T.length()){
        if(j!=-1&&T[i]!=T[j+1]){
            j=next[j];
        }
        else{
            
        }
            
        printf("i: %d j: %d next[j]: %d\n",i,j,next[j]);display(T,next);
    }
}
 */
/*
int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(0, n-1, a);
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
     */
/*
    string s;
    cin>>s;
    int next[100];
    get_next(s, next);
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    int a=0x80000000;
    short b=0x8000;
    printf("%d %hx\n",b,b);
    printf("%hd %x\n",a,a);
    return 0;
}*/

