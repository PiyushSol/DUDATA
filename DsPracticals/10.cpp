#include<iostream>
#include<cmath>
#include"bits/stdc++.h"
using namespace std;
// Function to display the array
void display(int a[], int n)
{
for (int i = 0; i < n; i++) {
	cout << a[i] << " ";
}
cout << endl;
}
void findPermutations(int a[], int n)
{
sort(a, a + n);
cout << "Possible permutations are:"<<endl;
do {
	display(a, n);
} while (next_permutation(a, a + n));
}
// Driver code
int main()
{
int n;
cout<<"Enter size of array:";
cin>>n;
cout<<"Enter elements of array:";
int a[n];
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
findPermutations(a, n);

return 0;
}