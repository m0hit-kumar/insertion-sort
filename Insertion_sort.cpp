+ Example - Insertion Sort AlgorithmC++
#include <iostream>

void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    std::cout << array[i] << " " << std::flush;
  std::cout << std::endl;
}

void InsertionSort(int arr[], int arr_size){
  if(arr_size > 1){
    int size = arr_size;
    for(int i = 1; i < size; ++i){
      int j = i - 1;
      int key = arr[i];
      while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        --j;
      }
      arr[j+1] = key;
    }
  }
}

int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int n = sizeof(array)/sizeof(array[0]);

  std::cout << "Before Insertion Sort :" << std::endl;
  PrintArray(array, n);

  InsertionSort(array, n);

  std::cout << "After Insertion Sort :" << std::endl;
  PrintArray(array, n);
  return (0);
}


/*
OUTPUT
Before Insertion Sort :
94 42 50 95 333 65 54 456 1 2325
After Insertion Sort :
1 42 50 54 65 94 95 333 456 2325
*/
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
#include <iostream>
 
void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    std::cout << array[i] << " " << std::flush;
  std::cout << std::endl;
}
 
void InsertionSort(int arr[], int arr_size){
  if(arr_size > 1){
    int size = arr_size;
    for(int i = 1; i < size; ++i){
      int j = i - 1;
      int key = arr[i];
      while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        --j;
      }
      arr[j+1] = key;
    }
  }
}
 
int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int n = sizeof(array)/sizeof(array[0]);
 
  std::cout << "Before Insertion Sort :" << std::endl;
  PrintArray(array, n);
 
  InsertionSort(array, n);
 
  std::cout << "After Insertion Sort :" << std::endl;
  PrintArray(array, n);
  return (0);
}
