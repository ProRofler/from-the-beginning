#include <iostream>

// void - function that can be reusable, piece of code as main function but not the return type
// must be declared before main
// can adress variables but they need to be defined in prentacies (a,b)

/* Function must be written before the main fucnction to avoid error
    however there's a workaround which requires to define a function before the main function
    to pass a variables between fucnctions it must be declared in prentacies
    to listen to a variable you have to define the variable type

    the variables you pass does not have to have the same name, the order is important
*/


using namespace std;

void dossier(int yearstocome, int social, string name);

            
     int main() {
  
      //  srand(time(NULL));

        int age = 25;
        int sc = 15;
        string name = "Dam";
          //  cout << "Dossier database: enter your name to see your age and Social Credit Score \n";
          //  getline (cin, name);

        dossier(sc, age, name);


    return 0;

    }

void dossier(int yearstocome, int social, string name) {

    cout << "You're " << name << '\n';
    cout << "You're " << yearstocome << " years old" << '\n';
    cout << "Your social credit score is " << social << " %" <<  '\n';  

}

 
/*
#include <iostream>
using namespace std;

void dossier(int age, int sc, string name);

            
     int main() {
  
        srand(time(NULL));

        int age = rand() % 100 + 1;
        int sc = rand() % 100 + 1;
        string name;
            cout << "Dossier database: enter your name to see your age and Social Credit Score \n";
            getline (cin, name);

        dossier(age, sc, name);


    return 0;

    }

void dossier(int age, int sc, string name) {

    cout << "You're " << name << '\n';
    cout << "You're " << age << " years old" << '\n';
    cout << "Your social credit score is " << sc << " %" <<  '\n';  

}

 


*/