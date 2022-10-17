package Codeforces_827;

// Correct
import java.util.*;

public class E {

    public static void solve(int[] steps, int[] questions) {
        TreeMap<Long, Long> mp = new TreeMap<Long, Long>();
        long mx = 0;
        long sum = 0;
        mp.put(mx, sum);
        for (int i : steps) {
            mx = Math.max(mx, i);
            sum += i;
            mp.put(mx, sum);
        }
        for (int i : questions) {
            System.out.print(mp.floorEntry((long) i).getValue());
            System.out.print(" ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        for (int i = 0; i < t; i++) {
            int n = s.nextInt();
            int q = s.nextInt();
            int[] steps = new int[n];
            int[] questions = new int[q];
            for (int j = 0; j < n; j++) {
                steps[j] = s.nextInt();
            }
            for (int j = 0; j < q; j++) {
                questions[j] = s.nextInt();
            }
            solve(steps, questions);
        }
        s.close();
    }
}