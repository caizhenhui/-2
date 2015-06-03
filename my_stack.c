#include "include/my_stack.h"
#define MAXSIZE 5   
int data[MAXSIZE];
int top=0;
void stack_push(int x){
 data[top]=x;
top++;
}
int stack_pop(){
  top--;
 return data[top];
}
int stack_capacity(){
return top;
}
int stack_is_empty(){ 
if(top==0)return 1; 
else return 0;
}
int stack_is_full(){
if(top<MAXSIZE)return 0;
else return 1;
}

