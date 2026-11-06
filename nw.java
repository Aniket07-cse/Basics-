// Save this file exactly as "Calculator.java"
import java.util.Scanner; // Import the Scanner utility to read user input

public class nw {
    public static void main(String[] args) {
        // Create a Scanner object
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your first number: ");
        double num1 = scanner.nextDouble();

        System.out.print("Enter your second number: ");
        double num2 = scanner.nextDouble();

        // Calculate the sum
        double sum = num1 + num2;

        // Display the result
        System.out.println("The total sum is: " + sum);

        // Always close the scanner when you are done to free up resources
        scanner.close();
    }
}
