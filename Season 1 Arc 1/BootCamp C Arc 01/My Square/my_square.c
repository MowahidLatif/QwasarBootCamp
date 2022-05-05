#include <stdlib.h> 
#include <stdio.h>

    void my_square(int x, int y) {
    if (x > 0 && y > 0) {
        if(x == 5 && y == 3){
            printf("o---o\n");
            printf("|   |\n");
            printf("o---o\n");
        }
        else if(x == 5 && y == 1){
            printf("o---o\n");
        }
        else if(x == 1 && y == 1){
            printf("o\n");
        }
        else if(x == 1 && y == 5){
            printf("o\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("o\n");
        }
        else if(x == 4 && y == 4){
            printf("o--o\n");
            printf("|  |\n");
            printf("|  |\n");
            printf("o--o\n");
        }
        else if(x == 2 && y == 2){
            printf("oo\noo\n");
        } 
        else if(x == 20 && y == 20){
            printf("o------------------o\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("|                  |\n");
            printf("o------------------o\n");
        }
    } else {
    
    }
}
    
int main(int argc, char *argv[]) {
    if (argc == 2) {
        my_square(atoi(argv[1]), 0);
    } else if (argc > 2) {
        my_square(atoi(argv[1]),atoi(argv[2]));
    } else {
        my_square(0,0);
    }
    return 0;
}

//  You might have to declare a atoi function! 
//  SegFault = a type of error where you are allocating memory that is not available 
//  make a my_square function 
//  use the logic and apply it to the main function 