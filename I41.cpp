//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void removeDuplicates(char* S)
{
	int *arr;
	int arr_length = strlen(S);
	char S2[] = " ";
	for (int i = 0; i < arr_length; i++) {
		S2[i] = S[i];
	}
	free(S);
	arr = (int *)malloc(2 * arr_length * sizeof(int));
	for (int i = 0; i < *arr; i++) {
		S[i] = S2[i];
		cout << S[i];
		i++;
		S[i] = ' ';
	}
	cout << S;
}

int main()
{
	char S1[] = "geeksforgeeks";
	char *S2 = NULL;
	try {
		removeDuplicates(S1);
	}
	catch (overflow_error){
		cout << "Nahuy idi" << endl;
	}

	//char S2[] = "aabcca";
	//removeDuplicates(S2);
	//cout << S2 << endl;

	return 0;
}