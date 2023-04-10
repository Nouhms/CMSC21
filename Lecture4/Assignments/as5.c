#include<stdio.h>
int main(){
    int monthDays;
    do{
        printf("Enter the number of days in month: ");
        scanf("%d", &monthDays); 
    }while(monthDays < 1 || monthDays > 31);
    int startDay;
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &startDay);
    int skippedDays = (startDay-1) * 2;//multiply by 2 because each day takes 2 spaces
    //print the spaces to be skipped for the starting day
    for(int i = 0; i < skippedDays; i++){
        printf("  ");
    }
    for(int day = 1; day <= monthDays; day++){
        //startDay-1 to count the skipped days then -1 again 
        //because we go to next line only when we reach next Sunday, 
        //this formula calculates every day that reaches Sunday.
        //also avoid skipping line when the starting day is 1 
        if((startDay-2+day)%7 == 0 && day-startDay != 0){
            printf("\n");
        }
        printf("%2d  ", day);
    }
}