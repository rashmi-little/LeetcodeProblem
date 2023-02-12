public class Demo {
    public static void main(String[] args) {
        String string = "Hello123";
        String temp = "";
        int number = 0;
        int sum = 0;

        for (int i = 0; i < string.length(); i++) {
            number = Character.getNumericValue(string.charAt(i));
            if (number >= 0 && number <= 9)
                sum += number;
            else {
                temp += string.charAt(i);
            }
        }
        
        System.out.println(temp + sum);
    }
}