#define SIZE 100
#include <stdio.h>

float mean_func(float[], int);
float median_func(float[], int);
float mode_func(float[], int);

float mean_func(float arr[], int n) {
    if (n <= 0) return 0.0f;
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

float median_func(float arr[], int n) {
    if (n <= 0) return 0.0f;
    float temp[SIZE];
    for (int i = 0; i < n; i++) temp[i] = arr[i];

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (temp[j] < temp[min_idx]) min_idx = j;
        }
        if (min_idx != i) {
            float t = temp[i];
            temp[i] = temp[min_idx];
            temp[min_idx] = t;
        }
    }

    if (n % 2 == 1) {
        return temp[n / 2];
    } else {
        return (temp[n/2 - 1] + temp[n/2]) / 2.0f;
    }
}

float mode_func(float arr[], int n) {
    if (n <= 0) return 0.0f;
    return 0.0f;
}

int main(void) {
    int n, i, choice;
    float array[SIZE], mean, median, mode;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > SIZE) {
        printf("Invalid number of elements\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        if (scanf("%f", &array[i]) != 1) {
            printf("Invalid input\n");
            return 1;
        }
    }

    do {
        printf("\nEnter the Choice\n\t1. Mean\n\t2. Median\n\t3. Mode\n\t4. Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice\n");
            continue;
        }

        switch (choice) {
        case 1:
            mean = mean_func(array, n);
            printf("The mean = %.2f\n", mean);
            break;
        case 2:
            median = median_func(array, n);
            printf("The median = %.2f\n", median);
            break;
        case 3:
            mode = mode_func(array, n);
            printf("The mode = %.2f\n", mode);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong Option\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
