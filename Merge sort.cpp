//This Segment For Sorting an Array in Ascending Way by Merge
//it Recieves the address of the first element in tha array
//Author : Adel Rizq
//Date : 6/19/2018

// prototypes
void mergesort_0(int * a,int size);
void mergesort(int *a, int *tmparr, int left, int right);
void merge(int *a, int *tmparr, int leftpos, int rightpos, int rightend);


void mergesort_0(int *a, int size)
{
	int tmparr[8];
	mergesort(a, tmparr, 0, size - 1);
}

void mergesort(int *a, int *tmparr, int left, int right)
{
	if (left < right)
	{
		int center = (left + right) / 2;
		mergesort(a, tmparr, left, center);
		mergesort(a, tmparr, center + 1, right);
		merge(a, tmparr, left, center+1, right);
	}
}

void merge(int *a, int *tmparr, int leftpos, int rightpos, int rightend)
{
	int leftend = rightpos - 1;
	int numeles = rightend - leftpos + 1;
	int tmppos = leftpos;

	while (leftpos <= leftend && rightpos <= rightend)
	{
		if (a[rightpos] <= a[leftpos])
			tmparr[tmppos++] = a[rightpos++];
		else 
			tmparr[tmppos++] = a[leftpos++];
	}
	while (leftpos <= leftend)
		tmparr[tmppos++] = a[leftpos++];
	while (rightpos <= rightend)
		tmparr[tmppos++ ] = a[rightpos++];

	for (int i = 0; i < numeles; i++)
	{
		a[rightend] = move(tmparr[rightend]);
		rightend--;
		
	}
}
