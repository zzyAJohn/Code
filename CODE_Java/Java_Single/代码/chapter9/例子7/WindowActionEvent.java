package 代码.chapter9.例子7;

import java.awt.*;
import javax.swing.*;
public class WindowActionEvent extends JFrame { 
   JTextField inputText;
   JTextField inputText2;
   JTextArea textShow;
   JButton button;
   MyCommandListener listener;
   MyCommandListener listener2;
   public WindowActionEvent() {
      init();
      setVisible(true);
      setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
   }
   void init() {
      setLayout(new FlowLayout());
      inputText = new JTextField(10);
      inputText2 = new JTextField(10); 
      button = new JButton("确定");
      textShow = new JTextArea(9,30);
      add(inputText);
      add(inputText2);
      add(button);
      add(new JScrollPane(textShow));
   }
   void setMyCommandListener(MyCommandListener listener, MyCommandListener listener2) {
      this.listener = listener;
      this.listener2 = listener2;
      listener.setJTextField(inputText);
      listener2.setJTextField(inputText2);
      listener.setJTextArea(textShow);
      inputText.addActionListener(listener);
      inputText2.addActionListener(listener2);  //inputText���¼�Դ,listener�Ǽ�����
      button.addActionListener(listener);     //button���¼�Դ,listener�Ǽ�����
   }
   public void setMyCommandListener(PoliceListen police, PoliceListen police2) {
   }
}
