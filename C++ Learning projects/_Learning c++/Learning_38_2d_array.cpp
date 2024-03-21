#include <iostream>


int main()
{
    std::string components[][3] =   {{"Intel I9 10700K", "Ryzen 9 9700X", "Apple M2 Pro"}, // rows and collums, you can not define rows but you have to define collums
                                    {"Nvidia RTX 4080", "Radeon 7800X", "Apple MX"},
                                    {"Corsair 500W", "Chieftec 750W", "Thermaltake 1000W"}};



    int rows = sizeof(components)/sizeof(components[0]);
    int collums = sizeof(components[0])/sizeof(components[0][0]);
    
    
    for (int i = 0; i < rows; i++)
    {   //iterating through two loops because othewise we will get only the memory adress
        for (int j = 0; j < collums; j++)
        {
            std::cout << components[i][j] << " ";
        }
        std::cout << '\n';
    }
    
    return 0;
}