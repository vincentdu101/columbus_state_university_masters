import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.List;

import javax.swing.Timer;

public class ReaderWriter {

    private static enum ReadState {
        WAIT, READY
    };
    private static int delay = 500;
    private static boolean transactionCompleted = false;
    private static boolean substractionStarted = false;
    private static ReadState state;
    private static List<String> buffer;

    private static Timer additionTimer;
    private static Timer subtractionTimer;

    private static String value = "'This is the value entered'";

    public static void main(String[] args) {
        state = ReadState.READY;
        buffer = new ArrayList<String>();
        System.out.println("Transaction sequence started for buffer");
        processTaskAddition();

        while (transactionCompleted != true) {
            try {
                Thread.sleep(500);
                if (substractionStarted != true) {
                    processTaskSubtraction();
                }
            } catch(InterruptedException ex) {
                Thread.currentThread().interrupt();
            }
        }
    }

    public static void processTaskAddition() {
        System.out.println("Addition sequence started for buffer, now trying to add to buffer value " + value);
        state = ReadState.WAIT;
        additionTimer = new Timer(delay + 2000, new ActionListener() {
            public void actionPerformed(ActionEvent evt) {
                buffer.add(value);
                state = ReadState.READY;
                System.out.println("Addition sequence completed, buffer ready to be released");
                System.out.println("buffer has " + buffer.size() + " item");
                additionTimer.stop();
            }
        });
        additionTimer.start();
    }

    public static void processTaskSubtraction() {
        if (state == ReadState.READY) {
            substractionStarted = true;
            System.out.println("Subtraction sequence starting for buffer, attempting to remove " + buffer.get(0));
            state = ReadState.WAIT;
            subtractionTimer = new Timer(delay, new ActionListener() {
                public void actionPerformed(ActionEvent evt) {
                    state = ReadState.READY;
                    buffer.remove(value);
                    transactionCompleted = true;
                    System.out.println("Subtraction sequence completed, buffer ready to be released.");
                    System.out.println("buffer has " + buffer.size() + " items");
                    System.out.println("Transaction is completed.");
                    subtractionTimer.stop();
                    System.exit(0);
                }
            });
            subtractionTimer.start();
        } else {
            System.out.println("Previous action event is still being handled and read. Not accepting new subtraction task.");
        }
    }

}