#include "RetailItem.h"
#include <iomanip>
#include <iostream>

RetailItem::RetailItem(int u, string d, double p)
{
	data.unitsOnHand = u;
	data.price = p;
	data.description = d;
	findTotalValue();
}
void RetailItem::findTotalValue()
{
	data.totalValueOfStock = data.unitsOnHand*data.price;
}
retailData RetailItem::returnData()
{
	retailData returnData;
	returnData = data;
	return returnData;
}