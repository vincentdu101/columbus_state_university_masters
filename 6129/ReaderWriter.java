import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.Timer;

public class ReaderWriter {

    private static int total = 0;
    private static int delay = 500;
    private static enum ReadState {
        WAIT, READY
    };
    private static boolean transactionCompleted = false;
    private static boolean substractionStarted = false;
    private static ReadState state;

    public static void main(String[] args) {
        state = ReadState.READY;
        System.out.println("Transaction sequence started for total, now " + total);
        processTaskAddition();

        while (transactionCompleted != true) {
            System.out.println(transactionCompleted);
            if (substractionStarted != true) {
                System.out.println("Transaction sequence not finished yet for addition, now " + total);
                processTaskSubtraction();
            }
        }
    }

    private static void handleStateEvent(int simulatedDelay, ActionListener taskPerformer) {
        if (state == ReadState.READY) {
            state = ReadState.WAIT;
            new Timer(simulatedDelay, taskPerformer).start();
        } else {
            System.out.println("Previous action event is still being handled and read.");
        }
    }

    public static void processTaskAddition() {
        handleStateEvent(delay, new ActionListener() {
            public void actionPerformed(ActionEvent evt) {
                total += 10;
                state = ReadState.READY;
                System.out.println("Addition sequence executed for total, now " + total);
            }
        });
    }

    public static void processTaskSubtraction() {
        handleStateEvent(delay, new ActionListener() {
            public void actionPerformed(ActionEvent evt) {
                substractionStarted = true;
                total -= 10;
                state = ReadState.READY;
                transactionCompleted = true;
                System.out.println("Subtraction sequence executed for total, now " + total);
            }
        });
    }

}