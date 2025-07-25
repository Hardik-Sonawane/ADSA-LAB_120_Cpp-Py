#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid, k = left;
    int L[n1], R[n2];
    

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    
    
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        arr[k++] = (L[i] == 0 || (R[j] != 0 && L[i] > R[j])) ? R[j++] : L[i++];
    }
    
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void moveZeros(int arr[], int l, int r) {
    if (l >= r) return;
    int m = l + (r - l) / 2;
    moveZeros(arr, l, m);
    moveZeros(arr, m + 1, r);
    merge(arr, l, m, r);
}

int main() {
    int n; 
    cout << "Array size: "; 
    cin >> n;
    
    int arr[n]; 
    cout << "Elements: "; 
    for (int i = 0; i < n; cin >> arr[i++]);
    
    moveZeros(arr, 0, n - 1);
    
    cout << "Result: ";
    for (int i = 0; i < n; cout << arr[i++] << " ");
}