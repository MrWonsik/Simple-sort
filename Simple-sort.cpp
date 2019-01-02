//============================================================================
// Name        : Sortowanie.cpp
// Author      : Tomasz Wasacz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void simple_sort(int *table, int table_size)
{
	for(int i=0; i<table_size-1; i++)
	{
		int min=i;
		for(int j=i+1;j<table_size; j++)
			if(table[j]<table[min])
				min=j;
		int temp=table[i];
		table[i]=table[min];
		table[min]=temp;
	}
}

void show_table(int *table, int table_size)
{
	for(int i=0;i<table_size;i++)
		cout << table[i] << endl;
}

int main() {
	srand(time(NULL));
	int table_size=10;
	int *table = new int[table_size];

	for(int i=0; i<table_size; i++)
		table[i]=rand() % table_size;

	cout << "Before sort: " << endl;
	show_table(table, table_size);
	simple_sort(table, table_size);

	cout << "After sort: " << endl;
	show_table(table, table_size);
	return 0;
}
