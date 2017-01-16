//
//  Header.h
//  insert
//
//  Created by Keng on 2016/3/26.
//  Copyright © 2016年 Keng. All rights reserved.
//

#include<iostream>

using namespace std;


void improve_insert(Element e,Element *list,int pos,int jmp){
    
    while(e.get_key()<list[pos-jmp].get_key()&&pos-jmp>0){ /*如果前面的資料比後面的資料大則進行互換（insert_sort）*/
        
        list[pos]=list[pos-jmp];
        
        pos-=jmp;
    }
    
    list[pos]=e;
    
    return ;
}
void improve_insert_sort(Element *list,const int n,int jmp,int pos){
    
    for(int j=jmp+pos;j<=n;j+=jmp){
        
        improve_insert(list[j], list, j,jmp );/*尋找每一組的資料*/
        
    }
    
    return;
}
void Shell_sort (Element *list,int size){
    
    int jmp=size/2;/*每個元素搬移的距離*/
    
    while(jmp>0){
        
        for(int i=1;i<=jmp;i++){
            
            improve_insert_sort(list,size,jmp,i);/*在相同的搬移距離下，進行improve_insert_sort*/
        
        }
        
        
        jmp/=2;/*搬移距離每次都減半*/
    }
    
    
    
    return ;
}



