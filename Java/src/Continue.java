
public class Continue {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		for (int i = 1; i <= 10; i++) {
			if (i == 5) {
				System.out.println("Here 5 is Skipped");
				continue;
			}
			System.out.println("The value is " + i);
		}

	}

}
