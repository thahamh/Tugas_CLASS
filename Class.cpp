#include <iostream> 
#include <string>
using namespace std;

class mobil{
		public:
				int jumlahMobil;
				string merkMobil;
				void berkendara(string kecepatan);
				
				
}; 

void mobil::berkendara(string kecepatan){
	cout << "kecepatan Mobil : "<< kecepatan <<endl;
}
	
int main (){
	
	mobil mobilSedan, mobilCoupe, mobilSportCars, mobilCityCar, mobilMVP, mobilSUV;
	
	mobilSedan.jumlahMobil =50;
	mobilSedan.merkMobil = "Honda Accord";
	
	mobilCoupe.jumlahMobil = 25;
	mobilCoupe.merkMobil = "BMW series 6 coupe";
	
	mobilSportCars.jumlahMobil =10;
	mobilSportCars.merkMobil = "Lamborghini";

	mobilCityCar.jumlahMobil =60;
	mobilCityCar.merkMobil = "Honda Jazz";
	
	mobilMVP.jumlahMobil =100;
	mobilMVP.merkMobil = "Suzuki Ertiga";
	
	mobilSUV.jumlahMobil =40;
	mobilSUV.merkMobil = "Toyota Rush";
}
