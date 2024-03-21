#include <iostream>
#include <ctime>

char UserInput(char user);
char AiInput(char ai);
int GameLogic(int win);



int main(){

    char user;
    char ai;
    int aiWin = 0;
    int playerWin = 0;
    //bool loop = true;

   // UserInput(user);

    do{
    
        int win = GameLogic(win);

        switch (win)
        {
            case 1:
            std::cout << "You lose the round!\n";
            aiWin++;
            break;

                case 2:
                std::cout << "You win the round!\n";
                playerWin++;
                break;
        
                    default:
                    std::cout << "Round tie! \n";
                    break;
        }

    } while (playerWin < 2 && aiWin < 2);

    switch (playerWin)
        {
        case 2:
            std::cout << "You won the game of three! \n";
            break;
        
        default:
            std::cout << "You lost the game of three! \n";
            break;
        }

 return 0;

}


char UserInput(char user){

do{
    std::cout << "Choose rock(r), paper(p) or scissors(s) \n";
    std::cin >> user;
}while(user != 'r' && user != 'p' && user !='s');

    return user;
}

char AiInput(char ai){

    srand (time(NULL));
    int AiThrow = rand() % 3 + 1;
    std::string result;

        switch (AiThrow){
            case 1:
                ai = 'r';
                result = "Rock";
            break;

                case 2:
                    ai = 'p';
                    result = "Paper";
                break;

                    case 3:
                        ai = 's';
                        result = "Scissors";
                    break;
                    
                        default:
                        std::cout << "Something is wrong!\n";
                            //ai = 's';
                            system("pause");
                        break;
        }
        
        std::cout << "Your opponent's throw is: " << result << '\n';
    return ai;
}

int GameLogic(int win){

    
    
    //int win;

    char user = UserInput(user);
    char ai = AiInput(ai);

    // win 1 = lose 2 = win 3 = draw

    if (user == 'r' && ai == 'p'){   
        win = 1;
    }

        else if (user == 'r' && ai == 's'){   
            win = 2;
        }
   
            else if (user == 'p' && ai == 'r'){   
                win = 2;
            }
    
                else if (user == 'p' && ai == 's'){   
                    win = 1;
                }
                    else if (user == 's' && ai == 'r'){   
                        win = 1;
                    }                    
                        else if (user == 's' && ai == 'p'){   
                            win = 2;
                        }
                            else{
                                win = 3;
                            }

                            //std::cout << user << '\n' << ai << '\n';

return win;
}