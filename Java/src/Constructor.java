class Calca {
	int num1, num2, result;

	public Calca() {
		num1 = 4;
		num2 = 5;
		System.out.println("IN CONSTRUCTOR");
	}

	public Calca(int n) {
		System.out.println("IN " + n + " CONSTRUCTOR");

	}

	public Calca(double d, int n) {
		System.out.println("IN " + d + " CONSTRUCTOR");

	}
}

public class Constructor {

	public static void main(String[] args) {

		// Calc obj = new Calc(2.3, 5);
		// System.out.println(obj.num2);
	}

}
