#include <iostream>
#include <string>

int ArraySearch(std::string stuff[], int size, std::string element);

int main(){

std::string stuff[] = {"test", "test 2", "test 3"};
std::string element;
int size = sizeof(stuff)/sizeof(std::string);


std::cout << "Enter text to search\n";
std::getline(std::cin >> std::ws, element);

int index = ArraySearch(stuff, size, element);

    if (index != -1){
        std::cout << "index is " << index << '\n';
    }

        else{
            std::cout << "No such element\n";
        }


return 0;
}

int ArraySearch(std::string stuff[], int size, std::string element){

    for (int i = 0; i < size; i++)
    {
        if (element == stuff[i])
        {
            return i;
        }
        
    }
        
return -1; // -1 is the return in programming which used in cases where the needed result isn't gotten
}