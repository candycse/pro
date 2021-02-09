
public class Array12 {

	public static void main(String[] args) {

		int nums[] = new int[4];
		nums[0] = 8;
		nums[1] = 5;
		nums[2] = 18;
		nums[3] = 15;

		for (int i = 0; i < 3; i++)
			System.out.println(nums[i]);
		System.out.println();

		// 2D Array
		int d[][] = { { 1, 2, 3, 4 }, { 11, 12, 13, 14 }, { 21, 22, 23, 24 } };

		System.out.println(d[0][1]);
		System.out.println();

		for (int i = 0; i < d.length; i++) { // d.length will give the number of rows
			for (int j = 0; j < d[i].length; j++) {// d[i].length will give the length of executing row
				System.out.print(" " + d[i][j]);
			}
			System.out.println();
		}

	}

}
