void selectionSort(vector<int>& arr, int n)
{   
    int l = arr.size(), mini;
    for(int i = 0; i < l; i++) {
        mini = i;
        for(int j = i + 1; j < l; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap arr[i] and arr[mini]
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}