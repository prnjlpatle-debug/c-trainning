

    import java.util.*;

public class Main {
    public static void main(String[] args) {
        String str = "1999";
        int freq[] = new int[1999];

        for (int i = 0; i < str.length(); i++) {
            freq[str.charAt(i)]++;
        }

        for (int i = 0; i < str.length(); i++) {
            if (freq[str.charAt(i)] != 0) {
                System.out.println(str.charAt(i) + " = " + freq[str.charAt(i)]);
                freq[str.charAt(i)] = 0;
            }
        }
    }
}
