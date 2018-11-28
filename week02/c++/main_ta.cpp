/*
 * main_ta.h
 *
 *  Created on: 	16 oct. 2017
 *  Modified on: 	13 Sept. 2018
 *  Author: Christian E. Portugal Z.
 */

#include "functions.h"
#include <cstdlib>
#include <iostream>
#include <fstream>

int main(){
	srand(time(NULL));
	std::ofstream file("data.csv"); // where to save your data
	std::ostream& out = file; //write to a file
	//std::ostream& out = std::cout; // printing to the console
	//It's important to save the first row as a header
	out<<"iter,nth,x,iter_converged,error,time_1,time_2,result"<<std::endl;
	int num_samples = 0 ;
	std::cout<<"How many samples do you want?:";
	std::cin >> num_samples;
	
	assert(num_samples > 0);
	for (int i = 1; i<=num_samples ;i++){
		//calling to your algorithm function
		out  << nthRootbyBisection(nth,x,0.000001,out) << std::endl;	
	}
	return 0;
}


