import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        //input an array from user
        int n;
        System.out.print("Enter array size:");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        int[] array = new int[n];
        System.out.print("Enter array elements:");
        for(int i=0; i<n; i++) {
            array[i]=sc.nextInt();
        }

        //call quickSort method to sort the array
        quickSort(array, 0, n-1);

        //print out the sorted array
        for(int i=0; i<n; i++) {
            System.out.print(array[i] + " ");
        }
    }

    public static void quickSort(int[] array, int start, int end) {

        if(end<=start)  //base case
            return;

        int pivot = partition(array, start, end);

        quickSort(array, start, pivot-1);
        quickSort(array, pivot+1, end);
    }

    public static int partition(int[] array, int start, int end) {

        int pivot = array[end];
        int i = start-1;

        for(int j=start; j<=end-1; j++) {

            if(array[j] < pivot) {

                i++;
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }

        i++;
        int temp = array[i];
        array[i] = array[end];
        array[end] = temp;

        return i;
    }
}