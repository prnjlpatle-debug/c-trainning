//reverse string of any number or element  in java language
public class reversestring {
    public static void main(String[] args) {
        String str = "123456";
        String rev = "";
        for(int i = str.length() - 1; i >= 0; i--) {
            rev = rev + str.charAt(i);
        }
        System.out.println("Reversed String: " + rev);
    }
}