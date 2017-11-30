public class Queue2 extends SingleLinkedList {

    public Queue2() {

    }

    public void enqueue(int value) {
        super.insertAtTail(value);
    }

    public int dequeue() {
        return super.removeAtHead();
    }

    public int empty() {
        return super.empty();
    }

}