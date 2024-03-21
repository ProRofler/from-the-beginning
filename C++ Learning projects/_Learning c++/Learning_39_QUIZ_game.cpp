#include <iostream>
#include <limits>
#include <iomanip>
#include <string>
#include <stdio.h>

void clearInputBuffer();
int GameLogic(std::string questions[], std::string answers[][3], int correct[]);
int IntegerInput();



int main()
{
    std::string questions[] = {"1. What is the color of night?",
                                "2. Glory to?",
                                "3. You execution date?"};

    std::string answers[][3] = {{"1. Black", "2. Grey", "3. Sanguine, my brother"},
                                {"1. CCP!", "2. Artstotzka!", "3. USA!"},
                                {"1. Never", "2. Tomorrow", "3. Next year"}};
    int correct[] = {3, 1, 2};
    int win = 0;
    int size = sizeof(questions)/sizeof(questions[0]);


    win += GameLogic(questions, answers, correct);

    
    if(win >= 0)
    {
        //std::cout << "Your score is: " << win*10 << "\nCorrect answers percentage is: " << std::setprecision(0) << std::fixed<< (win/(double)size)*100 << "%";
        printf("Your score is: %d\nCorrect answers percentage is: %.0f", win*10, (win/(double)size)*100);

    }
    
    else
    {
        std::cout << "\n*******ERROR*******\n";
    }



}

void clearInputBuffer()
{
    std::cin.clear();  // Clear any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard characters up to and including the next newline

  // std::cin.clear();
  // fflush(stdin);
}

int GameLogic(std::string questions[], std::string answers[][3], int correct[]) //could've also transfer the size of an array but I think it's useless unless it's a dynamic memory
{
    int input;
    int score = 0;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Round number: " << i +1 << '\n';
        std::cout << questions[i] << '\n';
        std::cout << "\n List of answers: \n";
            for (int j = 0; j < 3; j++)
            {      
                std::cout << answers[i][j] << '\n'; //showing all three answers here
            }
        input = IntegerInput();
        if(input == correct[i])
        {
            std::cout << "\nCorrect!\n\n";
            score++;
        }
        else
        {
            std::cout << "\nWrong!\n\n";
        }

    }
    
return score;
};

int IntegerInput()
{
    
    bool loop = true;
    int input;
    
    for (loop == true; loop == true; loop == true)
    {
       // clearInputBuffer();
        std::cout << "Choose your answer: \n";
        std::cin >> input;
        if(input > 0 && input < 4)
        {
            loop = false;
        }
        else
        {
            std::cout << "Please enter only corresponding numbers\n";
             clearInputBuffer();
        }
    }

    return input;
}

