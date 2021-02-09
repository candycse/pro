class Student {
	private int roll;
	private String name;

	public int getRoll() {
		return roll;
	}

	public void setRoll(int roll) {
		this.roll = roll;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

}

public class Encapsulation18 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Student obj = new Student();
		obj.setRoll(3);
		System.out.println(obj.getRoll());
	}

}
