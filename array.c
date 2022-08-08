#include<stdio.h>
#include "arrayheader.h"
#include<time.h>
#include<stdlib.h>

int arraysize = 20;



int main(){

    void printArr(int array[]);
    int array[arraysize];
    
    srand(time(NULL));

    for(int i = 0; i < arraysize; i++){

        array[i] = rand() % 100;

    }
    
    array[4] = 20;

    printArr(array);

    int val = linearSearch(array, 20);

    printf("\n seperate \n\n");

    printf("%d\n\n", val);

    update(array, 20, 12);
    printArr(array);

    
    printf("\n seperate 2 \n\n");
    val = linearSearch(array, 12);
    printf("%d\n\n", val);

    return 0;
}

void printArr(int array[]){

    for(int i = 0; i < arraysize; i++){

        printf("%d\n", array[i]);
    }

}
//program is initializing the array aswell as the global variable for arraysize.

