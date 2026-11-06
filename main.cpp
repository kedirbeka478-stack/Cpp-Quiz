#include <iostream>
using namespace std;

void count(int a[]);
int sumPositive(int a[]);
int sumNegative(int a[]);
double average(int a[]);
void display(int a[]);


int main() {
  int arr[5];
  
  cout << "Enter five numbers: " << endl;

  for (int i = 0; i < 5; i++) {
    cout<<"Number "<<i + 1<<": ";
    cin>>arr[i];
  }

  cout << endl;

  display(arr);
}

void display(int a[]) {
  count(a);

  cout<<"Sum of positive numbers: "<<sumPositive(a) << endl << endl;
  cout << "Sum of Negative numbers: "<< sumNegative(a) << endl << endl;
  cout << "Average: "<<average(a) << endl << endl;
}

double average(int a[]) {
  int sum = 0;
  double avg;

  for (int i = 0; i < 5; i++) {
    sum += a[i];
  }

  avg = sum/5.0;

  return avg;
}

int sumNegative(int a[]) {
  int sum = 0;

  for (int i = 0; i < 5; i++ ) {
    if (a[i] < 0) sum += a[i];
  }

  return sum;
}

int sumPositive(int a[]) {
  int sum = 0;

  for (int i = 0; i < 5; i++) {
    if (a[i] > 0) sum += a[i];
  }

  return sum;
}

void count(int a[]) {
  int countZero = 0;
  int countNegative = 0;
  int countPositive = 0;

  for (int i = 0; i < 5; i++) {
    if (a[i] == 0) countZero++;
    if (a[i] < 0) countNegative++;
    if (a[i] > 0) countPositive++;
  }
  cout << "Zero: " << countZero << endl << endl;
  cout << "Negative Numbers: " << countNegative << endl << endl;
  cout << "Positive Numbers: " << countPositive << endl << endl;
}