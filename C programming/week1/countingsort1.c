int* countingSort(int arr_count, int* arr, int* result_count) {
    
    // Step 1: Create array of size 100 and set all values to 0
    int* rep = calloc(100, sizeof(int)); // calloc sets all values to 0

    // Step 2: Go through the input array and count each number
    for (int i = 0; i < arr_count; i++) {
        int number = arr[i];
        rep[number]++;  // Increase the count of that number
    }

    // Step 3: Set result_count to 100, because we are returning 100 numbers
    *result_count = 100;

    // Step 4: Return the frequency array
    return rep;
}
