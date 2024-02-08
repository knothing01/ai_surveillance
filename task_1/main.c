#include "prototype.h"

int main() {

    //init
    image** arr = create_img();
    print_img(arr);

    //get_pixel
    get_pixel(arr);

    sleep(2);

    //set_pixel
    set_pixel(arr);
    print_img(arr);

    //deallocate
    free_img(arr);
    return 0;
}
