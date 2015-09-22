#include "cuttingDiet.h"
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

 double* cuttingDiet()
 {
 	string bodyType;
 	double bodyWeight;
 	double weeklyAmount;
 	double baseAmount;
 	double gramsOfProteinLow;
 	double gramsOfProteinHigh;
 	double gramsOfProtein;
 	double gramsofCarbohydrates;
 	double gramsOfFatsLow;
 	double gramsOfFatsHigh;
 	double gramsOfFats;
 	double totalCals;
 	double proteinCals;
	double fatCals;
	double carbohydrateCals;
 	double mesoMultiplier = 15;
 	double ectoMultiplier = 16.5;
 	double endoMultiplier = 13.5;
 	double mesoProteinLow = 1.2;
    double mesoProteinHigh = 1.3;
    double mesoFatLow = 0.17;
    double mesoFatHigh = 0.23;
    double ectoProteinLow = 1.4;
    double ectoProteinHigh = 1.6;
    double ectoFatLow = 0.24;
    double ectoFatHigh = 0.28;
    double endoProteinLow = 1.4;
    double endoProteinHigh = 1.5;
    double endoFatLow = 0.23;
    double endoFatHigh = 0.28;
    //double diet [7]; 
    double* dietPtr = new double[7];
    baseAmount = 500.0;
    //dietPtr = &diet[0];
 	cout << "What is your body type? Please enter the full word ( Mesomorph, Ectomorph, Endomorph ) " << endl;
 	cin >> bodyType;
 	cout << "Please enter your body weight in pounds" << endl;
 	cin >> bodyWeight;

 	if (bodyWeight <= 0 )
 	{
 		cout << "How are you going to lose weight when you dont exist? Rerun if you mean business" << endl;
 	}

 	cout << "How many pounds are you trying to lose a week? (0.5, 1.0, 1.5, 2.0)?" << endl;
 	cin >> weeklyAmount;
 	baseAmount = baseAmount*weeklyAmount;


 	if (bodyType == "Mesomorph")
 	{
 		totalCals = (mesoMultiplier * bodyWeight) - baseAmount;
 		gramsOfProteinLow = bodyWeight * mesoProteinLow;
 		gramsOfProteinHigh = bodyWeight * mesoProteinHigh;
 		proteinCals = ((gramsOfProteinHigh+gramsOfProteinLow)/2.0)*4.0;
 		gramsOfFatsLow = bodyWeight * mesoFatLow;
 		gramsOfFatsHigh = bodyWeight * mesoFatHigh;
 		fatCals = ((gramsOfFatsHigh+gramsOfFatsLow)/2.0)*9.0;
 		carbohydrateCals = totalCals - proteinCals - fatCals;
 		gramsofCarbohydrates = carbohydrateCals/4.0;
 		gramsOfProtein = (gramsOfProteinLow + gramsOfProteinHigh) / 2;
 		gramsOfFats = (gramsOfFatsLow + gramsOfFatsHigh) / 2;
 	}

 	else if (bodyType == "Ectomorph")
 	{
 		totalCals = (ectoMultiplier * bodyWeight) - baseAmount;
 		gramsOfProteinLow = bodyWeight * ectoProteinLow;
 		gramsOfProteinHigh = bodyWeight * ectoProteinHigh;
 		proteinCals = ((gramsOfProteinHigh+gramsOfProteinLow)/2.0)*4.0;
 		gramsOfFatsLow = bodyWeight * ectoFatLow;
 		gramsOfFatsHigh = bodyWeight * ectoFatHigh;
 		fatCals = ((gramsOfFatsHigh+gramsOfFatsLow)/2.0)*9.0;
 		carbohydrateCals = totalCals - proteinCals - fatCals;
 		gramsofCarbohydrates = carbohydrateCals/4.0;
 		gramsOfProtein = (gramsOfProteinLow + gramsOfProteinHigh) / 2;
 		gramsOfFats = (gramsOfFatsLow + gramsOfFatsHigh) / 2;
 	}

 	else if (bodyType == "Endomorph")
 	{
 		totalCals = (endoMultiplier * bodyWeight) - baseAmount;
 		gramsOfProteinLow = bodyWeight * endoProteinLow;
 		gramsOfProteinHigh = bodyWeight * endoProteinHigh;
 		proteinCals = ((gramsOfProteinHigh+gramsOfProteinLow)/2.0)*4.0;
 		gramsOfFatsLow = bodyWeight * endoFatLow;
 		gramsOfFatsHigh = bodyWeight * endoFatHigh;
 		fatCals = ((gramsOfFatsHigh+gramsOfFatsLow)/2.0)*9.0;
 		carbohydrateCals = totalCals - proteinCals - fatCals;
 		gramsofCarbohydrates = carbohydrateCals/4.0;
 		gramsOfProtein = (gramsOfProteinLow + gramsOfProteinHigh) / 2;
 		gramsOfFats = (gramsOfFatsLow + gramsOfFatsHigh) / 2;
 	}

 	else
 	{
 		cout << "You didnt enter a correct word please rerun and try again" << endl;
 	}

 	 	dietPtr[0] = totalCals;
 		dietPtr[1] = proteinCals;
 		dietPtr[2] = fatCals;
 		dietPtr[3] = carbohydrateCals;
 		dietPtr[4] = gramsOfProtein;
 		dietPtr[5] = gramsOfFats;
 		dietPtr[6] = gramsofCarbohydrates;

 	return dietPtr;
 }

