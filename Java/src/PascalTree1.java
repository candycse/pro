import java.util.Scanner;

public class PascalTree1 {

	public static void main(String[] args) {

		int n;
		Scanner scObj = new Scanner(System.in);
		System.out.println("Enter number of lines: ");
		n = scObj.nextInt();

		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i; j++) {
				System.out.print(j);
			}
			System.out.println();
		}

	}

}
