#include <iostream>
#include <limits>
#include <string>
#include <algorithm>
#include <cctype>

// Exercise - take a user input of bool datatype, dynamically create an array and return how much true statements are there


class BoolArray 
{
    public:

    BoolArray(){InitializeDynamicArray();};
    
    void InsertElement(bool value, int index)
    {
        if (index + 1 > capacity)
        {
            DoubleCapacity();
            pMain[index] = value;
            size++;
        }

        else
        {
            pMain[index] = value;
            size++;
        }
           
    }
    void DisplayProperties()
    {
        std::cout   << "Array size: " << size << '\n'
                    << "Array capacity: " << capacity << '\n';
    }
    void DisplayElements()
    {
        int tr = 0;
        for (int i = 0; i < size; i++)
        {   
            if (pMain[i] == true)
            {
                tr++;
            }  
            std::cout   << "Element index: " << i << " Value: " << pMain[i] << '\n';           
        }
        
        std::cout << "True statements amount: " << tr << '\n'; 
    }

    ~BoolArray()
    {
        delete[] pMain;

        pMain = nullptr;
    }

    private:

    unsigned int size = 0;
    unsigned int capacity = 2;
    bool *pMain = nullptr; // main array
    
    void CountSize()
    {
        for (int i = 0; i <= capacity; i++)
        {
            if (pMain[i] <= 1)
            {
                size = i;
                std::cout << "Element: " << i << " Value: " << pMain[i] << '\n'; 
            }
            
            else
            {
                std::cout << "Element " << i << " is empty!\n";
                break;
            }
        }
    }
    void DoubleCapacity()
    {
        bool *pTemp = new bool[capacity];
        
        for (int i = 0; i < size; i++)
        {
            pTemp[i] = pMain[i];
        }
        delete[] pMain;
    
        capacity = capacity * 2;
        pMain = new bool[capacity];

        for (int i = 0; i < size; i++)
        {
           pMain[i] = pTemp[i];
        }

        delete[] pTemp;
        pTemp = nullptr;
    }
    void InitializeDynamicArray()
    {
        pMain = new bool[capacity];
    }

};

void clearInputBuffer();

int main()
{

    BoolArray bArray;

    std::cout << "Bool array initialized, input \"1\" or \"true\" for true statement, \"0\" or \"false\" for false statment or anything else to stop\n";

    for (int i = 0; i < std::numeric_limits<unsigned int>::max(); i++)
    {
        
        std::string input;
        std::cout << "Please input value for element number " << i << ": ";
        std::getline(std::cin >> std::ws, input);
        std::transform(input.begin(), input.end(), input.begin(), ::tolower);
        
        if (input == "1" || input == "true")
        {
            bArray.InsertElement(true, i);
        }

        else if (input == "0" || input == "false")
        {
            bArray.InsertElement(false, i);
        }

        else if (i < 2)
        {
            std::cout << "Less than two elements in array. Aborting." << std::endl;
            clearInputBuffer();
            break;    
        }
        
        else
        {
            bArray.DisplayElements();
            clearInputBuffer();
            break;
        }

    }

    return 0;
}

void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
}