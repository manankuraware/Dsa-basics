/*
Examples : 

Input: N numbers = {2, 3, 5, 7}   M = 100 
Output: 78   

Input: N numbers = {2, 5, 7, 11}   M = 200
Output: 137
The approach for this problem will be to generate all the possible combinations of numbers using N prime numbers using power set in 2N. For each of the given prime numbers Pi among N, it has M/Pi multiples. Suppose M=10, and we are given with 3 prime numbers(2, 3, 5), then the total count of multiples when we do 10/2 + 10/3 + 10/5 is 11. Since we are counting 6 and 10 twice, the count of multiples in range 1-M comes 11. Using inclusion-exclusion principle, we can get the correct number of multiples. The inclusion-exclusion principle for three terms can be described as: 

Similarly, for every N numbers, we can easily find the total number of multiples in range 1 to M by applying the formula for an intersection of N numbers. The numbers that are formed by multiplication of an odd number of prime numbers will be added and the numbers formed by multiplication of even numbers will thus be subtracted to get the total number of multiples in the range 1 to M. 

Using power set we can easily get all the combination of numbers formed by the given prime numbers. To know if the number is formed by multiplication of odd or even numbers, simply count the number of set bits in all the possible combinations (1-1<<N).
Using power sets and adding the numbers created by combinations of odd and even prime numbers we get 123 and 45 respectively. Using inclusion-exclusion principle we get the number of numbers in range 1-M that is divided by any one of N prime numbers is (odd combinations-even combinations) = (123-45) = 78. 

Below is the implementation of the above idea: 
*/

// CPP program to count the
// number of numbers in range
// 1-M that are divisible by
// given N prime numbers
#include <bits/stdc++.h>
using namespace std;

// function to count the number
// of numbers in range 1-M that
// are divisible by given N
// prime numbers
int count(int a[], int m, int n)
{
	int odd = 0, even = 0;
	int counter, i, j, p = 1;
	int pow_set_size = (1 << n);

	// Run from counter 000..0 to 111..1
	for (counter = 1; counter < pow_set_size; counter++) {
		p = 1;
		for (j = 0; j < n; j++) {

			// Check if jth bit in the
			// counter is set If set
			// then print jth element from set
			if (counter & (1 << j)) {
				p *= a[j];
			}
		}

		// if set bits is odd, then add to
		// the number of multiples
		if (__builtin_popcount(counter) & 1)
			odd += (m / p);
		else
			even += (m / p);
	}

	return odd - even;
}

// Driver Code
int main()
{
	int a[] = { 2, 3, 5, 7 };
	int m = 100;
	int n = sizeof(a) / sizeof(a[0]);
	cout << count(a, m, n);
	return 0;
}
//Output: 

// 78
// Time Complexity: O(2N*N)