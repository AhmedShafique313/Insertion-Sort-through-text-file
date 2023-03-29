#include<iostream>
#include<fstream>
using namespace std;
// unction that reads the entries from file.
// so we use some char array, int array and refernce in this function.
void readfromfile(char file_covert[], int elements[], int &entries)
{
    // convert the text file to char array
    ifstream conversion(file_covert);
    // linked the file entries to reference
    conversion>>entries;
    for (int i = 0; i < entries; i++)
    {
        /* code */
        // convert the file to integer array
        conversion>>elements[i];
    }
    return;
}

// I want to show entries converted from txt.file to integer
void showing(int no_of, int arr[])
{
    for (int i = 0; i < no_of; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
        //if (!(i%10))
        //{
            /* code */
           // cout<<endl;
       // }
        
    }
    cout<<endl;
    return;
}

// Insertion Sort
void ins_Sort(int sample[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = sample[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && sample[j] > key)
        {
            sample[j + 1] = sample[j];
            j = j - 1;
        }
        sample[j + 1] = key;
    }
}
 

// printing the result
void printing(int sample[],int n)
{
    cout<<"Isertion sorted array is ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<sample[i]<<" ";
    }
    cout<<endl;
    return;
}
// main function
int main()
{
    // count the entries and store them in integer array
    int count, storing[100];
    //linked text file to character arrray
    char filename[12]={"s.txt"};
    readfromfile(filename,storing,count);
    showing(count,storing);
    ins_Sort(storing,count);
    printing(storing,count);
    system("pause");
    return 0;
}