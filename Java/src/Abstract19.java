abstract class Human { // Human Class is called Abstract Class

	public abstract void eat();// If you do not want to define method then you can make as abstract

	public void walk() {
	}

}

class Man extends Human {// Man class is called Concrete Class
	public void eat() { // we are defining here abstract method

	}
}

public class Abstract19 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		// Human obj = new Human(); YOu can not create object of abstract class.
		Human obj = new Man();
	}

}
