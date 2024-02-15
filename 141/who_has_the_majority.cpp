class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            if (arr[i] != x && arr[i] != y) {
                continue;
            } else {
                if (mpp.find(arr[i]) != mpp.end()) {
                    mpp[arr[i]]++;
                } else {
                    mpp[arr[i]] = 1;
                }
            }
        }

        if (mpp[x] > mpp[y]) {
            return x;
        } 
        else if (mpp[x] < mpp[y]) {
            return y;
        } 
        else if (x < y) {
            return x;
        } 
        else {
            return y;
        }
    }
};
