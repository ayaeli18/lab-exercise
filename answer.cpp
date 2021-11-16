#include<iostream>
#include<iomanip>
#include<cctype>  
using namespace std;

//global
int i;
int row,col;
const int sizeRow=4;
const int sizeCol=5;

//function
char getMenu(char ans);//returns the correct choice otherwise returns -1 if not.
void getInput(int list[],int dim);//input for both option 1 and 2
void getBubble(int list[],int dim);//perform the bubble sorting
void getSelect(int list[],int dim);//perform the selection sorting
void convert2DimSort(int list[],int dim);//convert one dimensional to 2-dimensional for both option 1 and 2
void get2DOut(int list1[][sizeCol]);//displaying the values in ascending and descending order 2-D
void getHeap(int list3[],int dimen);//process heapyfication or heap sort 1-D


int main()
{
    int sagot, arr[5], size, list[20];
    char choice;
    //add code here
    
    do{
        
        cout<<endl
          <<"----------MENU----------"<<endl
          <<"[1] bubble sort"<<endl
          <<"[2] selection sort"<<endl
          <<"[3] heap sort"<<endl
          <<"[4] QUIT"<<endl
          <<"------------------------"<<endl
          <<"Enter your choice: ";
        cin>>choice;
    
      sagot=getMenu(choice);
 }while(choice<1);
    
    switch(choice){
        case '1'://bubblesort
          {     
                       //add code here
                       cout<<"Processing Bubble Sorting Technique...\n";
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
                cout<<"Processing Selection Sorting Technique...\n";
                         //call getInput function
                         getInput(list, 20);
            //call getSelect function
            getSelect(list, 20);
            //call convert2DimSort
            convert2DimSort(list, 20);
            }
            break;
        case '3'://heapsort
                     {
                         //add code here
                         getHeap(arr,size);
                         cout<<endl<<"Heapyfied values ..."<<endl;
            //add code here
                     }
            break;
        case '4':
        {
            cout<<"end of program.....\n";
            cout<<"leaving the program now...."<<endl;
                  exit(1);
        }
        return 0;
        
        default:
    				cout<<choice<<" not available in the MENU option!"<<endl;
    	}
    }


/////////////////////////////////
char getMenu(char ans)
{
    char result;
    //add code here
    return result;
}
////////////////////////////////////
void getInput(int list[],int dim)// for both option 1 and 2 only
{
    cout<<"Enter 20 Elements \n";
    
    for (int i = 0; i < dim; i++)
    {
        cout<<"loc["<<i<<"]:";
        cin>>list[i];
    }
    
    //add code here
}
//////////////////////////////////////
void convert2DimSort(int list[],int dim)
{
int inList[sizeRow][sizeCol], index = 0;
      //add codehere
      for (int i = 0; i < sizeRow; i++)
      {
          for (int j = 0; j < sizeCol; j++)
          {
              inList[i][j]=list[index];
              index++;
          }
          
      }
      
       get2DOut(inList); 
}
////////////////////////////////////////////////
void get2DOut(int list1[][sizeCol])
{
    
      cout<<"Ascending Order\n";
    //add code here
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            cout<<list1[i][j]<<"\t";
        }
        cout<<endl;        
    }
    
    
     cout<<"\nDescending Order\n";
    //add code here
    for (int k = sizeRow-1; k >= 0; k--)
    {
        for (int l = sizeCol-1; l >= 0; l--)
        {
            cout<<list1[k][l]<<"\t";
        }
        cout<<endl;        
    }
}    
////////////////////////////////////////////

void getBubble(int list[],int dim)
{
    //solution to bubble sort
    //add code here
    int i, j;
    for (i = 0; i < dim -1; i++)

        // Last i elements are already in place
        for (j = 0; j < dim - i -1; j++)
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
}
///////////////////////////////////////////////
void getSelect(int list[],int dim)
{
    int i, j, size, small, temp, chk, index; 
    
    cout<<"enter "<<size<<" numbers"<<endl;
	  for(i=0; i<dim-1; i++)
	  {
	      chk = 0;
	      small = list[i];
	      for (j = i+1; j < dim; j++) 
	      { 
            if (small > list[j]) 
            {
                small = list[j];
                chk++;
                index = j;

	  	       cout<<"loc["<<i<<"]:";
	  	       cin>>list[i];
	        }
	      }
	      if(chk!=0)
	      {
	           temp = list[i];
               list[i] = list[small];
               list[small] = temp;
	      }
       }
}
    //solution to selection sort  
              //add code here
    


//////////////////////////////////////////////
void getHeap(int list3[],int dimen)
{
    //add code here
    int temp, n, i, heap, heapify;
    for (int i = n / 2 - 1; i >= 0; i--)
        
    for(int i = n - 1; i >= 0; i--)
    {
        temp = list3[0];
        list3[0] = list3[i];
        list3[i] = temp;
    }
    
}
///////////////////////////////////////////////
void tryAgain()
{
    char ans;
    do
    {
        cout<<" "<<endl;
        cout<<"Do you want to try again?[y/n]: ";
        cin>>ans;
        cout<<" "<<endl;
        
      //add code here
    }while(false);
    
}

  

/*
*Programmer: Kasai, Elisha Aya
*Date Created:
*Terminal No:
*Program:BSCS-O
*Course / Section:CS127-8L / FOPI01
*kore test
*/