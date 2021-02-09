interface Writer {
	void write(); // By default here "public abstract void write" bcz its a interface.

}

class Pen implements Writer {
	public void write() {
		System.out.println("I am a Pen Class");
	}
}

class Pencil implements Writer {
	public void write() {
		System.out.println("I am a Pencil Class");
	}
}

class Kit {
	public void doSomething(Writer p) {
		p.write();
	}
}

public class Interface20 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Kit k = new Kit();
		Writer p = new Pen(); // We can not create any object of Interface here I have created reference of
								// interface that is Writer.

		Writer pc = new Pencil();

		k.doSomething(p);

	}

}
