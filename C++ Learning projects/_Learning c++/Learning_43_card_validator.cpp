#include <iostream>
#include <string>

/*
Credit card validator practice program
Conditions:
1. Takes integer as input
2. Can take input with or without spaces 
3. If the input is more or less than 16 numbers, returns an error

Algorythm:
1. double every second digit from right to left(odd numbered)
	if doubled number is 2 digits, split them
2. Add all single digits from step 1
3. Add every send and fourth from left to right
4. Sum results from steps 2&3
4. Valid if step 4 is divisible by 10 
*/

void CardInputConverter(const std::string& CardStr, int card[15]);
bool Validator(int card[15]);


int main()
{

    std::string CardStr;
    int card[15] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    bool isValid = false;

    std::cout << "*****************CARD VALIDATOR PROGRAM*****************\n";
    std::cout << "Enter your card number to check if it's valid\n";
    std::cout << "Card number: ";
    getline(std::cin >> std::ws, CardStr);


    CardInputConverter(CardStr, card);

    isValid = Validator(card);


    switch (isValid)
    {
    case 1:
        std::cout << CardStr << " card is valid!\n";
        break;
    
    default:
        std::cout << CardStr << " card is not valid!\n";
        break;
    }


    //std::cout << card[0];

    return 0;
}


void CardInputConverter(const std::string& CardStr, int card[15])
{

std::string CardTemp = CardStr;

for (int i = 0; i < CardTemp.length(); i++)
{
    if (CardTemp.at(i) == ' ')
    {
        CardTemp.erase(i, 1);
        i--;
    }
    
}



if (CardTemp.length() != 16)
{
    std::cout << "Incorrect card number length\n";
    return;
}


for (int i = 0; i < 16; i++)
{
    card[i] = CardTemp.at(i) - '0';
}

}

bool Validator(int card[15])
{
    int temp;
    int step1 = 0;
    int step2 = 0;

    //first step with extra actions
     for (int i = 0; i < 16; i+=2) 
    {
        card[i]*=2;

        if (card[i]>9)
        {         
         temp = card[i] - 10;
         card[i]=1+temp;
        }
        step1 += card[i];
    }

        //second step, much easier
        for (int j = 1; j < 16; j+=2) 
        {
            step2 += card[j];
        }

        if ((step1+step2)%10 == 0)
        {
            return 1;
        }
        
    return 0;
}