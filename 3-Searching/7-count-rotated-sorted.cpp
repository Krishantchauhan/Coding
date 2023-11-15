// #include <iostream>

// using namespace std;
// int binse(int a[], int size)
// {
//     int low = 0, high = size - 1;
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         int nxt = (mid + 1) % size;
//         int prev = (mid + size - 1) % size;

//         if (a[mid] <= a[nxt] && a[mid] <= a[prev])
//             return a[mid];
//         else if (a[low] < a[mid])
//             low = mid + 1;
//         else if (a[high] <= a[mid])
//             high = mid - 1;
//     }
//     return a[0];
// }

// int main()
// {
//     int a[8] = {11, 12, 15, 18, 2, 5, 6, 8};
//     int size = sizeof(a) / sizeof(a[0]);
//     // int key = 50;

//     int ab = binse(a, size);
//     cout << ab;

//     return 0;
// }

#include <iostream>

using namespace std;

int binse(int a[], int size)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        int nxt = (mid + 1) % size;
        int prev = (mid + size - 1) % size;

        if (a[mid] <= a[nxt] && a[mid] <= a[prev])
            return a[mid]; // Return the minimum element
        else if (a[low] <= a[mid])
            low = mid + 1;
        else if (a[high] <= a[mid])
            high = mid - 1;
    }
    return a[0]; // Fallback if the array is not rotated
}

int main()
{
    int a[8] = {11, 12, 15, 18, 2, 5, 6, 8};
    int size = sizeof(a) / sizeof(a[0]);

    int minElement = binse(a, size);
    cout << "Minimum element in the rotated sorted array: " << minElement << endl;

    return 0;
}
