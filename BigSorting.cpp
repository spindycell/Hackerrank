#include<bits/stdc++.h>
using namespace std;

void swap(string* a, string* b){
    string t = *a;
    *a = *b;
    *b = t;
}

int partition (string arr[], int low, int high){
    string pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j].length() < pivot.length()){
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        } else if(arr[j].length()==pivot.length()){
            for(int b=0; b<pivot.length(); b++){
                if(arr[j][b] < pivot[b]){
                    i++;    // increment index of smaller element
                    swap(&arr[i], &arr[j]);
                    break;
                } else if(arr[j][b] > pivot[b])break;
            }
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(string arr[], int low, int high){
    if (low < high){
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(string arr[], int size)
{
    int i;
    for (i=0; i < size; i++){
        cout << arr[i] <<endl;
    }
}

int main(){
    string s;
    int n;
    cin >> n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quickSort(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}
