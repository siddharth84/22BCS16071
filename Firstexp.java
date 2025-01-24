import java.util.Scanner;

// Pascal case-Fistexp.java
// Camel case-firstexp.java

public class Firstexp {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String input = scanner.nextLine();

        input = input.toLowerCase(); 
        int vowels = 0, consonants = 0, digits = 0, specialChars = 0;

        for (int i=0;i<input.length();i++) {
            if (Character.isDigit(input.charAt(i))) {
                digits++;
            } else if (Character.isLetter(input.charAt(i))) {
                if (input.charAt(i) == 'a' || input.charAt(i) == 'e' || input.charAt(i) == 'i' || input.charAt(i) == 'o' || input.charAt(i) == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            } else {
                specialChars++;
            }
        }

        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);
        System.out.println("Digits: " + digits);
        System.out.println("Special Characters: " + specialChars);

        scanner.close();
    }
}
