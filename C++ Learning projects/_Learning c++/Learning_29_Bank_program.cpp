#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

// practice program to show balance, withdraw and deposit


//std::cin.clear();
//fflush(stdin);



void ShowBalance(double balance);
int Menu(int select);
double withdraw(double balance);
double deposit(double balance);
void clearInputBuffer();

int main(){

    double balance = 150;
    int select;
    bool loop = true;
 
        do{   
            int select = Menu(select);
            
                switch(select){

                    case 1:
                        ShowBalance(balance);
                    break;
            
                        case 2:
                            balance = withdraw(balance); 
                            std::cout << "Your balance after withdrawal is: " << std::setprecision(2) << std::fixed << balance << '\n';
                        break;
                    
                            case 3:
                                balance = deposit(balance); 
                                std::cout << "Your balance after depositing is: " << std::setprecision(2) << std::fixed << balance << '\n';
                            break;

                                case 4:
                                    loop = false;
                                    std::cout << "Thank you for usinig our service! \n";
                                break;
                            
                                    default:
                                        std::cout << "Unknown action, returning to the menu \n";
                                        clearInputBuffer();
                                    break;
                }
                
        }while (loop == true);       
    //system("pause");
    return 0;     
}

void clearInputBuffer() {
    std::cin.clear();  // Clear any error flags
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discard characters up to and including the next newline
}

int Menu(int select){
    std::cout << "******************************************MENU*******************************************" << '\n';
    std::cout << "Please choose action: \n 1.Show balance \n 2.Withdraw money \n 3.Deposit money \n 4.Exit \n Type number for action: \n ";
    std::cout << "*****************************************************************************************" << '\n';
    std:: cin >> select;
    return select;
}

void ShowBalance(double balance){
    std::cout << '\n' << "Your balance is: " << std::setprecision(2) << std::fixed << balance << '\n' << '\n';
}

double withdraw(double balance){
    double amount = 0;
    bool loop = true;

        do{
            clearInputBuffer();
            std::cout << "Enter the amount to withdraw \n";                       
            std::cin >> amount;

                if(amount > 0 && balance - amount > 0){
                    loop = false;
                    break;
                    }
                        else if(balance - amount < 0){
                            std::cout << "Insufficient funds\n\n";                      
                        }
                            
                            else {
                                std::cout << "Please only enter amount above zero: \n \n";                           
                            }
        }while(loop == true);
    return balance - amount;
}

double deposit(double balance){
    double amount;
    bool loop = true;
   
        for(loop == true; loop == true; loop == true){
            clearInputBuffer();
            std::cout << "Enter the amount to deposit \n";
            amount = 0;
            std::cin.clear();            
            std::cin >> amount;

                if(amount > 0){
                    loop = false;
                }                                           
                    else {
                        std::cout << "Please only enter amount above zero: \n \n";                              
                    }
        }
    return balance + amount;      
}