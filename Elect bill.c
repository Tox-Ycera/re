#include <stdio.h>
int main(){
	int Customer_ID;
	int Customer_Name;
	int Unit_Consumed;
	
	float Charge_per_unit, Charges;
	
	printf("Enter Customer_ID:");
	scanf("%d",&Customer_ID);
	
	printf("Enter Customer_Name:");
	scanf("%d",&Customer_Name);
	
	printf("Enter Unit_Consumed:");
	scanf("%d",&Unit_Consumed);
	
	if(Unit_Consumed < 0)
			printf("Charges = 0");
	else if(Unit_Consumed <= 199){
		Charge_per_unit=Unit_Consumed * 1.20;
		printf("%2lf\n",Charge_per_unit);}
	else if(Unit_Consumed <400){
		Charge_per_unit=Unit_Consumed * 1.50;
		printf("%2l\n",Charge_per_unit);}
	else if(Unit_Consumed <600){
		Charge_per_unit=Unit_Consumed * 1.80;
		printf("%2l\n",Charge_per_unit);}
	else if(Unit_Consumed >600){
		Charge_per_unit=Unit_Consumed * 2.00;
		printf("%2l\n",Charge_per_unit);}
		
	if(Charge_per_unit >400)
	Charges = Charge_per_unit * 1.15;
	printf("%2l\n",Charges);
	
	
	
	return 0;
}
