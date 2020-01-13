//#include  <iostream>
//#include "console.h"
//#include <string.h>
//#include <cstdlib>
//#include <ctime>
//#include <io.h>
//#include <io.h>
//#include <fcntl.h>
//#include <string.h>
//using namespace std;
//#define LEN 1
//#define XUONG 2
//#define TRAI 3
//#define PHAI 4
//#define DUNG 0
//#define DAU 5
//int huong=DAU;
//int phim;
//int key=inputKey();
//int maze [24][46] =
//{
//{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
//{0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,3,1,1,0,1,0,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,0,0,0,1,1,0},
//{0,1,1,0,0,0,0,1,1,1,1,1,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,0,1,1,1,0,1,1,1,0,0,0,1,1,1,0,1,1,1,0},
//{0,1,1,1,1,1,1,1,0,0,0,1,1,1,0,1,1,1,1,1,1,0,1,1,3,1,1,0,1,0,1,0,1,0,1,1,1,0,1,0,1,1,1,1,1,0},
//{0,0,0,1,0,1,1,1,1,1,0,1,0,1,0,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,1,1,1,0,0,0,1,0,3,0,1,0,0,1,0,0},
//{0,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,0,1,1,1,0,0,1,1,1,1,0,3,0,1,1,1,0,1,1,1,0,1,0,1,0,1,1,1,0},
//{0,1,1,1,0,1,1,1,1,1,1,1,0,1,0,1,1,0,1,0,0,0,0,1,0,1,1,0,1,1,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0},
//{0,1,1,1,0,1,0,0,0,0,0,1,0,0,0,0,1,0,1,1,1,1,0,1,0,1,1,1,1,0,3,0,1,0,1,0,3,1,1,1,0,1,0,0,0,0},
//{0,0,0,0,0,1,0,1,1,0,1,3,1,1,0,1,1,0,1,1,1,0,0,1,0,0,0,0,0,1,1,0,1,0,1,0,1,0,1,1,1,0,0,0,0,0},
//{0,1,1,1,0,1,0,1,0,0,0,0,0,1,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,0,1,1,1,1,1,0,0,0,0,0,1,0,1,0},
//{0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,1,0,0,0,0,0,1,1,0,1,1,1,1,1,0,1,0},
//{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,1,1,1,1,1,1,0,1,0,1,1,1,0,1,0,0,1,0,0,1,0},
//{0,1,1,1,1,1,3,0,0,0,1,1,0,1,1,1,1,1,0,0,3,1,1,1,1,1,0,0,1,1,0,0,1,1,1,1,1,1,1,1,0,1,1,0,1,0},
//{0,0,0,0,0,0,1,0,1,1,1,1,0,1,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0},
//{0,1,1,1,1,0,1,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,1,0,1,0,3,0,0,1,0,1,0},
//{0,1,1,0,1,0,1,1,1,1,1,1,1,1,0,1,1,0,1,0,1,1,0,1,1,1,1,1,1,0,1,1,1,0,1,0,0,1,0,1,0,0,1,0,1,0},
//{0,1,1,0,1,0,0,0,3,1,0,1,0,1,0,0,0,0,3,0,0,0,0,0,0,0,1,0,1,0,1,1,1,1,1,1,0,1,0,1,0,1,1,1,1,0},
//{0,0,0,0,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,0,1,0,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0},
//{0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,0,1,0,0,0,0,0,1,1,0},
//{0,1,1,1,1,1,1,1,3,1,1,1,1,1,0,1,0,0,1,0,0,1,1,1,0,1,0,0,0,0,0,1,0,1,0,1,0,1,1,3,1,1,1,1,1,0},
//{0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,0,3,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,1,1,0,0,1,1,0},
//{0,1,1,1,1,1,1,1,1,0,1,1,1,1,0,0,1,0,1,0,1,0,1,0,1,1,1,1,1,0,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,0},
//{0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,0,1,0,0,0,1,1,1,1,1,0,1,1,0,0,0,1,1,1,1,0,1,0,0,0},
//{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0},
//};
//void di(int &x, int &y, int &xtruoc, int &ytruoc);
//void VTDichden(int &x, int &y);
//void CauHoi(int &x, int &y, int &c);
//void lucky(int &x, int &y, int &c);
//void tuong(int &x, int &y, int &xtruoc, int &ytruoc);
//void vemaze();
//void chan ( int &x, int &y, int &xtruoc, int &ytruoc);
//void menu();
//void luachon(int chon);
//void HinhNen(int h);
//void Vatpham(int &x, int &y, int &c);
//int c=0;	
//
//void main ()
//{   
//
//	int h = 1;
//	HinhNen(h);
//	menu();
//	system("pause");
//}
//void vemaze()
//{
//	for(int i = 0; i < 24; i++)
//	{
//		for(int j = 0; j < 46; j++)
//		{
//			switch (maze[i][j])
//			{
//			case 0:
//				setTextColor( GREEN_COLOR);
//				cout << char(219);
//				break;
//			case 1:
//				cout << " ";
//				break;
//			case 2:
//				setTextColor( RED_COLOR);
//				cout << (char)3;
//				break;
//			case 3:
//				setTextColor(PINK_COLOR);
//				cout << (char)5;
//				break;
//			}
//		}
//		cout << " \n";
//	}
//	cout<<"diem :"<<c;
//}
//void di(int &x, int &y, int &xtruoc, int &ytruoc)
//{
//	setTextColor( CYAN_COLOR);
//	while(1)
//	{
//		Sleep(100);
//		gotoXY(x,y);
//		cout << char(1);
//		int key = inputKey();
//		if (key == 's' || key == 'S')
//		{
//			xtruoc = x;
//			ytruoc = y;
//			gotoXY(xtruoc, ytruoc);
//			cout << " ";
//			y ++;
//			break;
//		}
//		if (key == 'a' || key == 'A')
//		{
//			xtruoc = x;
//			ytruoc = y;
//			gotoXY(xtruoc, ytruoc);
//			cout << " ";
//			x --;
//			break;
//		}
//		if (key == 'd' || key == 'D')
//		{
//			xtruoc = x;
//			ytruoc = y;
//			gotoXY(xtruoc, ytruoc);
//			cout << " ";
//			x ++;
//			break;
//		}
//		if (key == 'w' || key == 'W')
//		{
//			xtruoc = x;
//			ytruoc = y;
//			gotoXY(xtruoc, ytruoc);
//			cout << " ";
//			y --;
//			break;
//		}
//	}
//}
//void tuong(int &x, int &y, int &xtruoc, int &ytruoc)
//{
//	if (maze[y][x] == 0)
//	{
//		x = xtruoc;
//		y = ytruoc;
//	}
//}
//void lucky(int &x, int &y, int &c)
//{
//	int i = y, j = x;
//	if(maze[i][j] != 0)
//	{
//		if((x == 10 && y == 8) || (x == 8 && y == 13) 
//			||(x == 10 && y == 19) || (x == 18 && y == 14)
//			|| (x == 16 && y == 12)|| (x == 8 && y == 1) 
//			|| (x == 5 && y == 6)|| (x == 15 && y == 14)
//			|| (x == 28 && y == 19)|| (x == 27 && y == 19))
//			{
//				for(int i = 1; i <= 5; i ++)
//				{
//					setTextColor(YELLOW_COLOR);
//					cout << endl;
//					cout << "***    **  **  ***** **  ** **  ** " << endl;
//					cout << "***    **  ** **     ****    ****  " << endl;
//					cout << "***    **  ** **     ****     **   " << endl;
//					cout << "******  ****   ***** **  **   **   " << endl;
//					Sleep(500);
//					clrscr();					
//				}
//				c += 3;
//				vemaze();
//			}
//	}
//}
//void chan ( int &x, int &y, int &xtruoc, int &ytruoc)
//{ 
//		if ((x == 16 && y == 3)||(x == 25 && y == 14)||(x == 26 && y == 16)||(x == 44 && y == 20))
//		{
//			int i = y + 1, j = x;
//			maze[i][j] = 0;
//			gotoXY(j, i);
//			cout << char(219);
//		}
//		else if ((x == 16 && y == 5)||(x == 17 && y == 18)||(x == 26 && y == 18))
//		{
//			int i = y - 1, j = x;
//			maze[i][j] = 0;
//			gotoXY(j, i);
//			cout << char(219);
//		}
//		else if ((x == 11 && y == 15)||(x == 16 && y == 17)||(x == 19 && y == 17)||(x == 23 && y == 10)
//			||(x == 24 && y == 15)||(x == 25 && y == 17)||(x == 30 && y == 5)||(x == 31 && y == 18)
//			||(x == 32 && y == 16)||(x == 43 && y == 21))
//		{
//			int i = y, j = x + 1;
//			maze[i][j] = 0;
//			gotoXY(j, i);
//			cout << char(219);
//		}
//		if((x == 18 && y == 17)||(x == 13 && y == 15)||(x == 21 && y == 17)||(x == 26 && y == 15)||(x == 25 && y == 10)
//			||(x == 32 && y == 5)||(x == 10 && y == 22)||(x == 33 && y == 18)||(x == 34 && y == 16))
//		{
//			int i = y, j = x - 1;
//			maze[i][j] = 0;
//			gotoXY(j, i);
//			cout << char(219);
//		}
//}
//void menu()
//{
//	int chon;
//	system("cls");
//	cout << "*********** menu *************\n";
//	cout << "1. play\n";
//	cout << "2. help\n";
//	cout << "3. high score\n";
//	cout << "4. about\n";
//	cout << "5. exit\n";
//	cout << "******************************\n";
//	cout << "nhap lua chon cua ban: ";
//	cin >> chon;
//	while((chon < 1)||(chon > 5))
//	{
//		cout << "nhap lai lua chon cua ban: ";
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
//			clrscr();
//			char name[256];
//			cout << "nhap ten cua ban: \n";
//			fflush(stdin);
//			gets(name);
//			int x = 1, y = 1, xtruoc = 1, ytruoc = 1;
//			clrscr();
//			vemaze();
//		while(1)
//		{ 
//			di(x, y, xtruoc, ytruoc);
//			tuong(x, y, xtruoc, ytruoc);
//			lucky(x, y, c);
//			CauHoi(x, y, c);
//			chan (x, y, xtruoc, ytruoc);
//			Vatpham(x, y, c);
//			if(x == 42 && y == 22)
//			{ 
//				clrscr();
//				c = c + 5;
//				cout << "Diem cua ban la: " << c << endl;
//				for(int i = 0 ; i < 10; i ++)
//				{
//				cout << "*******************************************************************************\n";
//				cout << "*                       .         .                                           *\n";
//				cout << "*                      .  .     .  .                                          *\n";
//				cout << "*                      .   .   .   .                                          *\n";
//				cout << "*                       .  .   .  .                                           *\n";
//				cout << "*                       .         .                                           *\n";
//				cout << "*                      .   O    O  .                                          *\n";
//				cout << "*     YOU WIN!         .     Y     .                                          *\n";
//				cout << "*                       . ( ___ ) .                                           *\n";
//				cout << "*                         .     .                                             *\n";
//				cout << "*                        .  . .  .                                            *\n";
//				cout << "*                       .   >o<   .                                           *\n";
//				cout << "*                                                                             *\n";
//				cout << "*                                      HIGHSCORE:                             *\n";
//				cout << "*                                        "<<c<<"                                   *\n";
//				cout << "*******************************************************************************\n";
//				Sleep(300);
//				clrscr();
//				}
//				break;
//			}
//		}
//				cout << "+ Bam 0 de quay lai: ";
//				cout << "+ Bam phim bat ky de thoat: ";
//				cin >> chon;
//				if(chon != 0)
//					break;
//				if(chon == 0)
//					menu();
//				break;
//		}
//	case 2:
//		{
//			clrscr();
//			cout << "nhan phia d de di chuyen sang phai,a di chuyen sang trai,w di chuyen len tren,s di chuyen xuong duoi." << endl;
//			cout << "Tren duong tim loi thoat khoi me cung ta se vuong nhung chuong ngai vat nhu:gap cau do,gap nhung buc tuong chan lai loi di." << endl;
//			cout << "Dong thoi cung co nhung duong di may man giup ta duoc cong diem ma khong can tra loi cau hoi hoac cac vat pham co gia tri." << endl;
//			cout << "khi an vat pham ta se duoc cong 2 diem dong thoi tra loi cau hoi." << endl;
//			cout << "Khi tra loi cau hoi dung ta duoc cong 1 diem nguoc lai neu tra loi sai se bi tru 1 diem,gap nhung duong di may man duoc cong 3,vat pham duoc cong 2." << endl;
//			cout << "Khi tim duoc loi thoat ban se duoc cong 5 diem, dong thoi xuat ra so diem cao nhat ban dat duoc." << endl;
//			cout << "Chuc cac ban choi game vui ve" << endl;
//			cout << "bam 0 de quay lai: ";
//			cin >> chon;
//			while(chon != 0)
//			{
//				cin >> chon;
//			}
//			if(chon == 0)
//				menu();
//			break;
//		}
//	case 3:
//		{
//			clrscr();
//			cout << "diem cao ne\n";
//			cout << c << endl;
//			cout << "bam 0 de quay lai: ";
//			cin >> chon;
//			while(chon != 0)
//			{
//				cin >> chon;
//			}
//			if(chon == 0)
//				menu();
//			break;
//		}
//	case 4:
//		{
//			clrscr();
//			cout << "************about*************\n";
//			cout << "giao vien huong dan: \n";
//			cout << "vu dinh bao\n";
//			cout << "cac thanh vien:\n";
//			cout << "le thi quynh phuong (c)\n";
//			cout << "le du tuyet nhi\n";
//			cout << "nguyen ngoc hien\n";
//			cout << "tran hoai phong\n";
//			cout << "nguyen pham thien phu\n";
//			cout << "le minh nhut\n";
//			cout << "ly minh nhat\n";
//			cout << "******************************\n";
//			cout << "bam 0 de quay lai: ";
//			cin >> chon;
//			while(chon != 0)
//			{
//				cin >> chon;
//			}
//			if(chon == 0)
//				menu();
//			break;
//		}
//	case 5 :
//		{
//			clrscr();
//			cout << "good bye see you again \n";
//			cout << "******************************\n";
//			cout << "nhan phim bat ki de ket thuc\n";
//			break;
//		}
//	}
//}
//void Vatpham(int &x, int &y, int &c)
//{
//	if ((x == 16 && y == 1) || (x == 24 && y == 3)||(x == 38 && y == 4)||(x == 28 && y == 5)
//		||(x == 30 && y == 7) || (x == 36 && y == 7)|| (x == 11 && y == 8) || (x == 6 && y == 12)
//		||(x == 20&& y == 12) || (x == 39 && y == 14)|| (x == 8 && y == 16) || (x == 18 && y == 16)
//		||(x == 8 && y == 19) || (x == 39 && y == 19) ||(x == 20 && y == 20))
//	{
//		c = c + 2;
//		int i = y, j = x;
//		if(maze[i][j] == 3)
//		{
//			maze[i][j] = 1;
//		}
//		clrscr();
//		vemaze();
//	}
//}
//void CauHoi(int &x, int &y, int &c)
//{
//	while(1)
//	{ 	
//		if((x == 4 && y == 16) || (x == 5 && y == 5) || (x == 6 && y == 17) || (x == 31 && y == 17)
//		|| (x == 9 && y == 19) || (x == 10 && y == 10)|| (x == 12 && y == 8) || (x == 13 && y == 17)
//		|| (x == 14 && y == 10) || (x == 17 && y == 10) || (x == 22 && y == 12)|| (x == 24 && y == 5) 
//		|| (x == 24 && y == 17) || (x == 27 && y == 7)|| (x == 28 && y == 4) || (x == 29 && y == 12)
//		||(x == 16 && y == 1) || (x == 24 && y == 3)||(x == 38 && y == 4)||(x == 28 && y == 5)
//		||(x == 30 && y == 7) || (x == 36 && y == 7)|| (x == 11 && y == 8) || (x == 6 && y == 12)
//		||(x == 20&& y == 12) || (x == 39 && y == 14)|| (x == 8 && y == 16) || (x == 18 && y == 16)
//		||(x == 8 && y == 19) || (x == 39 && y == 19) ||(x == 20 && y == 20))
//		{
//			clrscr();
//			srand(time(NULL));
//			int a = rand() % (40 + 1);
//			string n; 
//			int b;
//			switch (a)
//			{
//			case 1: 
//				cout << " Cau Hoi: Lich nao dai nhat? " << endl;
//				cout << " 1: Treo tuong \n 2:duong lich \n 3: lich su \n 4: am lich" << endl;
//				cin >> b;
//				if (b == 3)
//					c++;
//				else
//				{
//					if (c > 0) c--;
//				}
//				break;
//			case 2: 
//				cout << "Cau hoi: Co mot dan vit, cho biet 1 con di truoc thi co 2 con di sau, 1 con di sau thi co 2 con di truoc, 1 con di giua thi co 2 con di 2 ben. Hoi dan vit do co may con?" << endl;
//				cout << "1. 1 \n2. 2\n3. 3\n4. 4" << endl;
//				cin >> b;
//				if (b == 3)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0)
//						c--;
//				}
//				break;
//			case 3: 
//				cout << "Cau hoi: Quoc ky 11 nuoc Đong Nam A co chung mau gi" << endl;
//				cout << "1. Do\n2. Xanh\n3. Trang\n4. Vang" << endl;
//				cin >> b;
//				if (b == 1)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0) c--;
//				}
//				break;
//			case 4: 
//				cout << "Cau hoi: Linh vuc nao khong co trong giai Nobel" << endl;
//				cout << "1. Van hoc\n2. Y hoc\n3. Hoa hoc \n4. Toan hoc" << endl;
//				cin >> b;
//				if (b == 4)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0) c--;
//				}
//				break;
//			case 5: 
//				cout << "Trong cac don vi do duoi day don vi lon nhat la" << endl;
//				cout << "1. KB\n2. MB\n3. Mb\n4. TB" << endl;
//				cin >> b;
//				if (b == 4)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0) c--;
//				}
//				break;
//			case 6: 
//				cout << "Cau hoi: Cha cua Ly co 5 nguoi con ten thu Nhat, thu Hai, thu Ba, thu Tu, hoi ten cua nguoi con thu 5 la gi?" << endl;
//				cout << "1. Thu 6\n2. Ly\n3. Ut\n4. Ca" << endl;
//				cin >> b;
//				if (b == 2)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0)
//						c--;
//				}
//				break;
//			case 7:
//				cout << "Cau hoi: Benh gi bac sy bo tay?" << endl;
//				cout << "1. HIV\n2. Gay tay\n3. Ung Thu\n4. dien" << endl;
//				cin	>> b;
//				if (b == 2)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0) c--;
//				}
//				break;
//			case 8: 
//				cout << "Cau hoi: O Viet Nam, Rong bay len o dau ?" << endl;
//				cout << "1. Long An\n2. Ha Long\n3. Thang Long\n4. Hue" << endl;
//				cin >> b;
//				if (b == 3)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0) c--;
//				}
//				break;
//			case 9: 
//				cout << "Cau hoi: Con gau truc ao uoc gi ma khong bao gio duoc?" << endl;
//				cout << "1. An Keo\n2. Uong cocacola\n3. Chup Hinh Mau\n4. Da banh" << endl;
//				cin >> b;
//				if (b == 3)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0) 
//						c--;
//				}
//				break;
//			case 10: 
//				cout << "Cau hoi: Que huong cua ong gia tuyet o dau" << endl;
//				cout << "1. Phap\n2. Canada\n3. Phan Lan\n4. Anh" << endl;
//				cin >> b;
//				if (b == 3)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0)
//						c--;
//				}
//				break;
//			case 11: 
//				cout << "Cau hoi: Nha nuoc Van Lang dong do o dau" << endl;
//				cout << "1. Ninh Binh.\n2. Hue.\n3.Ha Noi.\n4. Phu Tho." << endl;
//				cin >> b;
//				if (b == 4)
//				{
//					c++;
//				}
//				else
//				{
//					cout << " Ban tra loi sai " << endl;
//					if (c > 0)
//						c--;
//				}
//				break;
//			case 12: 
//				cout << "Cau hoi: Cai gi danh cha, danh me, danh anh, danh chi, danh em?" << endl;
//				cout << "1. cay gay\n2. roi may\n3. cay choi\n4. Ban chai danh rang" << endl;
//				cin >> b;
//				if (b == 4)
//				{
//					c++;
//				}
//				else
//				{
//					if (c > 0)
//						c--;
//				}
//			break;
//		case 13: 
//			cout << "Cau hoi: Con cua do dai chay dua voi con cua xanh dai. Con nao ve dich truoc?" << endl;
//			cout << "1. cua xanh\n2. cua do\n3. ca 2 con\n4. khong biet" << endl;
//			cin >> b;
//			if (b == 1)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0)
//					c--;
//			}
//			break;
//		case 14: 
//			cout << "Cau hoi: Thanh pho Sai Gon duoc ban tang danh hieu Ho Chi Minh vao nam nao" << endl;
//			cout << "1. 1975\n2. 1976\n3. 1977\n4. 1978" << endl;
//			cin >> b;
//			if (b == 2)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0)
//					c--;
//			}
//			break;
//		case 15: 
//			cout << "Cau hoi: Co mot tau dien di ve huong nam. Gio huong tay bac. Vay khoi cua con tau se theo huong nao?" << endl;
//			cout << "1. dong\n2. Tay\n3. Bac\n4. Khong co huong" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) 
//					c--;
//			}
//			break;
//		case 16: 
//			cout << "Cau hoi: Tu gi ma 100% nguoi Viet Nam deu phat am sai?" << endl;
//			cout << "1. Loan\n2. Viet\n3. Oanh\n4. Sai" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 17: 
//			cout << "Cau hoi: Trieu dai nha Ly ton tai trong thoi gian nao" << endl;
//			cout << "1. 1009-1225\n2. 1008-1225\n3. 1226-1400\n4. 1400-1407" << endl;
//			cin >> b;
//			if (b == 1)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 18: 
//			cout << "Cau hoi: Mieng rong lon nhung khong noi mot tu, la con gi?" << endl;
//			cout << "1. Voi\n2. Ca sau\n3. con Song\n4. con khi" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				 c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 19: 
//			cout << "Cau hoi: Co bao nhieu chu C trong cau sau: [Com, canh, ca, tat ca em deu thich]?" << endl;
//			cout << "1. 1\n2. 2\n3. 4\n4. 5" << endl;
//			cin >> b;
//			if (b == 1)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 20: 
//			cout << "Cau hoi meo: Loai nuoc giai khat nao chua Canxi va Sat?" << endl;
//			cout << "1. CoCaCoLa\n2. Pepsi\n3. CaFe\n4. Sinh To" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//		break;
//		case 21: 
//			cout << "Cau hoi: Cai gi ban khong muon ma tra?" << endl;
//			cout << "1. tien\n2. banh\n3. loi cam on\n4. khong co thu gi" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;	
//		case 22:	
//			cout << "Cau hoi rung ron: Vao luc nua dem dong ho bat chot go 13 tieng, chuyen gi xay ra?" << endl;
//			cout << "1. Co Ma\n2. Chuyen xau den\n3. Ngay Tan The\n4. Mang dong Ho di sua" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 23: 
//			cout << "Cau hoi: Cai gi luon di den ma khong bao gio den noi?" << endl;
//			cout << "1. con gio\n2. Tinh yeu\n3. Ngay mai\n4. khong biet" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 24: 
//			cout << "Cau hoi: Cai gi ma di thi nam, dung cung nam, nhung nam lai dung?" << endl;
//			cout << "1. cai ban\n2. cai ghe\n3. ban chan\n4. ban tay" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 25: 
//			cout << "Cau hoi: Bo me co 6 nguoi con trai, moi nguoi con trai có mot dua em gai. Vay gia dinh do co may nguoi?" << endl;
//			cout << "1. 14\n2. 9\n3. 11\n4. 15" << endl;
//			cin >> b;
//			if (b == 2)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 26: 
//			cout << "Cau hoi: Chong nguoi da den, vo nguoi da trang vua sinh mot dua be, rang cua no mau gi?" << endl;
//			cout << "1. Trang\n2. khong co\n3. thua\n4. bo qua" << endl;
//			cin >> b;
//			if (b == 2)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 27: 
//			cout << "Cau hoi: Co 1 dan chuot diec di ngang qua ho cong, hoi co may con?" << endl;
//			cout << "1. 22\n2. 23\n3. 24\n4. 25" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 28: 
//			cout << "Cau hoi: co 1 nguoi dan ong di qua 2 ngon nui. Hoi ong thay gi?" << endl;
//			cout << "1. ngon nui thu 3\n2. troi\n3. cay\n4. met" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 29: 
//			cout << "Cau hoi: thu quy gia NHAT tren doi nay la gi?" << endl;
//			cout << "1. tuong lai\n2. Qua khu\n3. tien\n4. hien tai" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 30: 
//			cout << "Cau hoi: thu quy gia nhat cua con trai la gi?" << endl;
//			cout << "1. cai gi do kho noi\n2. tien\n3. khuon mat\n4. ngoc trai" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//		break;
//		case 31: 
//			cout << "Cau hoi: dan ong thich gi?" << endl;
//			cout << "1. dan ba\n2. tien\n3. choi\n4. mat ong" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 32: 
//			cout << "Cau hoi: Hoa gi som no toi tan" << endl;
//			cout << "1. Hoa muoi gio\n2. Hoa Huong Duong\n3. Hoa Phu Dung\n4. Hoa Hong" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 33: 
//			cout << "Cau hoi: trai ca gi no bum bum?" << endl;
//			cout << "1. ca tim\n2. ca chua\n3. ca phao\n4. trai bom" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 34: 
//			cout << "Cau hoi: Hoa gi tuong trung cho mat troi?" << endl;
//			cout << "1. Hoa Loa Ken\n2. Hoa Cuc\n3. Hoa sen\n4. Hoa Huong Duong" << endl;
//			cin >> b;
//			if (b == 4)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 35: 
//			cout << "Cau hoi dac biet nhat: ban dang choi gi?" << endl;
//			cout << "1. choi game\n2. choi tro choi\n3. giai cau do\n4. vuot me cung" << endl;
//			cin >> b; 
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 36: 
//			cout << "Cau hoi: 1 cau vong co 7 mau. Hoi 3 cau vong co bao nhieu mau" << endl;
//			cout << "1. 21\n2. 7\n3. khong biet\n4. tua lua mau" << endl;
//			cin >> b;
//			if (b == 2)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 37: 
//			cout << "Cau hoi cap nhat: toa bitexco co hinh dang giong gi?" << endl;
//			cout << "1. Bup sen he no\n2. trai bap\n3. bong sung\n4. khong duoc chon D" << endl;
//			cin >> b;
//			if (b == 1)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 38: 
//			cout << "Cau hoi cap nhat: toa bitexco co hinh dang giong gi?" << endl;
//			cout << "1. Bup sen he no\n2. trai bap\n3. bong sung\n4. khong duoc chon 4" << endl;
//			cin >> b;
//			if (b == 1)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 39: 
//			cout << "Cau hoi meo: 1+1= may ?" << endl;
//			cout << "1. 2\n2. 3\n3. 4\n4. khong biet" << endl;
//			cin >> b;
//			if (b == 1)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		case 40: 
//			cout << "Cau hoi: chu cai dau tien trong Tieng anh la gi ?" << endl;
//			cout << "1. B\n2. C\n3. A\n4. ca 3 dap an tren" << endl;
//			cin >> b;
//			if (b == 3)
//			{
//				c++;
//			}
//			else
//			{
//				if (c > 0) c--;
//			}
//			break;
//		}
//		clrscr();
//		vemaze();
//		}
//		break;
//	}
//}
//void HinhNen(int h)
//{
//	setTextColor( PINK_COLOR);
//	cout<<"*******************************************************************************"<<endl;
//	cout<<"                            ****       ****    "<<endl;
//	cout<<"                             **         **     "<<endl;
//	cout<<"  ****         **** ****    ****    ********    ************"<<endl;
//	cout<<"   ****       ****  ****    ****   ****  ****   ************"<<endl;
//	cout<<"    ****     ****   ****    ****  ****    ****      ****"<<endl;
//	cout<<"     ****   ****    ****    ****  ****    ****      ****"<<endl;
//	cout<<"      **** ****      ****  ****    ****  ****       ****"<<endl;
//	cout<<"       *******        ********      ********        ****"<<endl;
//	cout<<endl; 
//	cout<<"                                       **"<<endl;
//	cout<<"*******************************************************************************"<<endl;
//	cout<<"*******************************************************************************"<<endl;
//	cout<<"                 ***    "<<endl;
//	cout<<"                ** **   "<<endl;
//	cout<<" ***      *** *********    *******  ***   *** ***  ***  *******   "<<endl;
//	cout<<" ****    **** ***         ***   *** ***   *** **** *** ***           "<<endl;
//	cout<<" *****  ***** *******     ***       ***   *** ******** ***  ***** "<<endl;
//	cout<<" *** **** *** ***         ***   *** ***   *** *** **** ***   ***  "<<endl ;
//	cout<<" ***  **  *** *********    *******   *******  ***  ***  *******   "<<endl;
//	cout<<endl;
//	cout<<"*******************************************************************************"<<endl; 
//	Sleep(3000);
//	clrscr();
//}