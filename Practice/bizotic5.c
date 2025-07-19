#include<stdio.h>
int main(){
    if(7&8){
        printf("Hacker");
    }
    if((~6 & 0x000e)==8)
        printf("Earth\n");
}