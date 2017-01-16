//
//  quick_sort.h
//  insert
//
//  Created by Keng on 2016/3/20.
//  Copyright © 2016年 Keng. All rights reserved.
//

#include<iostream>
using namespace std;
#ifndef quick_sort_h
#define quick_sort_h


#endif /* quick_sort_h */

void change(Element *list,int left_poiter,int right_pointer)
{
    Element tmp;
    tmp=list[left_poiter];
    list[left_poiter]=list[right_pointer];
    list[right_pointer]=tmp;
    

    return;
    
}
void QuickSort(Element *list,int left,int right)
{
    
    
    if(left<right){
        
        int i=left;
        int j=right+1;
        Element pivot=list[left];/*指標由左而右開始*/
        do{
            do
                i++;/*移動左index*/
            while(pivot.get_key()>list[i].get_key());/*當list中的內容比pivot來的大，就跳出迴圈*/
            do
                j--;/*移動右index*/
            while(pivot.get_key()<list[j].get_key());/*當list中的內容比pivot來得小，就跳出迴圈*/
            if(i<j){
                change(list,i,j);
            }
        }
        while(i<j);/*左右指標互相遇到前*/
        change(list,left,j);/*交換停止指標的資料（目的：使左半邊比pivot小，右半邊使pivot大）*/
        QuickSort(list, left, j-1);/*重複執行，左半邊的部分*/
        QuickSort(list, j+1, right);/*重複執行，右半邊的部分*/
        
    }
    
    return;
    
}
