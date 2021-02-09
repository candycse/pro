public class Pascal2 {

	public static void main(String[] args) {
		/*
		 * String n; Scanner nSc = new Scanner(System.in);
		 * System.out.println("Enter number of rows "); n = nSc.nextLine();
		 */
		for (char i = 'A'; i <= 'E'; i++) {
			for (char j = 'A'; j <= i; j++) {
				System.out.print(j);
			}
			System.out.println();
		}

	}

}
