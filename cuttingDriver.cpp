#include "cuttingDiet.h"
#include <iostream>
#include <fstream>
#include <cmath>

int main ()
{
	double* dietPointer;
	dietPointer = cuttingDiet();
	cout << "Your Total amount of Daily Calories is: " << dietPointer[0] << endl;
	cout << "Your Total amount of Daily Calories is (in protein): " << dietPointer[1] << endl;
	cout << "Your Total amount of Daily Calories is (in fat): " << dietPointer[2] << endl;
	cout << "Your Total amount of Daily Calories is (in carbohydrates): " << dietPointer[3] << endl;
	cout << "Your Total amount of Daily Grams of protein is: " << dietPointer[4] << endl;
	cout << "Your Total amount of Daily Grams of fat is: " << dietPointer[5] << endl;
	cout << "Your Total Amount of Daily Grams of carbohydrates is: " << dietPointer[6] << endl;

return 0;
}