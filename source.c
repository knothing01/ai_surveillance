#include "prototype.h"

image** create_img(){
    //create "IMAGE", obviously we have to get an array of values from image
    //creating rand image, with dynamic memory
    image** arr = (image**)malloc(SIZE * sizeof(image*));
    for (int i = 0; i < SIZE; ++i){
        arr[i] = (image*)malloc(SIZE * sizeof(image));
    }
    //init random values
    for (int i = 0; i < SIZE; ++i){
        for (int j = 0; j < SIZE; ++j){
            arr[i][j].red = rand() % 256;
            arr[i][j].green = rand() % 256;
            arr[i][j].blue = rand() % 256;
        }
    }

    return arr;
}

void get_pixel(image** arr){
    int posX = 0;
    int posY = 0;
    printf("Enter X and Y position of pixel\n");
    scanf("%d %d", &posX, &posY);

    printf("RGB values of pixel at position (%d, %d): [%u, %u, %u]\n", posX, posY, PIXEL.red, PIXEL.green, PIXEL.blue);
}

void set_pixel(image** arr){
    int posX = 0;
    int posY = 0;

    unsigned char red = 0;
    unsigned char green = 0;
    unsigned char blue = 0;

    printf("Enter X and Y position of pixel you want to change\n");
    scanf("%d %d", &posX, &posY);

    printf("-----------\n");

    printf("Enter the value of red, green and blue\n");
    scanf("%hhu %hhu" "%hhu", &red, &green, &blue);

    PIXEL.red = red;
    PIXEL.green = green;
    PIXEL.blue = blue;
}

void print_img(image** arr){
    printf("\n");
    for (int i = 0; i < SIZE; ++i){
        printf("\t");
        for (int j = 0; j < SIZE; ++j){
            printf("[%u, %u, %u] ", arr[i][j].red, arr[i][j].green, arr[i][j].blue);
        }
        printf("\n");
    }
}

void free_img(image** arr){
    for (int i = 0; i < SIZE; ++i) {
        free(arr[i]);
    }
    free(arr);
}