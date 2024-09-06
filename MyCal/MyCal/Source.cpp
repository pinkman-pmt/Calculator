#include<iostream>

using namespace std;

void Nhap2D(int a[][205], int n, int m) {
	for(int i=0; i<n;i++){
		for (int j = 0; j < n; j++) {
			cout << "Nhap gia tri o a[" << i << "] [" << j << "] ";
			cin >> a[i][j];
		}
	}
}

int DuongCheoChinh(int a[][205], int n, int m) {
	int tong = 0;
	for (int i = 0; i< n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j) {
				tong += a[i][j];
			}
		}
	}
	return tong;
}

void Xuat2D(int a[][205], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j]<<" ";
		}
		cout << endl;
	}
}

void Menu() {
	cout << "1. Giai phuong trinh bac 2" << endl;
	cout << "2. Ma tra n"<<endl;

	cout << "0. Thoat"<<endl;
}

int main() {
	while (true) {
		Menu();
		int choice;
		cout << "Nhap lua chon cua ban" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1: {
			cout << "spend your time your family!!" << endl;
			break;
		}
		case 2: {
			int n, m;
			cout << "Nhap so hang, cot cua ma tran" << endl ;
			cin >> n >> m;
			int a[205][205];
			Nhap2D(a, n, m);
			Xuat2D(a, n, m);
			int MainCross=DuongCheoChinh(a, n, m);
			cout << "Duong cheo chinh la " << MainCross << endl;
			break;
		}
		case 0: {
			return 0;
		}
		default:
			cout << "xin hay nhap lai!! >,,<";
			break;
		}
	}
	return 0;
}