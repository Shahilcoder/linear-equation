/*Program to solve system of linear equation: Test 7
 *Test 1: Failed
 *Test 2: Failed
 *Test 3: Failed
 *Test 4: Failed
 *Test 5: Passed
 *Test 6: Passed
 *Test 7: Failed
 Testing git push system
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
	int count, count2 = 0, count3 = 0, count4 = 0, position_of_equal;
	char equation1[30], equation2[30], equation3[30], coefficient_catcher[30], variable_catcher[30];
	char constant_catcher[30]; // the constant term at the right hand side of equation

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

		if(isalpha(equation1[count]) != 0)
		{	
			variable_catcher[count3] = equation1[count];
			count3 += 1;
		}
/*
		if(equation1[count] == '=')
		{
			position_of_equal = count;// the position where equal to sign is present
			break;
		}
*/
	}

/*
//creating a loop that will check array after equal to sign
	while (equation1[position_of_equal] != '\0')
	{
		if(equation1[position_of_equal] != ' ' && isalpha(equation1[position_of_equal] == 0))
		{
			constant_catcher[count4] = equation1[position_of_equal];
			count4 += 1;
		}

		++position_of_equal;
	}
*/
	cout << endl;

	for (int i = 0; i < count2; ++i)
	{
		cout << coefficient_catcher[i];
	}

	cout << endl << endl;

	for (int j = 0; j < count3; ++j)
	{
		cout << variable_catcher[j];
	}

	cout << endl << endl;
/*
	for(int k = 0; k < count4; ++k)
	{
		cout << constant_catcher[k];
	}
*/
	return 0 ;
	
}
