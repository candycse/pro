class Emp {
	int eid;
	int salary;
	static String ceo; // I don't need object . This will same for all the objects.

	/*
	 * void set(int eid, int sal, String ceo) { this.eid = eid; this.salary = sal;
	 * this.ceo = ceo; }
	 */

	void show() {
		System.out.println("Eid: " + eid + "\nSal: " + salary + "\nCEO: " + ceo + "\n");

	}

	static { // Will be created when loads Class and we know that class loads only once
		ceo = "Rahul Kumar";
	}

}

public class Static10 {
	static int i = 9; // You have to make static if you want to access a variable from static
						// method(psvm)

	public static void main(String[] args) {
		i = 9;
		// TODO Auto-generated method stub
		Emp candy = new Emp();
		candy.eid = 1;
		candy.salary = 2000;

		Emp chandan = new Emp();
		chandan.eid = 2;
		chandan.salary = 4000;

		chandan.show();
		candy.show();

		// Emp.ceo = "Carry";

		/*
		 * System.out.println("Eid: " + candy.eid + "\nSal: " + candy.salary + "\nCEO: "
		 * + candy.ceo + "\n"); System.out.println("Eid: " + chandan.eid + "\nSal: " +
		 * chandan.salary + "\nCEO: " + chandan.ceo);
		 */
	}

}
