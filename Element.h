//
//  main.cpp
//  insert
//
//  Created by Keng on 2016/3/9.
//  Copyright © 2016年 Keng. All rights reserved.
//

#include<iostream>
#include<time.h>
using namespace std;

class Element{
    
public:
    
    int get_key() const{ return key; };
    void set_key(int k){ key = k; };
    
private:
    int key;
};

void set_Data(Element *l,int n){
    
    int data;
    for (int i = 1; i <= n; i++){
        
        
        data=i;
        l[i].set_key(data);
    }
    
}
void print_Data(Element *l,int n){
    
    for (int i = 1; i <= n; i++){
        
        cout<<l[i].get_key()<<" ";
    }
    cout << endl;
    
}

