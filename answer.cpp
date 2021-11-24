#include <iostream>
#include <iomanip>
using namespace std;

//global
int i;
int row, col;
const int sizeRow = 4;
const int sizeCol = 5;
char choice = 'y';

//function
char getMenu(char ans);                    //returns the correct choice otherwise returns -1 if not.
void getInput(int list[], int dim);        //input for both option 1 and 2
void getBubble(int list[], int dim);       //perform the bubble sorting
void getSelect(int list[], int dim);       //perform the selection sorting
void convert2DimSort(int list[], int dim); //convert one dimensional to 2-dimensional for both option 1 and 2
void get2DOut(int list1[][sizeCol]);       //displaying the values in ascending and descending order 2-D
void getHeap(int list3[], int dimen);      //process heapyfication or heap sort 1-D
void tryAgain();                           //confirm re-running of the program
void printHeap(int arr[], int size);       //process displaying heapyfied values

int main()
{
    // VARIABLE DECLARATION
    int arr[10], size = 10, list[sizeRow * sizeCol];
    signed char sagot;
    do
    {
        do
        {
            sagot = getMenu(choice);
        } while (sagot != -1 && sagot != '1' && sagot != '2' && sagot != '3' && sagot != '3' && sagot != '4');
        //CHOOSE FROM CASE1-4
        switch (sagot)
        {
        case '1': //bubblesort
        {
            
            cout << "Processing Bubble Sorting Technique...\n";
            //call getInput function
            getInput(list, 20);
            //call getBubble function
            getBubble(list, 20);
            //call convert2DimSort
            convert2DimSort(list, 20);
        }
        break;
        case '2':
        {

            
            cout << "Processing Selection Sorting Technique...\n";
            //call getInput function
            getInput(list, 20);
            //call getSelect function
            getSelect(list, 20);
            //call convert2DimSort
            convert2DimSort(list, 20);
        }
        break;
        case '3': //heapsort
        {
            
            cout << endl
                 << "Processing Heap Sorting Technique..." << endl;
            getHeap(arr, size);
            cout << endl
                 << "Heapyfied values ..." << endl;

            
            printHeap(arr, size);
        }
        break;
        case '4':
        {
            cout << "end of program.....\n";
            exit(1);
        }

        default: //EXCEPT 1-4 THAT PROGRAM WILL WARNING
        {
            cout << "Not available in the MENU option!" << endl;
        }
        }
        tryAgain();
    } while (choice == 'y');
    return 0;
}

/////////////////////////////////
char getMenu(char ans) //FUNCTION FOR MENU
{
    
    signed char result;
    // MAIN MENU
    cout << endl
         << "----------SORTING----------" << endl  
         << "[1] bubble sort" << endl
         << "[2] selection sort" << endl
         << "[3] heap sort" << endl
         << "[4] QUIT" << endl
         << "---------------------------" << endl
         << "Enter your choice: ";
    cin >> result;
    if (result != '1' && result != '2' && result != '3' && result != '4')
    {
        result = -1;
    }

    return result;
}
////////////////////////////////////
void getInput(int list[], int dim) // for both option 1 and 2 only
{
    
    cout << "Enter 20 Elements \n";

    for (int i = 0; i < dim; i++)
    {
        cout << "loc[" << i << "]:";
        cin >> list[i];
    }
}
//////////////////////////////////////
void convert2DimSort(int list[], int dim) //CONVERT 2-D INTO 1-D
{
    
    int inList[sizeRow][sizeCol], index = 0;
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            inList[i][j] = list[index];
            index++;
        }
    }
    
    get2DOut(inList);
}
////////////////////////////////////////////////
void get2DOut(int list1[][sizeCol]) // OUTPUT 2-D(ASCENDING AND DESCENDING)
{

    
    cout << "Ascending Order\n";
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            cout << list1[i][j] << "\t";
        }
        cout << endl;
    }

   
    cout << "\nDescending Order\n";
    for (int k = sizeRow - 1; k >= 0; k--)
    {
        for (int l = sizeCol - 1; l >= 0; l--)
        {
            cout << list1[k][l] << "\t";
        }
        cout << endl;
    }
}
////////////////////////////////////////////

void getBubble(int list[], int dim) //FUNCTION FOR BUBBLE SORT
{
    //solution to bubble sort
    
    int i, j;
    for (i = 0; i < dim - 1; i++)

        // Last i elements are already in place
        for (j = 0; j < dim - i - 1; j++)
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
}
///////////////////////////////////////////////
void getSelect(int list[], int dim) //FUNCTION DOR SELECTION SORT
{
    
    for (int i = 0; i < dim; i++)
    {
        int selector = i;
        for (int j = selector; j < dim; j++)
        {
            int current = j;
            if (list[selector] < list[current])
            {
                selector = current;
            }
            swap(list[selector], list[i]);
        }
    }
}
//////////////////////////////////////////////
void heapify(int arr[], int n, int i)
{
    int largest = i; //INITIALIZE LARGEST AS ROOT
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
    if (l < n && arr[l] > arr[largest]) //IF LEFT CHILD IS LARGER THAN ROOT
        largest = l;
 
    if (r < n && arr[r] > arr[largest]) //IF RIGHT CHILD IS LARGER THAN LARGEST SO FAR
        largest = r;
 
    if (largest != i) {  //IF LARGEST IS NOT ROOT
        swap(arr[i], arr[largest]);
 
        heapify(arr, n, largest); //RECURSIVELY HEAPIFY THE AFFECTED SUB-TREE
    }
}

void getHeap(int list3[], int dimen) // MAIN FUNCTION TO DO HEAP SORT
{
    
    cout << endl
         << "Enter 10 numbers" << endl;
    for (int i = 0; i < dimen; i++)
    {
        cout<<"Enter Value of list["<<i+1<<"] :";
        cin>>list3[i];
    }

    int startIdx = (dimen / 2) - 1;
    for (int i = startIdx; i >= 0; i--)
    {
        heapify(list3, dimen, i);

        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l < dimen && list3[l] > list3[largest])
            largest = l;

        if (r < dimen && list3[r] > list3[largest])
            largest = r;

        if (largest != i)
        {
            swap(list3[i], list3[largest]); //SWAP LIST3[i] TO LIST[largest]

            heapify(list3, dimen, largest); //CALL MAX HEAPIFY ON THE REDUCED HEAP
        }
    }
}

void printHeap(int arr[], int n) //PRINT ARRAY OF SIZE N 
{
    cout << "\n";
 
    for (int i = 0; i < n; ++i)
        cout << "Arr["<<i+1<<"] :" <<arr[i] <<endl;
}

///////////////////////////////////////////////
void tryAgain() //FUNCTION THAT ASK TO USER RETRY, IF 'NO' PROGRAM IS EXIT
{
    
    char answer;
    do
    {
        cout << "Do you want to try again?[y/n]: "; //ASK TO USER
        cin >> answer;
    } while (answer != 'y' && answer != 'n' && answer != 'Y' && answer != 'N');
    if (answer == 'n' || answer == 'N')
    {
        choice = 'n';
        cout << "leaving the program now...." << endl;
    }
    if (answer == 'y' || answer == 'Y') //IF 'Y/y' GO RETURN TO MENU
    {
        return;
    }
    
  
}

/*
*Programmer: Kasai, Elisha Aya
*Date Created:
*Terminal No:00
*Program:BSCS-O
*Course / Section:CS127-8L / FOPI01
*/