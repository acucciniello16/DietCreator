if [ ! -f run.o ]; 
	then
		#File not found
		echo Compiling...
		g++ bulkingDiet.cpp cuttingDiet.cpp main.cpp -o run.o
		echo -----------Ready-------------
		./run.o
	else
		#File found
		./run.o
fi

