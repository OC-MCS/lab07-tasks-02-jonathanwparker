#pragma once
#include <string>
using namespace std;
struct retailData
{
	int unitsOnHand;
	string description;
	double price;
	float totalValueOfStock;
};

class RetailItem
{
private:
	retailData data;
	void findTotalValue();
public:
	RetailItem(int u, string d, double p);
	retailData returnData();

};