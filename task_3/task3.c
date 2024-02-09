#include "stdio.h"

#define ROWS 4
#define COLS 6


//depth Search First algorithm
void dfs(int matrix[ROWS][COLS], int rows, int cols, int i, int j){
    if (i < 0 || i >= rows || j < 0 || j >= cols || matrix[i][j] == 0){
        return;
    }
    
    // mark current block as visited
    matrix[i][j] = 0;

    dfs(matrix, rows, cols, i+1, j);
    dfs(matrix, rows, cols, i-1, j);
    dfs(matrix, rows, cols, i, j+1);
    dfs(matrix, rows, cols, i, j-1);

}

int object_numbers(int matrix[ROWS][COLS]){
    int object_count = 0;

    for (int i = 0; i < ROWS; ++i){
        for (int j = 0; j < COLS; ++j){
            if (matrix[i][j] == 1){
                object_count++;
                dfs(matrix, ROWS, COLS, i, j);
            }
        }
    }

    return object_count;
}

int main(){

    int matrix[ROWS][COLS] = {
        {1, 1, 1, 0, 0, 0},
        {0, 1, 1, 0, 0, 0},
        {0, 0, 0, 1, 1, 0},
        {0, 1, 1, 0, 1, 0}
    };

    int obj_count = object_numbers(matrix);

    printf("%d\n", obj_count);

    return 0;
}