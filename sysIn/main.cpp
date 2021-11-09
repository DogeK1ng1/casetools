#include <iostream>
#include "functions.h"

using namespace std;

/**
	*@file
	*@brief Функция main()
	*Функция выводит надписи в консоль.
 
*/


int main(){
    print_hello();
    cout << endl;
    cout << "The factorial of 5 is " << factorial(5) << endl;
    return 0;
}