
#include "IAlgorithm.h"
#include <ctime>
#include <cstdlib>


class AlgorithmOne :public IAlgorithm{
    public:

        AlgorithmOne(){
            srand(time(NULL));
        }

        ~AlgorithmOne(){

        }

        
        bool run() {
            // TODO you algorithm
            int* data = new int[100];
            for(int i=0; i<100; i++){
            	data[i] = rand()%100;
            }


            // explosive bubble sort
            for(int i=0; i<99; i++){
            	for(int j=1; j<100; j++){
            		if(data[j-1]>data[j]){
            			int temp = data[j-1];
            			data[j-1] = data[j];
            			data[j] = temp;
            		}
            	}
            }

            //how to validate??
            for(int i=1;i<100; i++){
            	if(data[i-1]>data[i]) return false;
            }
            return true;
        }
};