//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float item_cost1;
	float item_cost2;

	float half =0;
	float amount_owed = 0;
	cout<<"Enter the cost of item 1: ";
	cin>>item_cost1;
	cout<<"Enter the cost of item 2: ";
	cin>>item_cost2;
	//checking if the cost of item 1 is greater than item 2
	if(item_cost1>item_cost2)
	{
		//Calculate the half of low value, item_cost2
		half = item_cost2/2;
		amount_owed = item_cost1 + half;
	}
	else
	{
		//otherwise calculate the half of item_cost1
		half=item_cost1/2;
		amount_owed =item_cost2 + half;
	}
 //print the amount_owed to fixed 2 deciaml places
	cout<<fixed<<setprecision(2);
	cout<<"Amount owed: $"<<amount_owed<<endl;
	return 0;
}	//end of main function