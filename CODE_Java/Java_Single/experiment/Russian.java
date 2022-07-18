//输出俄文字母表。编写一个java应用程序，该程序在命令行窗口输出俄文字母表。
package experiment;
public class Russian {
    public static void main (String args[ ]) {
      int startPosition=0,endPosition=0;
      char cStart='а',cEnd='я';
      startPosition=(int)cStart;   // cStart做int类型转换运算，并将结果赋值给startPosition
      endPosition=(int)cEnd;   // cEnd做int类型转换运算，并将结果赋值给endPosition
      System.out.println("俄文字母共有:");
      System.out.println(endPosition-startPosition+1+"个");
      for(int i=startPosition;i<=endPosition;i++){
          char c='\0';
          c=(char)i;  // i做char类型转换运算，并将结果赋值给c
          System.out.print(" "+c);
       }       
   }
}
