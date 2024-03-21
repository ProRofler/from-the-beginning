#include <iostream>


int GetTotal(int arr[], int size);

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(int);
    int total = GetTotal(arr, size);


std::cout << total;

return 0;
}


int GetTotal(int arr[], int size){
int total = 0;

for (int i = 0; i < size; i++)
{
    total += arr[i];
}

return total;
}