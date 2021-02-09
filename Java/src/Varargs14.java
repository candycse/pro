class Calcu {

	int add(int... n) {
		int sum = 0;
		for (int i : n) {
			sum = sum + i;
		}
		return sum;
	}
}

public class Varargs14 {
//Varargs Stands for Variable arguments 
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Calcu obj = new Calcu();
		System.out.println("Sum is: " + obj.add(4, 4, 10, 3, 43, 342, 21));
	}

}
