#include "header.h"

int main()
{
    int n;
    int sum_minor = 0;
    cout << "Enter n: ";
    cin >> n;
    int* array = new int[n];
    initialize_with_random_value(array, n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            sum_minor += array[i];
        }
    }
    cout << endl;
    cout << "Sum minor = " << sum_minor;

    int max = array[0];
    int min = array[1];
    int index_max = -1;
    int index_min = -1;
    int count = 0;
    int prod = 1;
    for (int i = 0; i < n; i++) {
        if (max < array[i]) {
            max = array[i];
            index_max = i;
        }
        else  if (min > array[i]) {
            min = array[i];
            index_min = i;
        }
    }
    cout << endl;
    if (index_min < index_max && index_min != -1 && index_max != -1) {
        for (int i = (index_min + 1); index_min < index_max; index_min++) {
            prod *= array[i];
            cout << array[i] << " ";
        }
    }
    else if (index_max < index_min && index_min != -1 && index_max != -1) {
        for (int i = (index_max + 1); index_max < index_min; index_max++) {
            prod = array[i];
            cout << array[i] << " ";
        }
    }
    else {
        cout << "ERROR!!!" << endl;
    }
    cout << endl;
    cout << "The product of numbers is " << prod << endl;

    bubble_sort(array, n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    cout << "fafaf";

}

