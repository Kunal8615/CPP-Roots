#include <stdlib.h>
#include <stdio.h>

struct s{
    char name[20];
    int roll;
};
void main(){
    struct s s1 = {"kunal",10};
    struct s *ptr;
    ptr = &s1;
    printf("%s",ptr->name);
    printf("%d",ptr->roll);
    
}