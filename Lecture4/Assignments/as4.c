#include<stdio.h>
int main(){
    //increase the power by 1 until it reaches 10 --> 2^10
    for(int n = 0; n <= 10; n++){ 
        int number = 1;
        //multiply the number by 2, n times
        for(int i = n; i > 0; i--){
            number *= 2;
        }
        printf("2 to the power of %d is %d\n", n, number);
    }   
}