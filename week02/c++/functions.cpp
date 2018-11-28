
/*
 * numerical_analysis.cpp
 *
 *  Created on: 16 oct. 2017
 *      Author: christian
 */
#include "functions.h"



double nthRootbyBisection(int nth, double x, double error, std::ostream& out, int iteration){
	std::clock_t start = std::clock(); // first way
	auto t_start = std::chrono::high_resolution_clock::now(); // second way
	/*******************************************************/

	// your algorithm here


	/*******************************************************/
	std::clock_t end = std::clock();// first way
	auto t_end = std::chrono::high_resolution_clock::now();// second way
	//Writing results
	out << 1000.0*(end - start)/CLOCKS_PER_SEC<< "," 
	<< std::chrono::duration<double, std::milli>(t_end-t_start).count()<<",";
	return c;
}


