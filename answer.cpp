#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

//global
int i;
int row, col;
char choice;
const int sizeRow = 4;
const int sizeCol = 5;

//function
char getMenu(char ans);                    //returns the correct choice otherwise returns -1 if not.
void getInput(int list[], int dim);        //input for both option 1 and 2
void getBubble(int list[], int dim);       //perform the bubble sorting
void getSelect(int list[], int dim);       //perform the selection sorting
void convert2DimSort(int list[], int dim); //convert one dimensional to 2-dimensional for both option 1 and 2
void get2DOut(int list1[][sizeCol]);       //displaying the values in ascending and descending order 2-D
void getHeap(int list3[], int dimen);      //process heapyfication or heap sort 1-D
void printHeap(int arr[], int size);       //process displaying heapyfied values
void tryAgain();       //process displaying heapyfied values

int main()
{
    int arr[10], size = 10, list[20];
    char sagot;
    choice = 'y';
    //add code here
    do
    {
        /* code */
    
    

    do
    {        sagot = getMenu(choice);
    cout<<sagot<<endl;
    } while (!(sagot != '1' || sagot != '2' || sagot != '3' || sagot != '4'));

    switch (sagot)
    {
    case '1': //bubblesort
    {
        //add code here
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

        //add code here
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
        //add code here
        cout<<endl<<"Processing Heap Sorting Technique..."<<endl;
        getHeap(arr, size);

        cout << endl
             << "Heapyfied values ..." << endl;
        //add code here
        printHeap(arr, size);
    }
    break;
    case '4':
    {
        cout << "end of program.....\n";
        exit(1);
    }
        return 0;

    default:
        cout << choice << " not available in the MENU option!" << endl;



    }
    tryAgain();
    } while (choice == 'y');
}

/////////////////////////////////
char getMenu(char ans)
{
    char result;
    cout << endl
             << "----------SORTING----------" << endl
             << "[1] bubble sort" << endl
             << "[2] selection sort" << endl
             << "[3] heap sort" << endl
             << "[4] QUIT" << endl
             << "---------------------------" << endl
             << "Enter your choice: ";
        cin >> result;
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

    //add code here
}
//////////////////////////////////////
void convert2DimSort(int list[], int dim)
{
    int inList[sizeRow][sizeCol], index = 0;
    //add codehere
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
void get2DOut(int list1[][sizeCol])
{

    cout << "Ascending Order\n";
    //add code here
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            cout << list1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nDescending Order\n";
    //add code here
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

void getBubble(int list[], int dim)
{
    //solution to bubble sort
    //add code here
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
void getSelect(int list[], int dim)
{
    int i, j, size, small, temp, chk, index;

    
    for (i = 0; i < dim - 1; i++)
    {
        chk = 0;
        small = list[i];
        for (j = i + 1; j < dim; j++)
        {
            if (small > list[j])
            {
                small = list[j];
                chk++;
                index = j;

                cout << "loc[" << i << "]:";
                cin >> list[i];
            }
        }
        swap(small, list[j]);

        cout<<"\nAscending Order\n";
        for(i = 0; i < dim; i++)
        {
            cout<<list[i]<<" ";
        }
        cout<<"\nDescending Order\n";
        for(i = dim - 1; i >= 0; i--)
        {
            cout<<list[i]<<" ";
        }
        
    }
}
//solution to selection sort
//add code here

//////////////////////////////////////////////
void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
    if (l < n && arr[l] > arr[largest])
        largest = l;
 
    if (r < n && arr[r] > arr[largest])
        largest = r;
 
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        heapify(arr, n, largest);
    }
}

void getHeap(int list3[], int dimen)
{
    cout<<endl<<"Enter 10 numbers"<<endl;
    for (int i = 0; i < dimen; i++)
    {
        cout<<"Enter Value of list["<<i+1<<"] :";
        cin>>list3[i];
    }
    
    //add code here
     int startIdx = (dimen / 2) - 1;

     for (int i = startIdx; i >= 0; i--) {
        heapify(list3, dimen, i);
    }
}

void printHeap(int arr[], int n)
{
    cout << "\n";
 
    for (int i = 0; i < n; ++i)
        cout << "Arr["<<i+1<<"] :" <<arr[i] <<endl;
}

///////////////////////////////////////////////
void tryAgain()
{
    char ans;
    do
    {
        
        cout << "Do you want to try again?[y/n]: ";
        cin >> ans;

        //add code here
    } while(ans != 'y' && ans != 'n');
    if(ans == 'n')
    {
        choice = 'n';
         cout << "leaving the program now...." << endl;
    }

  
}

/*
*Programmer: Kasai, Elisha Aya
*Date Created:
*Terminal No:
*Program:BSCS-O
*Course / Section:CS127-8L / FOPI01
*/