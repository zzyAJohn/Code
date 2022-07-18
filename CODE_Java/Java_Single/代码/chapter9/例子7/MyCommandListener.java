package 代码.chapter9.例子7;

import javax.swing.*;
import java.awt.event.*;
interface MyCommandListener extends ActionListener {
     public void setJTextField(JTextField text);
     public void setJTextArea(JTextArea area); 
     
}