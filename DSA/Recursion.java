//x or y diya h xki power n ko calculate krna h with the help of recursion
import java.util.Scanner;

public class Recursion {
    static int power(int x, int n) {
        if (n == 0) {
            return 1;  
        }
        return x * power(x, n - 1);  
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter value of x: ");
        int x = sc.nextInt();
        System.out.print("Enter value of n: ");
        int n = sc.nextInt();
        int result = power(x, n);
        System.out.println("Result: " + result);
    }
}