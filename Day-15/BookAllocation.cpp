
bool isPossibleSolution(std::vector<int>& arr, int n, int m, int mid) {
    int no_of_students = 1;  // Initialize to 1 as the first student will start reading from the first book
    int present = 0;

    for (int i = 0; i < n; i++) {
        if (present + arr[i] > mid) {
            no_of_students++;
            present = 0;

            if (no_of_students > m || arr[i] > mid) {
                return false;
            }
        }
        present += arr[i];
    }

    return true;
}

int findPages(std::vector<int>& arr, int n, int m) {
     if (n < m) {
        return -1;
    }
    int s = 0;
    int ans = -1;
    int e = 0;

    for (int i = 0; i < n; i++) {
        e += arr[i];
    }

    while (s <= e) {
        int mid = (s + e) / 2;

        if (isPossibleSolution(arr, n, m, mid)) {
            e = mid - 1;
            ans = mid;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}
