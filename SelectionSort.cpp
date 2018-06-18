// This Function takes an array as input and sorts it using Selection Sort
// Return the address of the first element of the sorted array
// Author: Adel Rizq
// Date: 6/18/2018

void swap (int &i , int &j)
{
	int temp = i;	
	i = j;
	j = temp;
} 


int* selection(int a[], int size)
{
	int min, i, j, k = 0;
	for (i = 0; i< size-1; i++)
	{
		mi = a[i];
		for (j = i; j <= size-1; j++)
			if (a[j]<min)
			{
				min = a[j];
				k = j;
			}
		swap(a[k], a[i]);
	}
	return &a[0];
}