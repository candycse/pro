
class Outer {
	int a; // Member or Instance variable

	public void show() { // Member method

	}

	class Inner { // Member class

		public void display() {
			System.out.println("Inside Inner Class");
		}

		/*
		 * static class StaticInner{ System.out.println("Inside Static Inner Class");
		 * 
		 * }
		 */

	}
}

public class InnerClass11 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Outer objOuter = new Outer();
		objOuter.show();

		Outer.Inner objInner = objOuter.new Inner();
		objInner.display();

		/*
		 * Outer.Inner objInner = new Inner(); objInner.display();
		 */
	}

}
