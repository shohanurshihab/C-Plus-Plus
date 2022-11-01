
#include<iostream>
using namespace std;

int count(int &cash,int &fee, int &reciept, int &totalvehicles,int &amount)
{
	cash=cash+fee;
	reciept=reciept+1;
	totalvehicles=totalvehicles+1;
	cout<<"Deposit the due amount"<<endl;
	cin>>amount;

			while(amount<fee)

		    {
			cout<<"Enter amount again(must be more than "<<fee<<" )"<<endl;
				cout<<"Deposit the amount: "<<endl;
			cin>>amount;



		    }
}



int main()
{

char n, stats;
int Heavy_duty=0, Medium_duty=0, Light_duty=0;
			int i=1, cash=0, reciept=0, totalvehicles=0, Amount;
char vehicle;
for(int x=0;x<2;x++)
{


while(vehicle!='O'&&vehicle!='o')
{
	cout<<"Enter the type of vehicle "<<endl;
	cout<<"1 for Heavy_duty"<<endl;
	cout<<"2 for Medium_duty"<<endl;
	cout<<"3 for Light_duty"<<endl;
	cout<<"4 for ending program"<<endl;


cin>>vehicle;
	if(vehicle=='1')
			{

				int fee=800;

			  count(cash,fee,reciept,totalvehicles,Amount);
	 		    Heavy_duty=Heavy_duty+1;
	}
		else if(vehicle=='2')

		{ 	int fee=500;

			  count(cash,fee,reciept,totalvehicles,Amount);
		 	  Medium_duty=Medium_duty+1;
		}
		else if(vehicle=='3')

		{ 	int fee=500;

			  count(cash,fee,reciept,totalvehicles,Amount);
		 	  Light_duty=Light_duty+1;
		}

}
		 if(vehicle=='4')
			{
			 std::cout<<"Program will close now"<<std::endl;
				i=-1;
			}



	std::cout<<"Total Cash Earned Today: "<<cash<<std::endl;
	cout<<"Total Vehicles passed today: "<<totalvehicles<<endl;
	cout<<"Reciepts sold today: "<<reciept<<endl;







}
}








