/// The question asks you to calculate the total penalty Chef must pay for late book returns in a library, based on the following rules:

Rules:
Chef borrowed N books from the library.
Each book i was returned i days late, and was returned on a day A[i].
The penalty for each book is equal to the number of days it was overdue.
If multiple books are returned on the same day, only the maximum penalty among those books is counted.
You need to compute the total penalty Chef must pay based on these rules for each test case.

Input Format:
The first line of input contains an integer T, the number of test cases.
For each test case:
The first line contains an integer N, the number of books Chef borrowed.
The second line contains N space-separated integers A[i] (1 ≤ A[i] ≤ N), representing the return day for each book.
Output Format:
For each test case, output the total penalty Chef must pay. This is calculated as the sum of the highest penalties for each return day 



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Size of the array

        vector<int> A(n); // Dynamic array to store elements
        unordered_map<int, int> max_indices; // Map to store the maximum index for each element

        // Input elements of the array and track the maximum index for each element
        for (int i = 0; i < n; i++) {
            cin >> A[i]; // Input elements
            // Update the maximum index for this element
            max_indices[A[i]] = max(max_indices[A[i]], i + 1); // i + 1 is 1-based index
        }

        int sum_of_indices = 0;
        
        // Sum up the maximum indices for each unique element
        for (const auto& entry : max_indices) {
            sum_of_indices += entry.second; // Add the maximum index for this element
        }

        // Output the sum of indices
        cout << sum_of_indices << endl;
    }

    return 0;
}
