#include <iostream>
#include <iomanip>
using namespace std;

//global declaration
int i;
const int size = 10;
typedef double *pointers; //typedefinition used for miles per gallon pointer variables

//prototype
//for grade elimination
void getInput(double *input); //prompt the user to input 10 grades
double getLow(double *low);	  //compute and returns the value of the lowest grade
double getSum(double *sum);	  //compute for the sum of 10 grades
//choices and try again
char getChoice(char *ch); //display the menu of choices and input the choice of the user


int main()
{

	//add only declaration here
     
	char opt, choice, answer;
	char* chr;
	do
	{

		chr = &choice;
		opt = getChoice(chr);

		switch (*chr)
		{
		case '1':
		{
			double grade[size];
			double *ptr;
			double *plow, *psum, *pave;
			double gsum, glow;
			double ave;
           
			system("cls");
			//add declaration here

			system("cls");
			//add code here
			cout << "\nChoice[1]: Grade Elimination" << endl;
			cout << "enter " << size << " grades" << endl;
			getInput(grade);

			cout << "\nsum = " << getSum(grade); //getsum

			cout << "\nlowest = " << getLow(grade); //getLow

			cout << "\naverage = " << getSum(grade)/10;
			//NOTE ALL CODES MUST USE pointer variables –input,process and //output
		}
		break;
		case '2':
			
			break;
		case '3':
			cout << "goodbye for now....\n";
			system("pause");
			exit(1);
			break;
		}

		//Add code here

	} while (choice == 'y');
	do
	{
		cout << "Do you want to try again?[y/n]: ";
		cin >> answer;
	} while (answer == 'n' && answer == 'N');

	cout << endl;
	system("pause");
	return 0;
}
///////////////////////////
char getChoice(char *chr)
{
	char result;
	cout << endl
		 << "<<<<<<<<<<MENU>>>>>>>>>>\n"
		 << endl
		 << "[1] score of 10 quizzes\n"
		 << endl
		 << "[2] miles per gallon\n"
		 << endl
		 << "[3] to quit\n"
		 << endl
		 << "enter your choice:　";
	cin >> result;
	if (result != '1' && result != '2' && result != '3')
	{
		getChoice(chr);
	}
	*chr = result;
  return result;
	//add code here
}
//////////////////////////////
void getInput(double *input)
{
	cout << "enter 10 grades \n";
	for (i = 0; i << size; i++)
	{
		cout << "grade[" << i << "]:";
		cin >> *(input + i);
	}
	cout << "\nyou entered\n";
	for (i = 0; i < size; i++)
	{
		cout << "grade[" << i + 1 << "]: "
			 << *(input + i) << "\n";
	}
	//add code here
}
/////////////////////////////
double getSum(double *sum)
{
	double add = 0;

	//add code here

	add = *(sum + 0);
	for (i = 0; i < size; i++)
	{

		if (*(sum + i) > add)
			add = *(sum + i);
	}
   return add;
}
////////////////////////////////
double getLow(double *low)
{
	double baba;

	baba = *(low + 0);

	for (i = 0; i < size; i++)
	{
		if (*(low + i) < baba)
			baba = *(low + i);
	}

	//add code here
	return baba;
}
/////////////////////////
