/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller;

import model.AFD;
import model.AFND;
import model.IAutomata;
import model.State;

/**
 *
 * @author christian
 */
public class IAutomataController {

    private IAutomata automata;

    public enum TYPE {
        AFD, AFND
    };

    public void create(TYPE type) {
        if (type == TYPE.AFD) {
            automata = new AFD();
        } else {
            automata = new AFND();
        }
    }

    public void addState(int _state){
        //Some operations before make an addState
        //All parameters comes from the GUI
        State state = new State(_state);
        automata.addState(state);
    }
}
