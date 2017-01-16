//
//  insert_s.h
//  insert
//
//  Created by Keng on 2016/3/20.
//  Copyright © 2016年 Keng. All rights reserved.
//

#include<iostream>
using namespace std;
#ifndef insert_s_h
#define insert_s_h
#endif /* insert_s_h */
void insert(Element e, Element *list, int i){
    
    while (e.get_key() < list[i].get_key()&&i>0)
    {
        
        list[i + 1] = list[i];
        i--;
    }
    
    list[i+1] = e;
    
    return;
}
void InsertSort(Element *list, const int n){
    
    
    for (int j = 2; j <= n; j++){
        
        insert(list[j], list, j - 1);
        print_Data(list,n);
        
    }
}