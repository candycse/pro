
class Acls {
	int i;

	public void Acls() {
		System.out.println("In class A");
	}
}

class Bcls extends Acls {

	@Override
	public void Acls() {
		super.i = 9;
		// super.Acls();
		System.out.println("In class B " + i);
	}

}

public class MethodOverriding17 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Bcls obj = new Bcls();
		obj.Acls();
	}

}
