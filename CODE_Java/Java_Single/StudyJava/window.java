package StudyJava;

import java.awt.*;

import javax.swing.*;

public class window {
    public static void main(String[] args) {
        JFrame window = new JFrame("AJohn窗口");
        Container con = window.getContentPane();
        con.setBackground(Color.BLUE);
        window.setBounds(60,100,960,540);
        window.setVisible(true);
        window.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
