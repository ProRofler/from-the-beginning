#include <iostream>
#include <limits>
#include <string>
#include <algorithm>
#include <cctype>

// Exercise - take a user input of bool datatype, dynamically create an array and return how much true statements are there

template <typename T>
class DynamicArray 
{
    public:

    DynamicArray(){InitializeDynamicArray();};
    
    void InsertElement(T value, int index)
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

    ~DynamicArray()
    {
        delete[] pMain;

        pMain = nullptr;
    }

    private:

    unsigned int size = 0;
    unsigned int capacity = 2;
    T *pMain = nullptr; // main array
    
    void CountSize() //attempt to count size of an array but it wont work
    {
        for (int i = 0; i <= capacity; i++)
        {
            if (pMain[i] <= 1) //this will alway result in true
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
        T *pTemp = new T[capacity];
        
        for (int i = 0; i < size; i++)
        {
            pTemp[i] = pMain[i];
        }
        delete[] pMain;
    
        capacity = capacity * 2;
        pMain = new T[capacity];

        for (int i = 0; i < size; i++)
        {
           pMain[i] = pTemp[i];
        }

        delete[] pTemp;
        pTemp = nullptr;
    }
    void InitializeDynamicArray()
    {
        pMain = new T[capacity];
    }

};

void clearInputBuffer();

int main()
{

    DynamicArray<bool> bArray;

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