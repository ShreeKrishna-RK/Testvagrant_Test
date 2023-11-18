#include<stdio.h>
using namespace std;

int UnitPrice,Gst,Quantity,Discount_Price,Price;

    int Discount(UnitPrice, Gst, Quantity)
    {      
        
        if(Price >= 500)
        {
            Discount_Price = Price- (Price % 5);
            Price = Price - Discount_Price;
        }
        
     Price = UnitPrice * Quantity;
     return Price;
    }

    int WalletGST(Price,Gst,Quantity)
    {
        int NewPrice = ((Price + (Price % 18)) * Quantity);
        return NewPrice;
    }

    int UmbrellaGST(Price,Gst,Quantity)
    {
        int NewPrice = ((Price + (Price % 12)) * Quantity);
        return NewPrice;
    }

    int CigaretteGST(Price,Gst,Quantity)
    {
        int NewPrice = ((Price + (Price % 28)) * Quantity);
        return NewPrice;
    }

    int HoneyGST(Price,Gst,Quantity)
    {
        int NewPrice = (Price * Quantity);
        return NewPrice;
    }


int main()
{

    int Discount(1100,18,1);
    int WalletGST(1100,18,1);
    int Discount(900,12,4);
    int UmbrellaGST(900,12,4);
    int Discount(200,28,3);
    int CigaretteGST(200,28,3);
    int Discount(100,0,2);
    int HoneyGST(100,0,2);
	cout<<"Maximum Gst was Paid for Leather Wallet" <<endl;
	cout<<"Total Amout to be Paid by Shopkeeper is 5500";
}
