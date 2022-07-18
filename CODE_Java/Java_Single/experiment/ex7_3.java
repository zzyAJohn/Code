package experiment;

interface Calculate{
	abstract void CalculateVolume();
}
class Circle implements Calculate {
	double r=3.0;
	public void CalculateVolume() {
		System.out.println(3.14*r*r*r*4/3);
	}

}
class Rectangle implements Calculate{
	int length=5,width=4,height=6;

	public void CalculateVolume() {
		System.out.println(width*length*height);
	}
}
public class ex7_3 {
	public static void main(String[] args) {
		Calculate c;
		c=new Circle();
		c.CalculateVolume();
		c=new Rectangle();
		c.CalculateVolume();
	}

}
