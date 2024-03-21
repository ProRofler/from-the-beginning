#include <iostream>

//using namespace std;


int main(){

    srand (time(NULL));
    
    int guess;
    int tr = 1;
    char yn;
    bool r = true;
    
    for(r == true; r == true; r == true){
    
        int num = rand() % 20 +1;
        tr = 1;
            do{

                std::cout << "Guess the number between 1 and 20 \n";
                std::cin >> guess;

                    if (guess > num ) {
                    std::cout << "Too high brah" << '\n';
                    }

                        else if (guess < num ) {

                        std::cout << "Too low brah" << '\n';
                        }

                            else {
                                std::cout << "Niceeeee, the number of tries is " << tr << '\n' << "Type y if you want to play again \n";
                                std::cin >> yn;
                                    switch (yn)
                                    {
                                        case ('y'):
                                        r = true;
                                        break;
                                        
                                            default:
                                                r = false;
                                                break;
                                            }        
                        }

                tr++;

            } while (num != guess);

    }

//system("pause");
return 0;
}
