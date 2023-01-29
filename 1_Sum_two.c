#include<stdio.h>

int find_index_of_two_add(int const array[], int arr_length, int const sum, int *first, int *second)
{
	if (!array) return -2; //Void array
	int k, l;
	for (k = 0; k < arr_length; ++k)
	{
		for (l = ++k; l < arr_length; ++l)
		{
			if(l+k == sum)//Success
			{
				*first = k;
				*second = l;
				return 0;
			}
		}
	}
	//Array doesnt include a match couple of values 
	k=l= -1;
	return -1;
}

void show_index(int const res_code, int const first, int const second)
{
	switch (res_code)
	{
		case 0:
		printf("Indeces %d and %d.\n", first, second);
		break;
	case -1:
		printf("There are no indeces.\n");
		break;
	case -2:
		printf("Array has no value.\n");
		break;
		case -3:
	}
}



int main (void)
{
	int test_array[] = {3,-1, 27, 0, 8, 6, -100};
	//int * void_array = NULL;
	int test_sum = 5; 
	int size, test_first, test_second, result;



	size = sizeof (test_array) / sizeof (*test_array);
	result = find_index_of_two_add(test_array, size, test_sum, &test_first, &test_second);
	show_index(result, test_first, test_second);
	
	return 0;
}
