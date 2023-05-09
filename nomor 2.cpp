#include <iostream>

int countFrequency(int arr[], int n, int x) {
    int frequency = 0;
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            frequency++;
        }
    }
    return frequency;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    std::cout << "masukkan angka: ";
    std::cin >> x;
    int frequency = countFrequency(arr, n, x);
    if(frequency > 0) {
        std::cout << "frequency dari angka" << x << " didalam array adalah : " << frequency << std::endl;
    } else {
        std::cout << x << " angka tidak ditemukan." << std::endl;
    }
    return 0;
}