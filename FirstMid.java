
import java.util.Scanner;

public class FirstMid {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of rows and columns of the matrices:");
        int rows = scanner.nextInt();
        int cols = scanner.nextInt();

        int[][] matrix1 = new int[rows][cols];
        System.out.println("Enter the elements of Matrix 1:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix1[i][j] = scanner.nextInt();
            }
        }

        int[][] matrix2 = new int[rows][cols];
        System.out.println("Enter the elements of Matrix 2:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix2[i][j] = scanner.nextInt();
            }
        }

        int[][] sum = new int[rows][cols];
        System.out.println("Sum of the matrices:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum[i][j] = matrix1[i][j] + matrix2[i][j];
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }

        int[][] sub = new int[rows][cols];
        System.out.println("Substraction of the matrices:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sub[i][j] = matrix1[i][j] - matrix2[i][j];
                System.out.print(sub[i][j] + " ");
            }
            System.out.println();
        }

        int[][] mul = new int[rows][cols];
        System.out.println("Multiplication of the matrices:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                mul[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    mul[i][j] += matrix1[i][k] * matrix2[k][j];
                }
                System.out.print(mul[i][j] + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}
