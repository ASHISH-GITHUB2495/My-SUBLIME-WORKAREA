
interface Speed {                    // this is interface class
	public void displaySpeed();
}

class Moter {                        //this is parent class

	public void displayMoter() {
		System.out.println("Moter is not running");
	}
}

class Bike extends Moter implements Speed {      //here we extends and implements

	public void displaySpeed() {
		System.out.println("Speed will be only seen while driving");
	}

	void status() {
		System.out.println("Bike is not running");
	}


}



class Code {
	public static void main(String[] args) {
       Bike b = new Bike();
       b.status();
       b.displayMoter();
       b.displaySpeed();
	}
}