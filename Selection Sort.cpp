// Code to implement Selection Sort
#include <iostream>
using namespace std;
// function to perform Selection Sort
void sSort(int list[], int n)
{
    int i, j, min, temp;

    for(i=0; i<n-1; i++)
    {
        min = i;
        for(j=i+1; j<n; j++)
        {
            if (list[j]<list[min])
            {
                min = j;
            }
        }
        temp = list[min];
        list[min] = list[i];
        list[i] = temp;
    }
}
int main()
{
int num = 0;
    cout<<"How many numbers do you want to sort: ";
    cin>>num;
    int array[num];
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<num; i++)
    {
        cin>>array[i];
    }
    cout<<"\n Unsorted list"<<endl;
    for(int l=0; l<num; l++)
    {
        cout<<array[l]<<" ";
    }
    cout<<"\n Sorted list"<<endl;
    sSort(array, num);
    for(int j=0; j<num; j++)
    {
        cout<<array[j]<<" ";
    }
return 0;
}
