package 代码.chapter9.例子2;

import javax.swing.*;
import java.awt.event.InputEvent;
import java.awt.event.KeyEvent;
public class WindowMenu extends JFrame {
   JMenuBar menubar;
    JMenu menu,subMenu;
    JMenuItem  itemLiterature,itemCooking;
    public WindowMenu(){} 
    public WindowMenu(String s,int x,int y,int w,int h) {
       init(s);
       setLocation(x,y);
       setSize(w,h);
       setVisible(true);
       setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE); 
    }
    void init(String s){
       setTitle(s);             //���ô��ڵı���   
       menubar=new JMenuBar(); 
       menu=new JMenu("�˵�"); 
       subMenu=new JMenu("��������");  
       itemLiterature=new JMenuItem("��ѧ����",new ImageIcon("a.gif"));
       itemCooking=new JMenuItem("��⿻���",new ImageIcon("b.gif"));
       itemLiterature.setAccelerator(KeyStroke.getKeyStroke('A')); 
       itemCooking.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_S,InputEvent.CTRL_MASK)); 
       menu.add(itemLiterature); 
       menu.addSeparator();   //�ڲ˵�֮�����ӷָ���
       menu.add(itemCooking); 
       menu.add(subMenu);  
       subMenu.add(new JMenuItem("����",new ImageIcon("c.gif"))); 
       subMenu.add(new JMenuItem("����",new ImageIcon("d.gif")));
       menubar.add(menu); 
       setJMenuBar(menubar);
    } 
}
