
class A {
	public A() {
		System.out.println("In class A");
	}

	public A(int i) {
		System.out.println("In A int");
	}
}

class B extends A {
	public B() {

		System.out.println("In class B");
	}

	public B(int i) {
		super(i);
		System.out.println("In B int");
	}
}

public class Super16 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		B obj1 = new B();

	}

}
