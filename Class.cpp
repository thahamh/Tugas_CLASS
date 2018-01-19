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
	
	string pilihan;
	cout<< "Pilih Jenis Mobil Yang ingin Anda ketahui : "; cin >> pilihan;
	
	if(pilihan=="mobilSedan"){
		cout << "Mobil Sedan :" <<endl;
		cout << " - Jumlah Mobil = "<<mobilSedan.jumlahMobil<<"unit"<<endl;
		cout << " - Merk Mobil   = "<<mobilSedan.merkMobil<<endl; 
		mobilSedan.berkendara("125km/jam");
	}else if(pilihan=="mobilCoupe"){
		cout << "Mobil Coupe :"<<endl;
		cout << " - Jumlah Mobil ="<<mobilCoupe.jumlahMobil<<"unit"<<endl;
		cout << " - Merk Mobil   ="<<mobilCoupe.merkMobil<<endl;
		mobilCoupe.berkendara("160km/jam");	
	}else if(pilihan=="mobilSportcars"){
		cout << "Mobil Sport Cars :"<<endl;
		cout << " - Jumlah Mobil ="<<mobilSportCars.jumlahMobil<<"unit"<<endl;
		cout << " - Merk Mobil   ="<<mobilSportCars.merkMobil<<endl;
		mobilSportCars.berkendara("350km/jam");	 
	}else if(pilihan=="mobilCitycar"){
		cout << "Mobil CityCar :"<<endl;
		cout << " - Jumlah Mobil ="<<mobilCityCar.jumlahMobil<<"unit"<<endl;
		cout << " - Merk Mobil   ="<<mobilCityCar.merkMobil<<endl;
		mobilCityCar.berkendara("130km/jam");	
	}else if(pilihan=="mobilMVP"){
		cout << "Mobil MVP (Multi Purpose Vehicle ) :"<<endl;
		cout << " - Jumlah Mobil ="<<mobilMVP.jumlahMobil<<"unit"<<endl;
		cout << " - Merk Mobil   ="<<mobilMVP.merkMobil<<endl;
		mobilMVP.berkendara("135km/jam");	
	}else if(pilihan=="mobilSUV"){
		cout << "Mobil SUV (Sport Utility Vehicle ) :"<<endl;
		cout << " - Jumlah Mobil ="<<mobilSUV.jumlahMobil<<"unit"<<endl;
		cout << " - Merk Mobil   ="<<mobilSUV.merkMobil<<endl;
		mobilSUV.berkendara("140km/jam");	
	}
}
