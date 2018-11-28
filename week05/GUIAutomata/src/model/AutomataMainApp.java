/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import View.AutomataGUI;

/**
 *
 * @author christian
 */
public class AutomataMainApp {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        AutomataGUI gui = new AutomataGUI();
        gui.setTitle("GUI for Automata");
        gui.setVisible(true);
    }
    
}
