#include <iostream>
#include <ctime>

using namespace std;
int main() {

srand(time(0));

int a = rand() % 25 +1;


if (a >=1; a<=10) {
    cout << "Low " << a;
}


            else if (a >10; a<=15) {
                cout << "Medium " << a;
            }


                    else if (a > 16; a<=20) {
                        cout << "High " << a;
                    }

                                else if (a > 20; a<=24) {
                                    cout << "Very high " << a;
                                }
                                
                                            else {
                                                cout << "Rarest " << a;
                                            }


return 0;
}
