class AClass {
	public void show() {
		System.out.println("In A Class");
	}
}

public class AnonymousClass21 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		AClass obj = new AClass() {
			public void show() {
				System.out.println("I am From Anonymous Class");
			}
		};
		obj.show();

	}

}
