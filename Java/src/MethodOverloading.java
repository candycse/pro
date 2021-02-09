class Casio {
	public void add(int i, int j) {
		System.out.println(i + j);
	}

	public void add(double i, double j) {
		System.out.println(i + j);
	}

	public void add(int i, int j, int k) {
		System.out.println(i + j + k);
	}
}

public class MethodOverloading {
	// Multiple methods with same name but different parameter is called method
	// overloading

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Casio obj = new Casio();
		obj.add(4, 6);
		obj.add(4, 5.5);
		obj.add(3, 4, 7);
	}

}
