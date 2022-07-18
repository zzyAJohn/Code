package experiment;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ex10_3 {
    public static void main(String args[]) {
        WindowActionEvent win=new WindowActionEvent();
        PoliceListen police = new PoliceListen(); //创建监视器
        win.setMyCommandListener(police); //窗口组合监视器
        win.setBounds(100,100,460,360);
        win.setTitle("处理ActionEvent事件");
    }
}

class WindowActionEvent extends JFrame {
    JTextField inputText;
    JTextArea textShow;
    JButton button;
    MyCommandListener listener;
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
    void setMyCommandListener(MyCommandListener listener) {
        this.listener = listener;
        listener.setJTextField(inputText);
        listener.setJTextArea(textShow);
        inputText.addActionListener(listener);  //inputText是事件源,listener是监视器
        button.addActionListener(listener);     //button是事件源,listener是监视器
    }
}

interface MyCommandListener extends ActionListener {
    public void setJTextField(JTextField text);
    public void setJTextArea(JTextArea area);

}


class PoliceListen implements MyCommandListener {
    JTextField textInput;
    JTextArea textShow;
    public void setJTextField(JTextField text) {
        textInput = text;
    }
    public void setJTextArea(JTextArea area) {
        textShow = area;
    }
    public void actionPerformed(ActionEvent e) {
        String str=textInput.getText();
        textShow.append(str+"\n");

    }
}
