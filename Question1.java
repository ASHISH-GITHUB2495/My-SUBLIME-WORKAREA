

//program with abstract and concrete method 
abstract class MyClass {
	public void sleep() { //this is concerete class
		System.out.println("Concrete method is sleeping");
	}
	abstract public void awake(); //abstract method
}

class Code1 extends MyClass {

	public void awake() {
		System.out.println("Abstract is awake buddy");
	}
	public static void main(String args[]) {
		Code obj = new Code();
		obj.sleep();
		obj.awake();
	}
}









