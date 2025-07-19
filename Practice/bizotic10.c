#include<stdio.h>
int foo(){
    return (double)(char) 5.0;
}
int main(){
    int x=0;
    x=foo();
    printf("%d\n",x);
    
}