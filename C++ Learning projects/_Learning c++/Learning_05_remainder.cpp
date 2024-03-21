#include <iostream>

int main(){

    int students = 20;

    //students = students + 1;
    //students+=3;
    //students++;

    //students = students - 1;
    //students-=3;
    //students--;

    //students = students * 3;
    //students*=3;


    //students = students / 2;
    //students/=3;

    // % is modulus operator, it gives a reminder

    // first parenthesis then mult and div then subtract and add

    int remainder = students % 4;
    int students_a = students + 15 - 3 * 2 / 4;

    std::cout << students_a << '\n';
    std::cout << remainder << '\n';



}