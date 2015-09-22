if [ ! -f run.o ]; 
	then
		#File not found
		echo Compiling...
		g++ bulkingDiet.cpp cuttingDiet.cpp main.cpp -o run.o
		echo ---Ready---
	else
		#File found	
		echo File found...
		echo ---Ready---
fi
./run.o

