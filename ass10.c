#include <stdio.h>
#include <string.h>
struct Student {
 int rollNo;
 char name[50];
 float percentage;
};
void insertionSort(struct Student arr[], int n) {
 int i, j;
 struct Student key;
 for (i = 1; i < n; i++) {
 key = arr[i];
 j = i - 1;
 while (j >= 0 && arr[j].percentage < key.percentage) {
 arr[j + 1] = arr[j];
 j = j - 1;
 }
 arr[j + 1] = key;
 }
}
int linearSearch(struct Student arr[], int n, int rollNo) {
 for (int i = 0; i < n; i++) {
 if (arr[i].rollNo == rollNo) {
 return i;
 }
 }
 return -1;
}
int main() {
 int n, rollNo;
 printf("Enter the number of students: ");
scanf("%d", &n);
 struct Student students[n];
 for (int i = 0; i < n; i++) {
 printf("Enter Roll No for Student %d: ", i + 1);
 scanf("%d", &students[i].rollNo);
 printf("Enter Name for Student %d: ", i + 1);
 scanf("%s", students[i].name);
 printf("Enter Percentage for Student %d: ", i + 1);
 scanf("%f", &students[i].percentage);
 }
 insertionSort(students, n);
 printf("\nStudents sorted by Percentage (Descending Order):\n");
 for (int i = 0; i < n; i++) {
 printf("Roll No : %d \nName : %s\nPercentage : %f\n", students[i].rollNo, 
students[i].name, students[i].percentage);
 }
 printf("\nEnter a Roll No to search: ");
 scanf("%d", &rollNo);
 int searchResult = linearSearch(students, n, rollNo);
 if (searchResult != -1) {
 printf("Student found with Roll No %d:\n", rollNo);
 printf("Roll No : %d \nName : %s\nPercentage : %f\n", 
students[searchResult].rollNo, students[searchResult].name, 
students[searchResult].percentage);
 } else {
 printf("Student with Roll No %d not found.\n", rollNo);
 }
 return 0;
}