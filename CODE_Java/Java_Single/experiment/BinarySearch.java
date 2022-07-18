//编程使用Arrays类的静态方法purbic void sort(double a[],int start,int end)对数组进行排序，然后编程使用折半法判断一个数是否在这个数组中。
package experiment;
import java.util.*;

public class BinarySearch {

	public static void main(String[] args) {

		int a[] = new int[10];
		try (Scanner reader = new Scanner(System.in)) {
			System.out.println("请输入数组元素:");
			for (int i = 0; i < 10; i++)
				a[i] = reader.nextInt();

			Arrays.sort(a, 0, 10);

			System.out.println("请输入要查找的数:");

			while (true) {
				int target = reader.nextInt();
				int l = 0, r = 9, mid = 0;
				boolean flag = false;
				while (l <= r) {
					mid = (l + r) / 2;
					if (a[mid] == target) {
						flag = true;
						break;
					} else if (a[mid] > target)
						r = mid - 1;
					else
						l = mid + 1;
				}

				if (flag)
					System.out.println(target + "存在");
				else
					System.out.println(target + "不存在");
			}
		}
	}

}
