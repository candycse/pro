class MyCalc { // Super/Parent/Base Class
	public int add(int i, int j) {
		return i + j;
	}
}

class AdvCalc extends MyCalc { // Sub/Child/Derived Class
	public int sub(int i, int j) {
		return i - j;
	}
}

class VeryAdvCalc extends AdvCalc {
	public int multi(int i, int j) {
		return i * j;
	}
}

public class Inheritance15 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		// MyCalc c1 = new MyCalc();
		// AdvCalc c2 = new AdvCalc();
		VeryAdvCalc c3 = new VeryAdvCalc();
		System.out.println(c3.add(3, 5));
		System.out.println(c3.sub(3, 5));
		System.out.println(c3.multi(3, 5));
	}

}
