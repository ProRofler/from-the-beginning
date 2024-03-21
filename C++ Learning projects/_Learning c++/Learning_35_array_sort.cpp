#include <iostream>


void ArraySort(int array[], int size);


int main(){

    int array[] = {5, 8, 2, 1};
    int size = sizeof(array)/sizeof(array[0]);

    ArraySort(array, size);

    for(int element : array){
        std::cout << element << " ";
    }

}

void ArraySort(int array[], int size){ 

int temp;

//this is called bubble method, easy to write but not efficient
for (int i = 0; i < size -1; i++){ 
    for(int j = 0; j < size - i -1; j++)
    if(array[j] > array[j+1]){
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;

    }

}
    
}