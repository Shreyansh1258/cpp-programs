#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;  // Read inputs for each test case
        int mindiff = 0;
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                int expected  = 2*(m+n);
                if(k = expected){
                if(k-(n+m)>mindiff){
                cout <<k-(n+m);
                }
                else{
                    cout <<mindiff;
                }
            }
                
            
            }
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;  // Read inputs: max length (n), max width (m), target perimeter (k)

        int mindiff = INT_MAX;  // Initialize mindiff to the largest possible integer value
        //this wmindiff will be replaced with any value and it will be updated until smallest value is found

        // Iterate over all possible lengths (1 to n) and widths (1 to m)
        for (int length = 1; length <= n; length++) {
            for (int width = 1; width <= m; width++) {
                int perimeter = 2 * (length + width);  // Calculate the perimeter for current dimensions
                int diff = abs(perimeter - k);         // Calculate the absolute difference with k
                mindiff = min(mindiff, diff);           // Update mindiff if the current difference is smaller and mindiff will be updated to the smallest value
            }
        }

        cout << mindiff << endl;  // Output the minimum possible difference
    }

    return 0;
}
