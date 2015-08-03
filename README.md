# DietCreator
Command Line tool (Using GCC complier) to Calculate your diet break down using user input

####Install
1. Clone repository to your local machine   
 ``` Ex.  git clone --bare https://github.com/acucciniello/DietCreator.git```  
2. Go into the directory that was cloned  
 ``` Ex. cd DietCreator ```  
3. Compile using GCC complier  
 ``` g++ firstFileName.cpp secondFileName.cpp -o nameOfExecutable```  
 ```    Ex. g++ cuttingDiet.cpp bulkingDiet.cpp main.cpp -o diet```
3. Run executable  
    `./nameOfExecutable`  
    ` Ex. ./diet`

####Takes User input from the command line:
1. Input physique goal ('Gain' for gaining muscle or 'Loose' for loosing fat')
2. Enter body type (Mesomorph, Ectomorph, Endomorph)
3. Enter weight in pounds(lbs)
4. Enter amount of pounds to loose/gain a week(either 0.5, 1.0, 1.5, 2.0) 


All numbers are calculated using the following link's formulas:

1. [Cutting Diet](http://www.simplyshredded.com/layne-norton-the-most-effective-cutting-diet.html)
2. [Bulking Diet](http://sefnach.com/index/the_ultimate_bulking_guide_for_maximum_muscle_gains_written_by_chris_martinez/0-52)
