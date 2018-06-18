//This Function for Sorting an array in ascending way by Bubble sorting 
//Author Adel Rizq
// 18/6/2018

#include <algorithm>

void Bubble(int *s, int );   \\ prototype

void Bubble(int *s, int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		int count = 0; 
		for (int j = size - 1; j >= size - i - 1; j--)
			if (s[j] < s[j - 1])
			{
				swap(s[j], s[j - 1]);
				count++;
			}
		if (count == 0) break;
	}
}
