import java.lang.*;

public class TimeWatch {
    public static void main(String[] args) {
        long start_time = System.nanoTime();
        boolean state = new AlgorithmOne().run();
        if (state) System.out.println("All OK.");
        else System.out.println("Something went wrong!");
        long end_time = System.nanoTime();
        System.out.println("Time: "+ (end_time - start_time)/1000000+ " ms");
    }
}