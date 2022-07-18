package experiment;

interface ComputerWeight
{
   public double computeWeight();
}

class Television implements ComputerWeight{   
	public double computeWeight() {
	return 3.5;//实现computeWeight()方法。
}
}
class Computer implements ComputerWeight{
	public double computeWeight(){
	return 2.67;//实现computeWeight()方法。
}
}  
class WashMachine implements ComputerWeight
{  public double computeWeight(){
	return 13.8;//实现computeWeight()方法。
}
}
class Car
{  ComputerWeight[] goods;
   double totalWeights=0;
   Car(ComputerWeight[] goods)
   {
      this.goods=goods;
   }
   public double getTotalWeights()
   {
      totalWeights=0;
     for(int i=0;i<goods.length;i++){
    	 totalWeights+=goods[i].computeWeight();//计算totalWeights
     }
      return totalWeights;
   }    
}
public class ex7_2
{
   public static void main(String args[])
   {  ComputerWeight[] goodsOne=new ComputerWeight[50],
                     goodsTwo=new ComputerWeight[22] ; 
      for(int i=0;i<goodsOne.length;i++)
       {   if(i%3==0)
             goodsOne[i]=new Television();
           else if(i%3==1)
             goodsOne[i]=new Computer();
           else if(i%3==2)
             goodsOne[i]=new WashMachine();
       } 
     for(int i=0;i<goodsTwo.length;i++)
       {   if(i%3==0)
             goodsTwo[i]=new Television();
           else if(i%3==1)
             goodsTwo[i]=new Computer();
           else if(i%3==2)
             goodsTwo[i]=new WashMachine();
       } 
     Car  da=new Car(goodsOne);
     System.out.println("大货车装载的货物重量:"+da.getTotalWeights());
     Car  xi=new Car(goodsTwo);
     System.out.println("小货车装载的货物重量:"+xi.getTotalWeights());
   }
}
