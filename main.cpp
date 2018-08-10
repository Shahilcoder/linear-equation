/*Program to solve system of linear equation: Test 5
 *Test 1: Failed
 *Test 2: Failed
 *Test 3: Failed
 *Test 4: Failed
 *Test 5: Passed
*/
//---------------------------------------------------------------------

//including headers
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctype.h>
using namespace std;

int main()
{
	int count, count2 = 0;
	char equation1[30], equation2[30], equation3[30], coefficient_catcher[30];

	cout << "Enter equation 1 in the form of ax + by + c = d: ";	gets(equation1);

	for (count = 0; equation1[count] != '\0'; ++count)
	{
		if((equation1[count] != ' ' &&
			equation1[count] != '-' &&
			equation1[count] != '+' &&
			equation1[count] != '=') && isalpha(equation1[count]) == 0)// in DevC++ isalpha gives 2 for true
		{
			coefficient_catcher[count2] = equation1[count];
			count2 += 1;
		}
	}

	cout << endl;

	for (int i = 0; i <= count2; ++i)
	{
		cout << coefficient_catcher[i];
	}
	
	return 0 ;
	
}
