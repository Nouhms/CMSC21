#include<stdio.h>
#include<ctype.h>//imported for changing characters to uppercase
#define ARR_LEN ((int)(sizeof(road_networks)/sizeof(road_networks[0])))
int main(){
    int road_networks[9][9] = {
        {1, 1, 0, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1, 1, 0, 0, 1},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {0, 0, 0, 1, 1, 0, 0, 0, 0},
        {1, 0, 1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 1, 1}
    };
    //the corresponding points for each index in the 2d array
    const char POINT_INDEX[ARR_LEN] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    printf("    a   b  [c] [d]  e   f   g   h   i\n");
    for(int row = 0; row < ARR_LEN; row++){
        //index 2 and 3 are points 'c' and 'd' which are charging stations
        if(row == 2 || row == 3){
            printf("[%c] ", POINT_INDEX[row]);
        }else{
            printf("%*c  ", 2, POINT_INDEX[row]);
        }

        for(int col = 0; col < ARR_LEN; col++){
            printf("%d   ", road_networks[row][col]);
        }
        printf("\n");
    }
    
    int location_index;
    printf("Which point are you located?\n0 - A\t3 - D\t6 - G\n1 - B\t4 - E\t7 - H\n2 - C\t5 - F\t8 - I\nEnter your location: ");
    scanf("%d", &location_index);
    //based on the graph created by the adjacency matrix, the corresponding cases points to the nearest charging stations
    switch(location_index){
        case 0: case 1: case 5:
            printf("At point: %c\npoint: C arrived to charging station", toupper(POINT_INDEX[location_index]));
            break;
        case 2:
            printf("point: C arrived to charging station");
            break;
        case 3:
            printf("point: D arrived to charging station");
            break;
        case 4: case 6:
            printf("At point: %c\npoint: D arrived to charging station", toupper(POINT_INDEX[location_index]));
            break;
        default:
            printf("Can't go to nearby charging station");
    };
}