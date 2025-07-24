#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;


void swap(int *a ,int *b){
    int temp = *a;
    *a=*b;
    *b= temp;
}


void bubble(int *arr,int length){
   

    for(int i = 0 ; i <= length-1 ; i++){
        for ( int j = 0; j < length-i-1 ;j++)
        {
            if(arr[j] > arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
        
    }
  //  return arr;
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
    bubble(ar,length);
    print(ar,length);
}