#include "AlgorithmOne.h"
#include <iostream>

int main() {
  	std::clock_t start = std::clock();
	auto t_start = std::chrono::high_resolution_clock::now();
    bool state = (new AlgorithmOne())->run();
    if (state) std::cout << "All OK.\n";
    else std::cout << "Something went wrong!\n";
    std::clock_t end = std::clock();
	auto t_end = std::chrono::high_resolution_clock::now();
   std::cout<< "Time: " << 1000.0*(end - start)/CLOCKS_PER_SEC<< " -- " 
   << std::chrono::duration<double, std::milli>(t_end-t_start).count() << " ms "<< std::endl;
    return 0;
 }