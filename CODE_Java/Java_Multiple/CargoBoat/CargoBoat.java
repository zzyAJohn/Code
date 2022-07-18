public class CargoBoat {
     int realContent;  //װ
     int maxContent;   //
     public void setMaxContent(int c) {
         maxContent = c;
     }
     public void loading(int m) throws DangerException {
       realContent += m;
       if(realContent>maxContent) {
          throw new DangerException(); 
       }
       System.out.println("目前装载了"+realContent+"吨货物");
     }
}
