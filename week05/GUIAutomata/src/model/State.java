/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

/**
 *
 * @author christian
 */
public class State {
    private boolean isFinal;
    private final int label;
    
    public State(int _label){
        this.label = _label;
    }
    
    public boolean isFinal(){
        return isFinal;
    }        
     
}
