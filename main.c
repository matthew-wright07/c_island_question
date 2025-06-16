#include <stdio.h>

int main(){
    int island[10][2] = {
        {0,5},
        {1,3},
        {2,8},
        {3,6},
        {4,2},
        {5,4},
        {6,9},
        {7,6},
        {8,8},
        {9,4}
    };

    for (int i=10;i>=0;i--){
        for (int j=0;j<10;j++){
            if (island[j][1]>=i){
                printf("  #  ");
            }else{
                printf("     ");
            }
        }
        printf("\n");
    }

    return 0;
}