import java.util.Scanner;

public class Salary {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double DA, HRA, Gross;
		System.out.println("Enter Basic Salary: ");
		Scanner sc = new Scanner(System.in);
		int basic = sc.nextInt();
		System.out.println(basic);

		if (basic <= 15000) {
			DA = 0.9 * basic;
			HRA = 0.1 * basic;
		} else {
			DA = 0.98 * basic;
			HRA = 500;
		}
		Gross = basic + DA + HRA;
		System.out.println("Gross Salary is: " + Gross);
	}

}
