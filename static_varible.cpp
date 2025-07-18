#include <stdio.h>
using namespace std;

void fun(){
   static int a =1; // static varible will work withthe end of the program it will not deleted in backen memory
    a++;
    printf("%d",a);
}
int main(){  
    fun();
    fun();
    fun();
  
}