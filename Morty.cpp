//Author: Drew Deneke
#include "Morty.hpp"

namespace C137{
	
	void Morty(int start, int stop, int step){


		std::cout << "Morty C137 says:" << std::endl;
		

		for (int i = start; i <= stop; i = i + step){
			std::cout << i << ": ";

			if (i % 3 == 0) {
				if (i % 5 == 0) {
					
					std::cout << "Aww Geez Man";//mult 15
				}
				else//mult 3
					std::cout << "Aww";
			}
			else if (i % 5 == 0){ //mult 5
			
				std::cout << "Geez";
			}
			std::cout << std::endl;
		}
	}

	
	
	void Morty(int start, int stop)	{// function to loop from start to stop , stepping by 1


		std::cout << "Morty C137 says:" << std::endl;

		
		for (int i = start; i <= stop; i++){


			std::cout << i << ": ";

			if (i % 3 == 0) {
				if (i % 5 == 0) {
					
					std::cout << "Aww Geez Man";//mult 15
				}

				else
					std::cout << "Aww";
			}

			else if (i % 5 == 0) {//mult 5
				std::cout << "Geez";
			}
			std::cout << std::endl;
		}
	}
}


namespace Z286{ // function to loop from start to stop, stepping by 1
	
	void Morty(int start, int stop, int step){


		std::cout << "Morty Z286 says:" << std::endl;

		// loop from start to stop, stepping in increments of 1

		for (int i = start; i <= stop; i = i + step){

			std::cout << i << ": ";

			if (i % 3 == 0) {

				if (i % 5 == 0) {//mult 15

					
					std::cout << "naM zeeG wwA";
				}

				else//mult 3
					std::cout << "wwA";
			}
			else if (i % 5 == 0) {//mult 5

				std::cout << "zeeG";
			}

			std::cout << std::endl;
		}
	}

	// function to loop from start to stop in steps of 1
	void Morty(int start, int stop)
	{
		std::cout << "Person Z286 says:" << std::endl;
		
		for (int i = start; i <= stop; i++)
		{
			std::cout << i << ": ";
			if (i % 3 == 0) 
			{
				if (i % 5 == 0)// mult 15
				{
					
					std::cout << "naM zeeG wwA";
				}
				else//mult 3
					std::cout << "wwA";
			}
			else if (i % 5 == 0) //mult 5
			{
				std::cout << "zeeG";
			}
			std::cout << std::endl;
		}
	}
}