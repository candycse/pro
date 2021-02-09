class Hi extends Thread {
	public void run() { // Overriding a method of Thread class
		for (int i = 1; i <= 5; i++) {
			System.out.println("Hi");
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}

	}

}

class Hello extends Thread {
	public void run() { // Overriding a method of Thread class
		for (int i = 1; i <= 5; i++) {
			System.out.println("Hello");
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}

	}

}

public class Thread22 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Hi obj1 = new Hi();
		Hello obj2 = new Hello();

		obj1.start(); // You have to start the tread like this and start() will call run()
		try {
			Thread.sleep(10);
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		// We have added a lit bit delay so that obj2 will be in ready queue then cpu
		// scheduler will maintain thread properly
		obj2.start();
	}

}
