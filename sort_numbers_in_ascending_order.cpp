/*
Create a function that takes an array of numbers and returns a new array, sorted in ascending order (smallest to biggest).

Sort numbers array in ascending order.
If the function's argument is null, an empty array, or undefined; return an empty array.
Return a new array of sorted numbers.

Ex:
sortNumsAscending([1, 2, 10, 50, 5]) ➞ [1, 2, 5, 10, 50]
sortNumsAscending([80, 29, 4, -95, -24, 85]) ➞ [-95, -24, 4, 29, 80, 85]
sortNumsAscending([]) ➞ []
*/


#include<stdio.h>
 
 
void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
 
 
int partition (int arr[], int low, int high){
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && arr[left] < pivot) left++;
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}

 
/* Hàm thực hiện giải thuật quick sort */
void quickSort(int arr[], int low, int high){
    if (low < high){
        /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
        int pi = partition(arr, low, high);
 
        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
 

/* Hàm xuất mảng */
void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
 
int main(){
    int arr[] = {80, 29, 4, -95, -24, 85};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

