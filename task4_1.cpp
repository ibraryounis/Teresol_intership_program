/*=================================================================
/* TSICPP01-1: Teresol
/* Name : Ibrar Younis
/* Task No.: 4.1.
/*==================================================================
/*   program to find the average of elements in an array of integers
/*==================================================================*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    float sum=0;
    float avg;
    cout << "Enter the size of array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements:" << endl;
    for(int i = 0; i < size; i++) 
	{
        cin >> arr[i];
        sum += arr[i];
    }
    avg=static_cast<float>(sum)/size;
    cout<<"sum of the elements="<<sum<<endl;
    cout<<"average of the numbers="<<avg<<endl;
}
