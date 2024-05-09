#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number of Arrays: ";
    cin >> n;
    
   int arr[n];
   cout <<"Enter " << n << " Numbers:"<< endl;
 for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Your One Dimensional Array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}