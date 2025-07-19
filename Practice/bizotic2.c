#include<stdio.h>
int main(){
    int x=9, y=10;
    int z;
    z=(y++,y--);
    printf("%d\n",z--);
    return 0;
}