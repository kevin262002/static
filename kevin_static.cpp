#include<iostream>

using namespace std;

class Data{
	
	public : 
	
	int hotal_id;
	char hotel_name[20];
    char hotel_type[20];
    int hotel_rating;
    static char hotel_location[20];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;
	
	void setter(){
		
		cout<<"Enter Id : ";
		cin>>hotal_id;
		
		cout<<"Enter Hotal Name : ";
		cin>>hotel_name;
		
		cout<<"Enter Hotal Type : ";
		cin>>hotel_type;
		
		cout<<"Enter Hotal Rating : ";
		cin>>hotel_rating;
		
		cout<<"Enter Hotal Establish Year : ";
		cin>>hotel_establish_year;
		
		cout<<"Enter Hotel Staff Quantity : ";
		cin>>hotel_staff_quantity;
		
		cout<<"Enter Hotel Room Quantity : ";
		cin>>hotel_room_quantity;
		
	}
	void getter(){
		
		cout<<hotal_id<<endl;
		cout<<hotel_name<<endl;
		cout<<hotel_type<<endl;
		cout<<hotel_rating<<endl;
		cout<<hotel_location<<endl;
		cout<<hotel_establish_year<<endl;
		cout<<hotel_staff_quantity<<endl;
		cout<<hotel_room_quantity<<endl;
		
	}
};

char Data::hotel_location[20] = "Surat";

int main(){
	
	Data obj[10];
	int i,n;
	
	cout<<"Enter Number Of Hotal : ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		
		obj[i].setter();
	}
	for(i=1;i<=n;i++){
		
		obj[i].getter();
	}
	
	
	return 0;
}
