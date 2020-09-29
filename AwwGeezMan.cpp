//Author: Drew Deneke
#include "Morty.hpp"
#include<string.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int first, char** second) { 


    if (first != 4 and first != 5) {

        std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
            << std::endl;

        std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;

        std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

        return -1;
    }

   

    int start = atoi(second[1]), stop = atoi(second[2]), step = 1;//start stop are characters, transform to integers

    std::string dimension; //declare string w unknown size

    if (first == 4)  {// 4 cmd arg passed
       
        dimension = second[first - 1];//length of string

    }

    else {// 5 cmd arg passed
        
        step = atoi(second[3]);//step from char to int
       

        dimension = second[first - 1];//length of string
    }



    if (dimension == "Z286") {
        if (step == 1){
            Z286::Morty(start, stop);//function call for special case

        }
        else {

            Z286::Morty(start, stop, step);//w stepping
        }
    }
    else if (dimension == "C137"){ // normal case
    
        if (step == 1){


            C137::Morty(start, stop);// normal case

        }

        else {

            C137::Morty(start, stop, step);// w stepping
        }
    }


    else if (dimension != "C137" and dimension != "Z286") {// unknown dimension

        std::cout << "ERROR: Unknown dimension!!"<< std::endl;

        
    }

    return 0;

}