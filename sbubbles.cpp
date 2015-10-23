/*
Dual direction bubble sort+array shuffler

usage:
shuffle(input_array,size_of_array);
s_bubbles(input_array,size_of_array,direction);


*/
#include<iostream>
#include<stdlib.h>//for shuffle
#include<time.h>//for shuffle
#include<sbubbles.h>

using namespace std;

void s_bubbles(int* in,int size,bool dir)
{
	for (int j=size-1;j>0;j--)
	{
		for (int i=0;i<j;i++)
		{
			if ((in[i]>in[i+1])==dir)
			{
				swap(in[i],in[i+1]);
			}
		}
	}
};

void shuffle(int* in,int size)
{
	//everyday I'm shufflin'
	srand(time(NULL)*rand());
	for (int i=0;i<size;i++)
	{
		swap(in[i],in[rand()%size]);
	}
}
