#include <iostream>

using namespace std;

int main ()
{
	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePricePoundUSD, milkPriceUSD;
	double sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;	
	double usdToPhp, poundToPhp;
	float usd=1.00, php=56.00, pound=1;
	float sugarcostPhp, riceCostPhp, sardinesCostPhp, coffeeCostPhp, milkCostPhp, totalCostPhp;
	
	cout << "Sugar Price in USD\n";
	cin >> sugarPriceUSD;
	cout << "Rice Price in Pound\n";
	cin >> ricePricePound;
	cout << "Sardines Price Pound\n";
	cin >> sardinesPricePound;
	cout << "Coffe Price Pound in USD\n";
	cin >> coffeePricePoundUSD;
	cout << "Milk Price in USD\n";
	cin >> milkPriceUSD;
	 
	cout << "Sugar Quantity\n";
	cin >> sugarQty;
	cout << "Rice Quantity\n";
	cin >> riceQty;
	cout << "Sardines Quantity\n";
	cin >> sardinesQty;
	cout << "Coffe Quantity\n";
	cin >> coffeeQty;
	cout << "Milk Quantity\n";
	cin >> milkQty;
	
	poundToPhp = pound*php;
	usdToPhp = usd*php;
	
	totalCostPhp = sugarcostPhp +  riceCostPhp + sardinesCostPhp + coffeeCostPhp + milkCostPhp;
	
	cout << "Total Cost in Php is " << totalCostPhp;
	
	return 0;
	 
}
