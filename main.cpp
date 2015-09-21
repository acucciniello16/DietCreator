#include "cuttingDiet.h"
#include "bulkingDiet.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <string.h>

using namespace std;

int main ()
{
	double* dietPointer;
	string goal;
	cout << "What do you want to do to get to your goal physique? (Gain or Lose)" << endl;
	cin >> goal;

	if (goal == "Gain" || goal == "gain")
	{
		dietPointer = bulkingDiet();
		cout << "Your Total amount of Daily Calories is: " << dietPointer[0] << endl;
		cout << "Your Total amount of Daily Calories is (in protein): " << dietPointer[1] << endl;
		cout << "Your Total amount of Daily Calories is (in fat): " << dietPointer[2] << endl;
		cout << "Your Total amount of Daily Calories is (in carbohydrates): " << dietPointer[3] << endl;
		cout << "Your Total amount of Daily Grams of protein is: " << dietPointer[4] << endl;
		cout << "Your Total amount of Daily Grams of fat is: " << dietPointer[5] << endl;
		cout << "Your Total Amount of Daily Grams of carbohydrates is: " << dietPointer[6] << endl;
	}
	
	else if (goal == "Lose" || goal == "lose")
	{
		dietPointer = cuttingDiet();
		cout << "Your Total amount of Daily Calories is: " << dietPointer[0] << endl;
		cout << "Your Total amount of Daily Calories is (in protein): " << dietPointer[1] << endl;
		cout << "Your Total amount of Daily Calories is (in fat): " << dietPointer[2] << endl;
		cout << "Your Total amount of Daily Calories is (in carbohydrates): " << dietPointer[3] << endl;
		cout << "Your Total amount of Daily Grams of protein is: " << dietPointer[4] << endl;
		cout << "Your Total amount of Daily Grams of fat is: " << dietPointer[5] << endl;
		cout << "Your Total Amount of Daily Grams of carbohydrates is: " << dietPointer[6] << endl;
	}
	
	else 
	{
		cout << "Please try to rerun entering 'Gain' or 'Lose' " << endl;
	}

return 0;
}