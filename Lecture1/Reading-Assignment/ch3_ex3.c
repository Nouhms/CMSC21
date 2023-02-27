#include<stdio.h>
int main(){
    int num1, denom1, num2, denom2, result_num, result_denom;
    printf("Enter first fraction: ");
    /*
    with scanf method, inputs can be distinguished from normal characters by
    the "%" character. The line of input is read but the "/" character is not stored because 
    there is no "%" specifier. When multiple "%" are together (e.g. %X%X), white spaces between are ignored.
    */    
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    /*
    each numerator is multplied with the denominator of the other fraction 
    to get a common denominator which is the product of denom1 and denom2.
    Now the 2 new numerators can be safely summed to get the result numerator.
    */
    result_num = num1*denom2 + num2*denom1;
    result_denom = denom1 * denom2;
    printf("The sumis %d/%d\n", result_num, result_denom);
}