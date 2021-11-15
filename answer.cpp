#include<iostream>
#include<iomanip>
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
    int sagot, choice, arr[5], size;
    //add code here
    
    do{
        
        cout<<endl<<endl
          <<"----------MENU----------"<<endl
             <<"[1] bubble sort"<<endl
          <<"[2] selection sort"<<endl
          <<"[3] heap sort"<<endl
          <<"[4] QUIT"<<endl
          <<"----------------------------"<<endl
          <<"Enter your choice: ";
        cin>>choice;
    
      sagot=getMenu(choice);
 }while(choice<1);
    
    switch(choice){
        case '1'://bubblesort
          {     
                       //add code here
                         //call getInput function
                    
            //call getBubble function
            //call convert2DimSort
                    
                  
          }
            break;
        case '2':
            {
                
                //add code here
                         //call getInput function
                    
            //call getSelect function
            //call convert2DimSort
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
        case '4': cout<<"end of program.....\n";
                  exit(1);
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
    //add code here
}
//////////////////////////////////////
void convert2DimSort(int list[],int dim)
{
int inList[5][5];
      //add codehere
      
       get2DOut(inList); 
}
////////////////////////////////////////////////
void get2DOut(int list1[][sizeCol])
{
    
      cout<<"Ascending Order\n";
    //add code here
    
     cout<<"\nDescending Order\n";
    //add code here
////////////////////////////////////////////
}
void getBubble(int list[],int dim)
{
        //solution to bubble sort
              //add code here
}
///////////////////////////////////////////////
void getSelect(int list[],int dim)
{
    //solution to selection sort  
              //add code here
    
}
//////////////////////////////////////////////
void getHeap(int list3[],int dimen)
{
    //add code here
             
}
///////////////////////////////////////////////
void tryAgain()
{
    do
    {
        cout<<"Do you want to try again";
    }while (false);
    
      //add code here
}