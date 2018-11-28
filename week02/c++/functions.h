/*
 * numerical_analysis.h
 *
 *  Created on: 16 oct. 2017
 *      Author: christian
 */

#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <cmath>
#include <cassert>
#include <iostream>
#include <ctime>

// Here you declare all the necesary functions
double nthRootbyBisection(int nth, double x, double error, std::ostream& out, int iteration=100);



#endif /* FUNCTIONS_H_ */
