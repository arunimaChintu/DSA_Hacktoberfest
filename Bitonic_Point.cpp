//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	   int maxElement = arr[0];  // Initialize with the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
	}
};
