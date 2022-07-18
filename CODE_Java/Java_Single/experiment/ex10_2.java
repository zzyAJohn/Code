package experiment;

import javax.swing.*;
import java.awt.*;

public class ex10_2 {
    public static void main(String args[]) {
        WindowActionEvent win=new WindowActionEvent();
        win.setBounds(100,100,460,360);
        win.setTitle("处理ActionEvent事件");
    }
}

class WindowActionEvent extends JFrame {
    JTextField inputText;
    JTextArea textShow;
    JButton button;

    public WindowActionEvent() {
        init();
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    void init() {
        setLayout(new FlowLayout());
        inputText = new JTextField(10);
        button = new JButton("确定");
        textShow = new JTextArea(9,30);
        add(inputText);
        add(button);
        add(new JScrollPane(textShow));
    }
}
