extern int arraysize;


int linearSearch(int array[], int value){

    for(int i = 0; i < arraysize; i++){
        
        if(array[i] == value){
            
            return i;

        }
    }
    return -1;
}

void swap(int *index1, int *index2){

    int temp = *index1;
    *index1 = *index2;
    *index2 = temp;

}

void update(int array[], int value, int updateval){
    int linearSearch(int array[], int value);

    int ret = linearSearch(array, value);
    
    if(ret != -1){
        
        array[ret] = updateval;

    }

}

void removeE(int array[], int value){

    int linearSearch(int array[], int value);

    int ret = linearSearch(array, value);

    if(ret != -1){

        for(int i = ret; i < arraysize; i++){

            array[i] = array[i+1];

        }
        
    }
}

