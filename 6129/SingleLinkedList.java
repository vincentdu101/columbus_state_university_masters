import java.util.*;

class SingleLinkedList {

	private class Node {
		public Node link;
		public List<int> contents;
	}

	private Node head;
	private Node tail;

	public SingleLinkedList() {
	    head.contents = new ArrayList<int>();
	}

	public void insertAtHead(int content) {
	    head.contents.add(content);
	}

	public void insertAtTail(int content) {
		tail.contents.add(content);
	}

	public int removeAtHead() {
		return head.contents.remove(0);
	}

	public int empty() {
		head.contents.clear();
		tail.contents.clear();
		return head.contents.size() + tail.contents.size();
	}

}