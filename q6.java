class Geeks {
    static void printTable(int n) {
        int multiplier = 10;
        while (multiplier > 0) {
            System.out.print(n * multiplier);
            if (multiplier > 1) {
                System.out.print(" ");
            }
            multiplier--;
        }
        System.out.println(); // Move to the next line after printing the table
    }
}