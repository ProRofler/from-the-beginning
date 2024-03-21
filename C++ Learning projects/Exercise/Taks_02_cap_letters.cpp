// the task is to create a program that take a string and capitalize every other letter in a string
// string should be available for input

#include <iostream>
#include <string>



//setlocale(LC_ALL, "Russian");
//SetConsoleOutputCP(1251);

int main() {
    using std::cout;
    using std::cin;
    using std::string;
    using std::toupper;

    string InText;
    string OutText;
    int length;
    int loopN = 1;
    char up; // character converted to uppercase


cout << "Enter text for conversion: \n";

getline(cin, InText);
    OutText = InText;        
    length = InText.length();
    up = toupper(InText.front());
    OutText[0] = up; 
    //OutText.replace(0,1,(string up); - this solution works only with strings and not the characters 

do  {
     int rem = loopN % 2;

    if (rem == 1) {
     up = tolower(OutText[loopN]);
        OutText[loopN] = up;
        loopN ++;
       
    }
    else {
     up = toupper(OutText[loopN]);
        OutText[loopN] = up;
        loopN ++;
       
    }

}   while (loopN != (length + 1));

   cout <<"original text: " << InText << '\n'<< "Converted text: " << OutText << '\n';

//cout << length;
system("pause");
    return 0;
}