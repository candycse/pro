
public class ForeachLoop13 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// Enhanced loop or Foreach Loop

		int a[] = { 1, 2, 3, 4 };

		for (int k : a) {
			System.out.println(k);
		}

		// For 2D array

		int d[][] = { { 1, 2, 3, 4 }, { 11, 12, 13, 14 }, { 21, 22, 23, 24 } };

		for (int k[] : d) {
			for (int l : k) {
				System.out.print(l + " ");
			}
			System.out.println();
		}

	}

}
