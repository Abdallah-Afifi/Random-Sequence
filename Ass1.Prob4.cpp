

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void rarray(int a[], int n) {
    srand(time(0)); // seed the random number generator with the current time
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 2; // generate a random number between 0 and 1 and assign it to a[i]
    }
}

int main() {
    int n; 
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr=new int(n);
    rarray(arr, n);
    cout << "The random sequence of zeros and ones in the array is: ";
    for (int i = 0; i < n; i++) {
        cout << *arr++ << " ";
    }
    arr = arr - n;
    cout << endl;
    return 0;
}
