#include <iostream>
using namespace std;

//Bài 1:
//int main () {
//	double chieudai, chieurong;
//	
//	cout << "Nhap chieu dai:";
//	cin >> chieudai;
//	
//	cout << "Nhap chieu rong:";
//	cin >> chieurong;
//	
//	double chuvi = 2 * (chieudai + chieurong);
//	
//	double dientich = chieudai * chieurong;
//	
//	cout << "chu vi hinh chu nhat la:" << chuvi << endl;
//	
//	cout << "dien tich hinh chu nhat la:" << dientich << endl;
//	
//
//}
	
//	Bài 2:

//int main () {
//	double bankinh;
//	
//	const double Pi = 3.14159;
//	
//	cout <<"Nhap ban kinh hinh tron:";
//	cin >> bankinh;
//	
//	double chuvi = 2 * Pi * bankinh;
//	
//	double dientich = Pi * bankinh * bankinh;
//	
//	cout << "Chu vi hinh tron la:" << chuvi <<endl;
//	
//	cout << "Dien tich hinh tron la:" << dientich << endl;
//	
//	}

// Bài 3:

//int main () {
//	double  dientieuthu;
//	
//	const double giadien = 1500;-
//	
//	cout << "So dien tieu thu (kwh)) thang nay:";
//	cin >> dientieuthu;
//	
//	double tiendien = dientieuthu * giadien;
//	
//	cout << " Tien dien thang nay:" << tiendien << "dong" <<endl;
//	}

// Bài 4:

//int main () {
//	double cannang, chieucao;
//	
//	cout << "Nhap can nang (kg):";
//	cin >> cannang;
//	
//	cout << "Nhap chieu cao (m)";
//	cin >> chieucao;
//	
//	double BMI = cannang / (chieucao * chieucao);
//	
//	cout <<"Chi so BMI cua ban la"<< BMI << endl;
//	
//	}

// Bài 5:

//int main () {
//	double day1, day2, chieucao;
//	
//	cout <<"Nhap canh day 1:";
//	cin >> day1;
//	
//	cout <<"Nhap canh day2:";
//	cin >> day2;
//	
//	cout <<"Nhap chieu cao:";
//	cin >> chieucao;
//	
//	double dientich = (day1 + day2) * chieucao /2;
//	cout << "Dien tich hinh thang la:" << dientich << endl;
//	
//	}
	
	// Bài 6:
	
//int main () {
//	 int songuyen;
//	 
//	 cout <<"nhap so de kiem tra: ";
//	 cin >> songuyen;
//	 
//	 if (songuyen %2 ==0) {
//	 	cout <<"So " <<songuyen << " la so chan." <<endl; 
//		 } else {
//		 	cout << "So " <<songuyen << " la so le." <<endl;
//		 	}
//		 	}

// Bài 7:

//int main () {
//	int sothunhat, sothuhai, sothuba;
//	
//	cout << "Nhap so thu nhat: ";
//	cin >> sothunhat;
//	
//		cout << "Nhap so thu hai: ";
//	cin >> sothuhai;
//	
//		cout << "Nhap so thu ba: ";
//	cin >> sothuba;
//	
//	int solonnhat = sothunhat;
//	
//	if ( sothuhai > sothunhat) {
//		solonnhat = sothuhai; 
//		}
//	if (sothuba > sothunhat) {
//		solonnhat = sothuba;
//		}
//		
//		cout <<" So lon nhat trong ba so la: " << solonnhat << endl;
//		}

// Bài 8:
//int main () {
//	int a,b,c;
//	
//	cout << "Nhap canh thu nhat: ";
//    cin >> a;
//    cout << "Nhap canh thu hai: ";
//    cin >> b;
//    cout << "Nhap canh thu ba: ";
//    cin >> c;
//    
//    if  ( a + b > c && a + c > b && b + c > a) {
//	if (a ==b && b==c)
//	 { cout <<" Day la tam giac deu." << endl;
//	 
//	} else if (a == b || a == c || b == c) 
//	 {cout << " Day la tam giac can."  << endl;
//	 } else {
//	 if ( a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
//	 	cout << " Day la tam giac vuong."  << endl; 
//	 	}
//	 	}
//	 	} else { 
//	 	cout <<" Khong the tao thanh tam giac." << endl;
//	 	}
//	 	}

// Bài 9:

//int main () {
//	char chucai;
//	
//	cout << " Nhap chu cai can kiem tra: ";
//	cin >> chucai;
//	
//	int asciiValue = int(chucai);
//	
//	if (asciiValue >= 65 && asciiValue <= 90) {
//		cout << "Chu cai ' " << chucai  << " ' la chu cai in HOA. " << endl;
//		} else if 	(asciiValue >= 97 && asciiValue <=122) {
//					cout << "Chu cai ' " << chucai  << " ' la chu cai in THUONG. " << endl;
//					} else {
//								cout << "Chu cai ' " << chucai  << " ' khong phai la chu cai. " << endl;
//								}
//								}
//								

// Bài 10:
//int main (){
//	int namdau, namcuoi;
//	
//	cout << "Nhap vao nam bat dau: ";
//	cin >> namdau;
//	cout << " Nhap vao nam ket thuc: ";
//	cin >> namcuoi;
//	
//	for (int nam = namdau; nam <= namcuoi; nam++) {
//		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
//            cout << nam << " la nam nhuan." << endl;
//        } else {
//            cout << nam << " khong phai la nam nhuan." << endl;
//        }
//    }
//    }

 // Bài nâng cao:
 
 int main (){
 	int n;
 	
 	cout << " Nhap vao mot so nguyen: ";
 	cin >> n;
 	
 	int tong = 0;
 	
 	for (int i = 1; i <= n; i++) {tong += i; }
cout << " Tong cua day so tu 1 den " << n << " la: " << tong << endl;
}


