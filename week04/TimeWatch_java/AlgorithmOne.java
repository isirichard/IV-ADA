

import java.io.*;

public class AlgorithmOne implements IAlgorithm{
    public boolean run() {
        // TODO you algorithmr
        int [] data = new int[100];
        for(int i = 0;i< 100;i++){
        	data[i] = (int)Math.random()*100;
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
}