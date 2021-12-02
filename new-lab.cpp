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

//miles per gallon
void MilesPerrGallon(double *ptr1, double *ptr2, int sz); //final output of the computer miles
//and gallons
void MperG(); //prompts the user to specify the size of the array for miles and gallons
//verify and validate the input for miles and gallons using exception handling

int main()
{

	//add only declaration here
	char opt, choice;
	char *chr;

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

			gsum = getSum(grade);
			glow = getLow(grade);

			cout << "\nsum = " << gsum; //getsum

			cout << "\nlowest = " << glow; //getLow

			ave = (gsum - glow) / 9.0;
			cout << fixed << setprecision(2);
			cout << "\naverage = " << ave;

			//NOTE ALL CODES MUST USE pointer variables –input,process and //output
		}
		break;
		case '2':
			MperG();
			break;
		case '3':
			cout << "goodbye for now....\n";
			system("pause");
			exit(1);
			break;
		}

		do
		{
			cout << "\nDo you want to try again?[y/n]: ";
			cin >> *chr;
			*chr = tolower(*chr);
		} while (*chr == 'n' && *chr == 'N');
	} while (*chr == 'y');
	cout << endl;
	system("pause");
	return 0;
}
///////////////////////////
char getChoice(char *chr)
{
	char result;
	cout << endl
		 << "<<<<<<<<<<MENU>>>>>>>>>>" << endl
		 << "[1] score of 10 quizzes" << endl
		 << "[2] miles per gallon" << endl
		 << "[3] to quit" << endl
		 << "enter your choice: ";
	cin >> result;
	if (result != '1' && result != '2' && result != '3')
	{
		getChoice(chr);
	}
	*chr = result;
	return result;

	
}
//////////////////////////////
void getInput(double *input)
{
	for (i = 0; i < size; i++)
	{
		cout << "[" << i << "]:";
		cin >> *(input + i);
	}
	cout << "\nyou entered\n";
	for (i = 0; i < size; i++)
	{
		cout << "grade[" << i + 1 << "]: "
			 << *(input + i) << "\n";
	}
	
}
/////////////////////////////
double getSum(double *sum)
{
	double add = 0;
	for (i = 0; i < size; i++)
	{
		add += *(sum + i);
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
void MperG()
{ 
	int ctr;
	pointers milPtr, galPtr;
	int msize;
	double miles, gallons;

	milPtr = new double[size];
	galPtr = new double[size];

	system("cls");
	//add code here
	cout << "\nCOMPUTING FOR MPG : miles per gallon...\n";
	bool ans = true;

	while (ans)
	{
		cout << "Specify the size of the array: ";
		cin >> msize;
		try
		{
			if (msize < 5 || msize > 15)
				throw msize;
		} //end try
		catch (int e)
		{
			cout << "size 5-15 only" << endl;
			continue;

		} //end catch
       ans = false;
	} //end while

    cout << "MILES\n";
	for (ctr = 0; ctr < msize; ctr++)
	{
		while (ans)
		{
			cin >> ans;
			cout << "miles[" << ctr << "]: ";
			cin >> *(milPtr + ctr);

			try
			{
				if (*(milPtr + ctr) < 100 || *(milPtr + ctr) > 250)
					throw *(milPtr + ctr);
			}
			catch (double e)
			{
				cout << e << " is invalid!.. 100-250 only";

				cout << "\nreenter a new value \n\n";
				continue;
			}
           ans = false;
		} //end while
	}	  // loop for miles

 /*********************************************************/
 cout << "GALLONS\n";

   for (ctr = 0; ctr < msize; ctr++)
    {
	 bool ans = true;
	   while (ans)
	    {
		 cout << "gallons[" << ctr << "]: ";
		 cin >> *(galPtr + ctr);
		 try
		 {
			 if (*(galPtr + ctr) < 5 || *(galPtr + ctr) > 25)
				 throw *(galPtr + ctr);

		 } //end try
		 catch (double e)
		 {
		 cout << e << " is invalid!.. 5-25 only";
		 cout << "\nreenter a new value\n\n";
		 continue;
		 } //end catch
		 ans = false;
	    } //end while
    }//loop for gallons

MilesPerrGallon(milPtr, galPtr, msize);
}
////////////
////////////
void MilesPerrGallon(double *ptr1, double *ptr2, int sz)
{

	double mpg[sz];

	pointers mpgPtr;
	int index;

	for (int k = 0; k < size; k++)
		*(mpgPtr + k) = *(ptr1 + k) / *(ptr2 + k);

	cout << showpoint << fixed << setprecision(2);
	cout << "miles  / \t gallon  =  \t  MPG \n";
	for (int l = 0; l < size; l++)
		cout
			<< *(ptr1 + l) << "/    \t  " << *(ptr2 + l)
			<< "\t       = " << *(mpgPtr + l) << "\n";
}
