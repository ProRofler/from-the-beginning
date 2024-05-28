#include <iostream>

// this must be refactored and split into .h .cpp file structure

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
    
    void CountSize() //attempt to count size of an array but it wont work, need to update the logic
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
        T *pTemp = nullptr;
        pTemp = new T[capacity];
        
        if (pTemp)
        {
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

        else
        {
            std::cout << "There was an error allocating memory!\n";
            return;
        }
    }
    void InitializeDynamicArray()
    {
        pMain = new T[capacity];
    }

};