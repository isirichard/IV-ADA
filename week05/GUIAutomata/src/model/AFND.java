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
public class AFND implements IAutomata {
    private State state;
    
    @Override
    public void addState(State state){
        this.state = state;
    }
}
