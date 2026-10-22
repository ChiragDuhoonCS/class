#include <stdio.h>

int main() {
    int arr[3][2] = {{76, 32}, {34, 65}, {90, 98}};
    

    //! IMPORTANT    SEE HERE
    int rows = sizeof(arr) / sizeof(arr[0]);          // Number of rows (3)
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);    // Number of columns (2)

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d , ", arr[i][j]);
        }
    }
    
    return 0;
}