int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  if (arr + 5 < arr + sizeof(arr)/sizeof(arr[0])) {
    printf("%d", *(arr + 4)); // Access the last element safely
  } else {
    printf("Access is outside the bounds of array.\n");
  }
  return 0;
}