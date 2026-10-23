#include <iostream>

// Lab 9 — Andrew Bennett
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

// take in an array of integers to find the average of and how many integers there are in the array
double average(const int a[], int n)
{
  int sum = 0;

  // calculate the sum of all integers in the given array
  for(int i = 0; i < n; i++)
  {
    sum += a[i];
  }

  // convert sum into a float/double then calculate the average of sum using the given number of integers
  return sum * 1.0 / n;
};

// output the value of the given double shown as an average
void printSummary(double avg)
{
  std:: cout << "Average: " << avg << "\n";
};

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};

  double avg = average(scores, N);

  printSummary(avg);

  return 0;
}
