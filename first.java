
import java.util.Scanner;

public class first {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of employees: ");
        int numberOfEmployees = scanner.nextInt();
        scanner.nextLine();

        String[] names = new String[numberOfEmployees];
        int[] salary = new int[numberOfEmployees];
        String[] departments = new String[numberOfEmployees];

        for (int i = 0; i < numberOfEmployees; i++) {
            System.out.println("Enter details for Employee " + (i + 1) + ":");

            System.out.print("Name: ");
            names[i] = scanner.nextLine();

            System.out.print("Salary: ");
            salary[i] = scanner.nextInt();
            scanner.nextLine();

            System.out.print("Department: ");
            departments[i] = scanner.nextLine();
        }

        System.out.println("\nEmployee Details:");
        for (int i = 0; i < numberOfEmployees; i++) {
            System.out.println("Employee " + (i + 1) + ":");
            System.out.println("  Name: " + names[i]);
            System.out.println("  Salary: " + salary[i]);
            System.out.println("  Department: " + departments[i]);
            System.out.println("\n");
        }

        scanner.close();
    }
}


