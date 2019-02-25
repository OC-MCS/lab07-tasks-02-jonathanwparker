
#include <iomanip>
#include <iostream>
#include "RetailItem.h"
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	ifstream dataFile;
	dataFile.open("retailData.csv");
	vector<RetailItem> itemsForRetail;
	string description,stockS,priceS;
	float totalValue=0;
	
	int stock;
	double price;
	while (getline(dataFile, description, ','))
	{
		getline(dataFile, stockS, ',');
		stock = stoi(stockS);
		getline(dataFile, priceS, '\n');
		price = stod(priceS);
		RetailItem retailItem(stock,description,price);
		itemsForRetail.push_back(retailItem);
	}

	cout << setw(15) << "description" << setw(10) << "price" << setw(10) << "on hand" << setw(10) << "value" << endl;
	for (int i=0; i < itemsForRetail.size(); i++)
	{
		retailData specificData = itemsForRetail[i].returnData();
		cout << fixed << showpoint << setprecision(2);
		cout << setw(15) << specificData.description << setw(10) << right << specificData.price << setw(6) << specificData.unitsOnHand << setw(15) << specificData.totalValueOfStock << endl;
		totalValue += specificData.totalValueOfStock;
	}
	cout << "total value: " << totalValue << endl;
	return 0;
}