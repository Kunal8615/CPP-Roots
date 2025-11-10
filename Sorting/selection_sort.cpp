#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;


void swap(int *a ,int *b){
    int temp = *a;
    *a=*b;
    *b= temp;
}

void selection(int *arr,int length){
    for(int i = 0 ; i<length ;i++){
        int small = i;
        for (int j = i+1; j < length; j++) 
        {
            if(arr[small] > arr[j])
            small = j;
        }
        swap(&arr[small],&arr[i]);
        
    }
}

void print(int *arr, int length){
     
    for (int i = 0; i < length ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){
  int ar[5] = {4,5,2,8,1};
     int length = sizeof(ar) / sizeof(ar[0]);
     selection(ar,length);
     print(ar,length);
}