package 代码.chapter9.例子7;

public class Example9_7 {
   public static void main(String args[]) {
      WindowActionEvent win=new WindowActionEvent();
      PoliceListen police = new PoliceListen();
      PoliceListen police2 = new PoliceListen(); //����������
      win.setMyCommandListener(police, police2); //������ϼ�����
      win.setBounds(100,100,460,360);
      win.setTitle("ActionEvent");
   }
}

