public class DecimalToOctal {
    public static void main(String[] args) {
        int num = 10;
        String Octal = "";

        while (num > 0) {
            int rem = num % 8;     
            Octal = rem + Octal; 
            num = num / 8;         
        }

        System.out.println("Octal = " + Octal);
    }
}
