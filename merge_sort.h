//
//  merge_sort.h
//  insert
//
//  Created by Keng on 2016/4/2.
//  Copyright © 2016年 Keng. All rights reserved.
//

#ifndef merge_sort_h
#define merge_sort_h
#include<iostream>
using namespace std;


void merge(Element *list,int left,int mid,int right){
    
    Element *temp=new Element[right-left+2];
    
    int i=left,j=mid+1,index=1;
    
    while((i<=mid)&&(j<=right)){
        
        if(list[i].get_key()<list[j].get_key()){/*假設右半邊資料大於左半邊資料*/
            
            temp[index]=list[i];/*將右半邊的資料，存放至temp*/
            index++;
            i++;
            
        }
        else{
            temp[index]=list[j];/*將左半邊的資料，存放至temp*/
            index++;
            j++;
            
        }
        
        
    }
    while(i<=mid){
        temp[index]=list[i];/*將未存的資料全部放入temp中*/
        i++;
        index++;
    }
    while(j<=right){
        temp[index]=list[j];/*將未存的資料全部放入temp中*/
        j++;
        index++;
    }
    
    
    for(int k=0;k<right-left+1;k++){
        
        list[left+k]=temp[k+1];/*將tmp的資料傳回至list中*/
    }
    return ;
    
}

void Merge_sort(Element *list,int left,int right){
    
    

    if(left<right){
        
        int mid=(left+right)/2;/*尋找每次資料存放的中間處*/
        Merge_sort(list,left,mid);/*資料左半邊*/
        Merge_sort(list,mid+1,right);/*資料右半邊*/
        merge(list,left,mid,right);/*將左右兩邊的資料結合進行排序*/
        
    }
    
    
    return ;
}




#endif /* merge_sort_h */
