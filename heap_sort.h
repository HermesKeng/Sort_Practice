//
//  heap_sort.h
//  insert
//
//  Created by Keng on 2016/4/5.
//  Copyright © 2016年 Keng. All rights reserved.
//
#include <iostream>

#ifndef heap_sort_h
#define heap_sort_h
using namespace std;

void adjust(Element* tree,const int root,const int n){
    
    int j;
    Element e =tree[root];
    int k=e.get_key();/*中間的資料*/
    for(j=2*root;j<=n;j*=2){
        
        if(j<n){
            if(tree[j].get_key()<tree[j+1].get_key())/*如果後一筆資料比前一筆大*/
            {
                j++;
            }
        }
        if(k>=tree[j].get_key())/*中間的資料大於右邊的資料*/
        {
            break;
        }
        tree[j/2]=tree[j];/*若中間小於，中間和右邊資料互換*/
    }
    tree[j/2]=e;
    
}

void Heap_sort(Element *list,int size){
    
    for(int i=size/2;i>=1;i--){
        adjust(list,i,size);/*建立tree*/
    }
        for(int i=size-1;i>=1;i--){/*pop出資料*/
            Element t=list[i+1];
            list[i+1]=list[1];/*將最小的移動至最上面*/
            list[1]=t;/*最大的移動至第一個位置*/
            adjust(list,1,i);/*進行調整*/
            
        }
    
    
        
}


#endif /* heap_sort_h */
