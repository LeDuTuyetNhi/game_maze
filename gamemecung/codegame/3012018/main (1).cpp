//#include<iostream>
//#include<ctime>
//#include"kmin_console.h"
//using namespace std;
//#define dotran 2
//#define max 100
//#define len 1
//#define xuong 2
//#define trai 3
//#define phai 4
//#define tuong_tren 3
//#define tuong_duoi 25
//#define tuong_trai 23
//#define tuong_phai 99
//struct toado
//{
//	int x, y;
//};
//
//toado ran[max];
//int sodot = 3;
//
//
//void taoran();
//void hienthiran(toado dotcuoi);
//toado dichuyen(int huong);
//void dichuyenran(int &huong);
//void tuong();
//bool kiemtrathua();
//void gameover();
//toado hienthimoi();
//bool kiemtraanmoi(toado moi);
//void themdot();
//void menu();
//void luachon(int chon);
//
//void main()
//{
//	
//	menu();
//	system("pause");
//}
//
//void taoran()
//{
//	ran[0].x = tuong_trai+3;
//	ran[1].x = tuong_trai+2;
//	ran[2].x = tuong_trai+1;
//	ran[0].y = ran[1].y = ran[2].y = tuong_tren+1;
//}
//void hienthiran(toado dotcuoi)
//{
//	for(int i = 0 ;i < sodot; i++)
//	{
//		gotoXY(ran[i].x, ran[i].y);
//		cout << (char)dotran;
//	}
//	gotoXY(dotcuoi.x,dotcuoi.y);
//		cout<<" ";
//}
//toado dichuyen(int huong)
//{
//	toado dotcuoi = ran[sodot - 1];
//	for(int i = sodot - 1; i >= 1; i--)
//	{
//		ran[i] = ran[i - 1];
//	}
//	switch(huong)
//	{
//	case len:
//		ran[0].y--;
//		break;
//	case xuong:
//		ran[0].y++;
//		break;
//	case trai:
//		ran[0].x--;
//		break;
//	case phai:
//		ran[0].x++;
//		break;
//	}
//	return dotcuoi;
//}
//void dichuyenran(int &huong)
//{
//	int key = inputKey();
//	if(key == 'w' || key == 'W' || key == KEY_UP)
//	{
//		huong = len;
//	}
//	else if(key == 's' || key == 'S' || key == KEY_DOWN)
//	{
//		huong = xuong;
//	}
//	else if(key == 'a' || key == 'A' || key == KEY_LEFT)
//	{
//		huong = trai;
//	}
//	else if(key == 'd' || key == 'D' || key == KEY_RIGHT)
//	{
//		huong = phai;
//	}
//}
//void tuong()
//{
//	for(int i=tuong_trai; i<=tuong_phai; i++)
//	{
//		gotoXY(i, tuong_tren);
//		cout<<(char)220;
//	}
//	for(int j=tuong_tren+1; j<=tuong_duoi; j++)
//	{
//		gotoXY(tuong_trai, j);
//		cout<<(char)221;
//	}
//	for(int i=tuong_trai; i<=tuong_phai; i++)
//	{
//		gotoXY(i, tuong_duoi);
//		cout<<(char)223;
//	}
//	for(int j=tuong_tren+1; j<=tuong_duoi-1; j++)
//	{
//		gotoXY(tuong_phai, j);
//		cout<<(char)222;
//		
//	}
//}
//bool kiemtrathua()
//{
//	if(ran[0].y==tuong_tren)
//		return true;
//	if(ran[0].y==tuong_duoi)
//		return true;
//	if(ran[0].x==tuong_trai)
//		return true;
//	if(ran[0].x==tuong_phai)
//		return true;
//	
//}
//void gameover()
//{
//	if(kiemtrathua() == true)
//	{
//		Sleep(500);
//		clrscr();
//		cout<<"******game over******"<<endl;
//	}
//}
//toado hienthimoi()
//{
//	srand(time(NULL));
//	int x =	tuong_trai + 1 + rand() % (tuong_phai - tuong_trai - 1);
//	int y = tuong_tren + 1 + rand() % (tuong_duoi - tuong_tren - 1);
//	gotoXY(x,y);
//	cout<<(char)127;
//	toado temp;
//	temp.x=x;
//	temp.y=y;
//	return temp;
//}
//bool kiemtraanmoi(toado moi)
//{
//	if(ran[0].x == moi.x && ran[0].y == moi.y)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//
//}
//void themdot()
//{
//	ran[sodot] = ran[sodot - 1];
//	sodot++;
//}
//void menu()
//{	
//	setTextColor(11);
//	int chon;
//	system("cls");
//	cout <<"*********** menu *************\n";
//	cout <<"1. play\n";
//	cout <<"2. high score\n";
//	cout <<"3. about\n";
//	cout <<"4. exit\n";
//	cout <<"******************************\n";
//	cout <<"nhap lua chon cua ban: ";
//	cin >> chon;
//	while((chon < 1)||(chon > 5))
//	{
//		cout <<"nhap lai lua chon cua ban: ";
//		cin >> chon;
//	}
//	luachon(chon);
//}
//void luachon(int chon)
//{
//	switch(chon)
//	{
//	case 1:
//		{
//			system("cls");
//			char name[256];
//			cout <<"nhap ten cua ban: \n";
//			fflush(stdin);
//			gets(name);
//			int x = 0, y = 0;
//			taoran();
//			int huong = phai;
//			int diem = 0;
//			tuong();
//			toado moi = hienthimoi();
//			while(1)
//			{
//				//clrscr();
//		
//				toado dotcuoi =	dichuyen(huong);
//				hienthiran(dotcuoi);
//				dichuyenran(huong);
//				if(kiemtraanmoi(moi) == true)
//				{
//					moi = hienthimoi();
//					themdot();
//					diem++;
//					gotoXY(tuong_phai + 3,tuong_tren);
//					cout<<"Diem: "<<diem;
//				}
//					if(kiemtrathua() == true)
//						break;
//						Sleep(200);
//				}
//			
//				gameover();
//			cout <<"bam 0 de quay lai: ";
//			cin >> chon;
//			while(chon!=0)
//			{
//				cin >> chon;
//			}
//			if(chon==0)
//				menu();
//			break;
//		
//		}
//	case 2:
//		{
//			system("cls");
//			cout <<"diem cao ne\n";
//			cout <<"******************************\n";
//			cout <<"bam 0 de quay lai: ";
//			cin >> chon;
//			while(chon!=0)
//			{
//				cin >> chon;
//			}
//			if(chon==0)
//				menu();
//			break;
//		}
//	case 3:
//		{
//			system("cls");
//			cout <<"************about*************\n";
//			cout <<"giao vien huong dan: \n";
//			cout <<"vu dinh bao\n";
//			cout <<"******************************\n";
//			cout <<"bam 0 de quay lai: ";
//			cin >> chon;
//			while(chon!=0)
//			{
//				cin >> chon;
//			}
//			if(chon==0)
//				menu();
//			break;
//		}
//	case 4 :
//		{
//			system("cls");
//			cout <<"good bye see you again \n";
//			cout <<"******************************\n";
//			cout <<"nhan phim bat ki de ket thuc\n";
//			break;
//		}
//	}
//}
