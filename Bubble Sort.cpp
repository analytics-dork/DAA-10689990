// Code to implement Bubble Sort
#include <iostream>
using namespace std;

// function to perform Bubble Sort
void bSort(int list[], int n)
{
    int outer, inner, temp;

    for(outer=n-1; outer>0; outer--)
    {
        for(inner=0; inner<outer; inner++)
        {
            if(list[inner]>list[inner+1])
            {
                temp = list[inner+1];
                list[inner] = list[inner+1];
                list[inner+1] = temp;
            }
        }
    }

}

int main()
{
    int num = 0;
    cout<<"How many numbers do you want to sort";
    cin>>num;
    int array[num];
    for(int i=0; i<num; i++)
    {
        cin>>array[i];
    }
    bSort(array[2], num);

return 0;
}

