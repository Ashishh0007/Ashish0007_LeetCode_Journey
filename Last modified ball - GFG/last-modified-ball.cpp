//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int solve(int N, vector<int> A) {
        
        for(int i = A.size()-1; i >= 0; i--) {
            
            if(A[i] > 8) {
                continue;
            }
            else {
                if(1 + A[i] > 9) {
                    continue;
                }
                else {
                    return i + 1;
                }
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.solve(N, A) << "\n";
    }
    return 0;
}
    
// } Driver Code Ends