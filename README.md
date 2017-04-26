# DietCreator
Command Line tool (Using GCC complier) to Calculate your diet break down using user input

## Install  
```sh
$ git clone https://github.com/acucciniello/DietCreator.git  
$ cd DietCreator  
$ g++ cuttingDiet.cpp bulkingDiet.cpp main.cpp -o diet
$ ./diet
```

## Usage:
Run the program:

`./diet`

Input Goal(Gain or Lose):

`What do you want to do to get to your goal physique? (Gain or Lose)`

`Gain`

Body Type:

`What is your body type? Please enter the full word ( Mesomorph, Ectomorph, Endomorph )`

`Mesomorph`

Body Weight:

`Please enter your body weight in pounds`

`170`

Weight Gain/Loss per Week:

`How many pounds are you trying to gain in lean muscle a week? (0.5, 1.0, 1.5, 2.0)?`

`2.0`

Output:
```sh
Your Total amount of Daily Calories is: 3550
Your Total amount of Daily Calories is (in protein): 816
Your Total amount of Daily Calories is (in fat): 573.75
Your Total amount of Daily Calories is (in carbohydrates): 2160.25
Your Total amount of Daily Grams of protein is: 204
Your Total amount of Daily Grams of fat is: 63.75
Your Total Amount of Daily Grams of carbohydrates is: 540.062
```


## Background and Further Information

All numbers are calculated using the following link's formulas:

1. [Cutting Diet](http://www.simplyshredded.com/layne-norton-the-most-effective-cutting-diet.html)
2. [Bulking Diet](http://sefnach.com/index/the_ultimate_bulking_guide_for_maximum_muscle_gains_written_by_chris_martinez/0-52)

## License

MIT
