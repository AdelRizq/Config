//This Function for sorting an array in ascending way by Insertion 
//Author Adel Rizq
//6/18/2018

void insertion(int *s , int );  //Prototype

void insertion(int *s, int size)
{
	int count = 1, k, temp, TP;
	for (k = 0; k < size; k++)
	{		if (s[k] < s[k + 1])
				count++;
			else break;
	}
	for (k = count; k < size; k++)
	{
		for (int i = k - 1; i >= 0; i--)
		{
			if (s[k] < s[i])
			{
				temp = s[k];
				TP = i;
			}
		}
		for (int j = k; j > TP; j--)
			s[j] = s[j - 1];
		s[TP] = temp;
	}
}