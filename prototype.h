#ifndef AI_SURVEILLANCE_PROTOTYPE_H
#define AI_SURVEILLANCE_PROTOTYPE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 3
#define PIXEL arr[posX][posY]

typedef struct{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
}image;

image** create_img();


//tasks
void print_img(image** arr);
void set_pixel(image** arr);
void get_pixel(image** arr);

void free_img(image** arr);

#endif //AI_SURVEILLANCE_PROTOTYPE_H


