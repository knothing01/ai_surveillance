#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define SIZE 3 


int main(){

    srand(time(NULL));

    //init
    int** arr = (int**)malloc(SIZE * sizeof(int*));
    for (int i = 0; i < SIZE; ++i){
        arr[i] = (int*)malloc(SIZE * sizeof(int));
    }

    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            arr[i][j] = rand() % 2;
        }
    }


    //print
    for (int i = 0; i < SIZE; ++i){
        printf("\n");
        for (int j = 0; j < SIZE; ++j){
            printf("%d ", arr[i][j]);
        }
    }

    // reverse
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE / 2; ++j) {
            arr[i][j] ^= arr[i][SIZE - 1 - j];
            arr[i][SIZE - 1 - j] ^= arr[i][j];
            arr[i][j] ^= arr[i][SIZE - 1 - j];
        }
    }

    //invert
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; ++j) {
            arr[i][j] = !arr[i][j];
        }
    }
    
    printf("\nnew arr\n");

     //print
    for (int i = 0; i < SIZE; ++i){
        printf("\n");
        for (int j = 0; j < SIZE; ++j){
            printf("%d ", arr[i][j]);
        }
    }


    //free
    for(int i = 0; i < SIZE; ++i){
        free(arr[i]);
    }

    free(arr);

    return 0;
}