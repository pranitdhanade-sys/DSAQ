#include<stdbool.h>
#include<stdio.h>

#define MAX 100

bool matrixSearch(int mat[MAX][MAX], int n, int m, int x){
    for (int i=0; i<n; i++){
        for(int j=0;j<m;j++){
            if (mat[i][j] == x){
                return true;
            }
        }
    }
    return false;
}

