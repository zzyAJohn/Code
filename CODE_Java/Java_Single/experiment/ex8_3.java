package experiment;

public class ex8_3 {
    public static void main(String[] args) {
        int[] a = {1,2,3};
        for(int i=0;i<5;i++) {
			try {
				System.out.println(a[i]);
			}
			catch (ArrayIndexOutOfBoundsException e) {
				System.out.println(e);
		    }
	    }
    }
}
