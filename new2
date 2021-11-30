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

	char opt, choice, answer;
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

			cout << "\nsum = " << total +=(gsum + i); //getsum

			cout << "\nlowest = " << +=(glow + i);//getLow

			cout << "\naverage = " <<
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

		//Add code here
	}

	do{
		cout << "\nDo you want to try again?[y/n]: ";
		cin >> answer;
	}while (answer != 'y' && answer != 'n' && answer !='Y' && answer != 'N');
    if (answer == 'n' || answer == 'N')
    {
        choice = 'n';
        cout << "leaving the program now...." << endl;
    }
    if (answer == 'y' || answer == 'Y') //IF 'Y/y' GO RETURN TO MENU
    {
       cout << endl;
	system("pause");
	return 0;
    }
    


}
///////////////////////////
char getChoice(char *ch)
{
	char result;
	cout << endl
		 << "<<<<<<<<<<MENU>>>>>>>>>>\n" << endl
		 << "[1] score of 10 quizzes\n" << endl
		 << "[2] miles per gallon\n" << endl
		 << "[3] to quit\n" << endl
		 << "enter your choice:　";
	cin >> result;
	if (result != '1' && result != '2' && result != '3')
    {
       return result;
    }
	

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

     ptr2= *(ptr1+0);
	for(i=0;i<size;i++)
		{
			//high
			if( *(ptr1+i)　> *ptr2)  //num[0]>high
			  ptr2　= *(ptr1+i);
	return add;
}
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
	double miles[size];
	int ctr;
	pointers milPtr, galPtr;
	int msize;

	system("cls");
	//add code here
	cout << "\nCOMPUTING FOR MPG : miles per gallon...\n";
	bool while ()
	{
		cout << "Specify the size of the array: ";
		cin >>
	}
	for (ctr = 0; ctr < msize; ctr++)
	{
		//add code here
		while (true)
		{

			try
			{
				//add code here
				cout << "miles[number]:";
				cin >> *miles;

				if (!cin)
					throw -1.0;
				else if (miles < 100 || miles > 250)
					throw miles;
				else
				{
					*(milPtr + ctr) = miles;
					break;
				}
			} //end try
			catch (double e)
			{
				//add code here
				cout << " is invalid!.. 100-250 only\n";
				if (e != -1.0)

				cout << "\nreenter a new value \n\n";
				cin.clear();
				cin.ignore(100, '\n');
			} //end catch

			//add code here

		} //end while
	}	  //loop for miles

	/*********************************************************/
	cout << "GALLONS\n";

	for (ctr = 0; ctr < msize; ctr++)
	{
		bool ans = true;
		while (ans)
		{
			//add code here
			cout << "gallons[" << ctr << "]: ";
			cin >> ctr;
			try
			{

				//add code here
				cout << "gallons[number]: ";
				cin >> gallons;

				if (!cin)
					throw -1.0;
				else if (gallons < 5 || gallons > 25)
					throw gallons;
				else
				{
					*(galPtr + ctr) = gallons;
					break;
				}

			} //end try
			catch (double e)
			{
				//add code here
				cout << " is invalid!.. 5-25 only";
				if (e != -1.0)
					cerr << ": " << e;
				cout << "\nreenter a new value\n\n";
				cin.clear();
					cin.ignore(100, '\n');
			} //end catch

			//add code here
		} //end while
	}	  //loop for gallons

	MilesPerrGallon(milPtr, galPtr, msize);
}
////////////
////////////
void MilesPerrGallon(double *ptr1, double *ptr2, int sz)
{

	double mpg[sz];
	pointers mpgPtr;
	int index;
	//HINT!! _____=&______;
	for (int sz = 0; sz < size; sz++)
	{
		*(mpgPtr + sz) = *(ptr1 + sz) / *(ptr2 + sz);
	}

	cout << showpoint << fixed << setprecision(2);
	cout << "\nmiles     /       gallon   =       MPG\n";
	
	for (int i = 0; i < size; i++)
	{
		cout << *(ptr1 + i) << "/    \t  " << *(ptr2 + i)
             << "\t   = " << *(mpgPtr + i) << "       \n";
	}
}