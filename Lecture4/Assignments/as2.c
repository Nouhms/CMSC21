#include<stdio.h>
int main(){
    int i;
    while(i < 10){
        printf("hello");
    }
    for(; i < 10;){
        printf("hello");
    }
    do{
        printf("hello");
    }while(i < 10);
}