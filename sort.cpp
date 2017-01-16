//
//  insert_sort.cpp
//  insert
//
//  Created by Keng on 2016/3/9.
//  Copyright © 2016年 Keng. All rights reserved.
//

#include "Element.h"
#include<iostream>
#include <ctime>
#include"insert_sort.h"
#include"quick_sort.h"
#include"shell_sort.h"
#include"heap_sort.h"
#include"merge_sort.h"

using namespace std;



int main(){
    
    int num;
    double START_shell,START_merge ,START_quick,START_heap;
    double END_shell,END_merge ,END_quick,END_heap;
    cout<<"Please input how many datas you have ：";
    cin>>num;
    
    
    
    Element *list=new Element[num+1];//Produce many data blocks//
    set_Data(list,num);
    Element *tmp=new Element[num+1];
   
    for(int i=1;i<=num;i++){
        
        tmp[i].set_key(list[i].get_key());
    }
    
    cout<<"There are "<<num<<" data : "<<endl;
    
    START_shell=clock();
    Shell_sort(tmp,num);
    END_shell=clock();
    cout<<"Executing time for shell sort is "<<(END_shell-START_shell)/CLOCKS_PER_SEC<<"sec"<<endl;
    
    for(int i=1;i<=num;i++){
        
        tmp[i].set_key(list[i].get_key());
    }
    
    
    START_quick=clock();
    QuickSort(tmp, 1,num);
    END_quick=clock();
    cout<<"Executing time for quick sort is "<<(END_quick-START_quick)/CLOCKS_PER_SEC<<"sec"<<endl;
    
    for(int i=1;i<=num;i++){
        
        tmp[i].set_key(list[i].get_key());
    }
    
    
    START_merge=clock();
    Merge_sort(tmp,1, num);
    END_merge=clock();
    cout<<"Executing time for merge sort is "<<(END_merge-START_merge)/CLOCKS_PER_SEC<<"sec"<<endl;
    
    for(int i=1;i<=num;i++){
        
        tmp[i].set_key(list[i].get_key());
    }

    
    START_heap=clock();
    Heap_sort(tmp, num);
    END_heap=clock();
    cout<<"Executing time for heap sort is "<<(END_heap-START_heap)/CLOCKS_PER_SEC<<"sec"<<endl;
    cout<<endl;
    
    
    delete [] list;
 
    
    
    return 0;
}
