public class Stack2 extends SingleLinkedList {

	public Stack2() {

	}

	public void push(int value) {
		super.insertAtHead(value);
	}

	public int pop() {
		return super.removeAtHead();
	}

	public int empty() {
		return super.empty();
	}

}