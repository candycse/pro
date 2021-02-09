
class Calc {
	int num1, num2, result;

	public void perform() {
		result = num1 + num2;

	}

}

public class Calculator {

	public static void main(String args[]) {

		Calc objRef; // Reference
		objRef = new Calc(); // This will return reference of obj type Calc
		objRef.num1 = 4;
		objRef.num2 = 6;
		objRef.perform();
		System.out.println("Sum is " + objRef.result);
	}

}

class ImpTerms {

	// 1) Objects knows something and does something
	// 2) Class is a blueprint of objects
	//
}