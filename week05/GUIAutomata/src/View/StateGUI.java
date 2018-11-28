/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;

import java.awt.Color;
import java.awt.Graphics;

/**
 *
 * @author christian
 */
public class StateGUI {
    private int x,y;
    private int radius;
    private String text;
    public StateGUI(int x,int y, int radius,String text){
        this.x = x;
        this.y = y;
        this.radius = radius;
        this.text = text;
    }
    
    public int getX(){
        return x;
    }
    
    public int getY(){
        return y;
    }
    
    public int getRadius(){
        return radius;
    }
    
    public String getText(){
        return text;
    }
    
    public void draw(Graphics g){
        g.setColor(Color.blue);
        g.drawOval(x, y, radius, radius);
        g.drawString(text, x+radius/3, y+radius/2);
    }
    
    
}
