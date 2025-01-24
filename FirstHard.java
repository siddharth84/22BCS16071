import java.util.Scanner;

public class FirstHard {
    class Account {
        private String name;
        private int accountNumber;
        private double balance;

        public Account(String name, int accountNumber, double balance) {
            this.name = name;
            this.accountNumber = accountNumber;
            this.balance = balance;
        }

        public String getName() {
            return name;
        }

        public int getAccountNumber() {
            return accountNumber;
        }

        public double getBalance() {
            return balance;
        }

        public void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                System.out.println("Deposit successful! Current Balance: " + balance);
            } else {
                System.out.println("Error: Deposit amount must be positive.");
            }
        }

        public void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                System.out.println("Withdrawal successful! Current Balance: " + balance);
            } else if (amount > balance) {
                System.out.println("Error: Insufficient funds. Current Balance: " + balance);
            } else {
                System.out.println("Error: Withdrawal amount must be positive.");
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Create Account:");
        System.out.print("Name: ");
        String name = scanner.nextLine();
        System.out.print("Account Number: ");
        int accountNumber = scanner.nextInt();
        System.out.print("Initial Balance: ");
        double initialBalance = scanner.nextDouble();

        Account account = new FirstHard().new Account(name, accountNumber, initialBalance);

        System.out.print("Deposit: ");
        double depositAmount = scanner.nextDouble();
        account.deposit(depositAmount);

        System.out.print("Withdraw: ");
        double withdrawAmount = scanner.nextDouble();
        account.withdraw(withdrawAmount);

        scanner.close();
    }
}