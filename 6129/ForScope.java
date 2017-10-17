public class ForScope {

    public static void main(String[] args) {

        for (int i = 0; i < 5; i++) {
            System.out.println("Scope of for block i is visible here and its value is " + i);
        }

        System.out.println("Exception occurs because i is no longer in scope " + i);

    }

}