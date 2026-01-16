
//#include <stdio.h>
//irem kurna
//2420161073
//[
//](https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=4qguekny2j)
void bubbleSort(int arr[], int n);
int binarySearch(int arr[], int n, int target);

int main() {
    int arr[] = {7, 2, 9, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    bubbleSort(arr, n);

    printf("Siralanmis dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nAranacak sayiyi giriniz: ");
    scanf("%d", &target);

   
    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Sayi dizide bulundu. Indeks: %d\n", result);
    } else {
        printf("Sayi dizide bulunamadi.\n");
    }

    return 0;
}
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}