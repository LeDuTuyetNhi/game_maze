///*
//███████████		████		████	███			███			██████		█████		███		  ████████
//███		 ███	████		████	███			███		  ██████████	███████		███		 ████   ████
//███		 ███	████		████	███			███		████	  ████	███	 ███	███		███
//███		 ███	████		████	███			███		████	  ████	███	  ███	███		███
//███████████		████████████████	███			███		████	  ████	███    ███	███		███		█████
//███				████		████	███			███		████	  ████	███		███ ███		███		  ███
//███				████		████	███			███		████	  ████	███		 ██████		███		  ███
//███				████		████	 █████████████		  ██████████	███		  █████		 ███	 ███
//███				████		████	  ███████████			██████		███		   ████		  █████████
//*/
//#include<iostream>
//#include <stdio.h>
//#include <conio.h>
//#include "console.h"
//#include<Windows.h>
//using namespace std;
//
//#define XUONG 1
//#define LEN 2
//#define TRAI 3
//#define PHAI 4
//enum trangthai {LEFT, RIGHT, UP, DOWN};
//struct toado
//{
//	int x, y;
//};
//struct Snake
//{
//	toado dot[1000];
//	int n;
//	trangthai tt;
//};
//struct Moi
//{
//	toado td;
//};
//struct Tuong
//{
//	toado Td;
//};
////================================CHAO MUNG DEN VOI GAME==========================================//
//void welcom()
//{
//	cout << "\n\n\n\n\t\t\t_________________Chao mung ban den voi game snake huyen thoai_________________";
//	cout << "\n\n\t\t\t\t\t\t\tLOADING...";
//	Sleep(3000);
//}
////================================MENU CHINH========================================================//
//void menu()
//{
//	clrscr();
//			setTextColor(13);
//			  	cout << "\n\n\n\n\t\t\tCHAO MUNG DEN VOI GAME SNAKE";
//			  	cout << "\n\t\t\t\t1.PLAY GAME";
//			  	cout << "\n\t\t\t\t2.LOAD MAP";
//			  	cout << "\n\t\t\t\t3.SPEED";
//			  	cout << "\n\t\t\t\t4.SCORE";
//			  	cout << "\n\t\t\t\t5.ABOUT";
//				cout << "\n\t\t\t\t6.HELP";
//			  	cout << "\n\t\t\t\t7.EXIT";
//				cout << "\n\t\t\t...................................";
//				cout << "\n\t\t\t\tXin moi chon chuc nang: ";
//}
////=================================TRO GIUP===========================================================//
//void help()
//{
//	setTextColor(12);
//	cout << "\n\n\n\n\t\t\t\tHELP";
//	cout << "\n\t\t\t\tA qua trai";
//	cout << "\n\t\t\t\tD qua phai";
//	cout << "\n\t\t\t\tW di len";
//	cout << "\n\t\t\t\tS di xuong";
//	cout << "\n\t\t\t\t1.Back";
//	cout << "\n\t\t\t\tChon: ";
//}
////==============================THONG TIN TAC GIA=================================================//
//void about()
//{
//	clrscr();
//	setTextColor(11);
//	cout << "\n\n\n\n\t\t\t\tNguyen Minh Phuong";
//	cout << "\n\t\t\t\tDo Tran Bao Lam";
//	cout << "\n\t\t\t1.Back			2.Exit";
//	cout << "\n\t\t\t\tChon: ";
//}
////===================================TOC DO========================================================//
//void speed()
//{
//	clrscr();
//	setTextColor(14);
//	cout << "\n\n\n\n\t\t\t\tSPEED";
//	cout << "\n\t\t\t\t1.Back";
//	cout << "\n\t\t\t\t2.Easy";
//	cout << "\n\t\t\t\t3.Normal";
//	cout << "\n\t\t\t\t4.Hard";
//	cout << "\n\t\t\t\tChon: ";
//}
////=====================================MAP=======================================================//
//void menumap()
//{
//	clrscr();
//	setTextColor(13);
//	cout << "\n\n\n\n\t\t\t\tMENU";
//	cout << "\n\t\t\t\t1.Back";
//	cout << "\n\t\t\t\t2.Map 1";
//	cout << "\n\t\t\t\t3.Map 2";
//	cout << "\n\t\t\t\tChon: ";
//}
////======================================DIEM CAO====================================================//
//void DiemCao()
//{
//	clrscr();
//	setTextColor(13);
//	cout << "\n\n\n\n\t\t\t\tDIEM CAO";
//	cout << "\n\t\t\t\t1.Back";
//	cout << "\n\t\t\t\tHang 1: ";
//	cout << "\n\t\t\t\tHang 2:";
//	cout << "\n\t\t\t\tHang 3:";
//	cout << "\n\t\t\t\tChon: ";
//}
////===================================TAO MOI VA SNAKE====================================================//
//void khoitao(Snake &snake,Moi &moi)
//{
//	//_________Toa do ban dau cua snake__________
//	snake.n = 3;
//	snake.dot[0].x = 2;
//	snake.dot[0].y = 2;
//	snake.tt = RIGHT;
//	//__________Toa do ban dau cua food__________
//	moi.td.x = 15;
//	moi.td.y = 15;
//}
////=======================================HIEN THI==============================================//
//void hienthi(Snake snake, Moi moi)
//{
//	clrscr();
//	//Ran nhay toi toa do x, y, in ra ran
//		gotoXY(snake.dot[0].x, snake.dot[0].y);
//		 for (int i = 0; i < snake.n; i++)
//		 {
//			 setTextColor(2+rand()%13);
//			 gotoXY(snake.dot[i].x, snake.dot[i].y);
//			 cout<<"*";
//		 }
//	//In ra moi
//		gotoXY(moi.td.x, moi.td.y);
//		 {
//			setTextColor(2 + rand() % 14);
//			 cout << "x";
//		 }
//}
////========================================DIEU KHIEN=================================================//
//void dieukhien(Snake &snake)
//{
//	//Truyen truyen trang thai cho cac dot sau
//	for (int i = snake.n - 1; i > 0; i--)
//		snake.dot[i] = snake.dot[i - 1];
//	//Lenh dieu khien con ran
//	if (_kbhit())
//	{
//		int key = _getch();
//		if (key == 'A' || key == 'a')
//			snake.tt = LEFT;
//		else  if (key == 'd' || key == 'D')
//			snake.tt = RIGHT;
//		else  if (key == 'W' || key == 'w')
//			snake.tt = UP;
//		else  if (key == 'S' || key == 's')
//			snake.tt = DOWN;
//	}
//		if (snake.tt == UP)
//			snake.dot[0].y--;
//		else if (snake.tt == DOWN)
//			snake.dot[0].y++;
//		else if (snake.tt == LEFT)
//			snake.dot[0].x--;
//		else if (snake.tt == RIGHT)
//			snake.dot[0].x++;
//}
////=====================================XU LY GAME=======================================================//
//int xuly(Snake &snake, Moi &moi,Tuong &tuong)
//{
//	//Toa do ran trung toa do moi thi ran them dot
//	if (snake.dot[0].x == moi.td.x && snake.dot[0].y == moi.td.y)
//	{
//		snake.n++;
//	//Moi xuat hien ngau nhien trong random
//		moi.td.x = 2 + rand() % 74;
//		moi.td.y = 2 + rand() % 27;
//	}
//	//Ran xuyen tuong
//	if (snake.dot[0].x > 74)
//		snake.dot[0].x = 1;
//	if (snake.dot[0].x < 1)
//		snake.dot[0].x = 74;
//	if (snake.dot[0].y > 28)
//		snake.dot[0].y = 1;
//	if (snake.dot[0].y < 1)
//		snake.dot[0].y = 28;
//	//Xu ly thua game neu ran can than
//	for (int i = 1; i < snake.n; i++)
//	{
//		if (snake.dot[0].x == snake.dot[i].x && snake.dot[0].y == snake.dot[i].y)
//			return -1;
//	}
//	//Xu ly thua game neu ran can chuong ngai vat(chua xong)
//	if (snake.dot[0].x == tuong.Td.x && snake.dot[0].y == tuong.Td.y)
//		return -1;
//}
////=====================================BUC TUONG================================================//
//void Tuong1(Tuong &tuong)
//{
//	gotoXY(tuong.Td.x, tuong.Td.y);
//	{
//		for (int i = 10; i < 15; i++)
//		{
//			gotoXY(10, i);
//			setTextColor(2 + rand() % 14);
//			cout << char(35);
//		}
//	}
//	gotoXY(tuong.Td.x, tuong.Td.y);
//	{
//		for (int i = 25; i < 20; i++)
//		{
//			gotoXY(25, i);
//			setTextColor(2 + rand() % 14);
//			cout << char(35);
//		}
//	}
//	gotoXY(tuong.Td.x, tuong.Td.y);
//	{
//		for (int i = 10; i < 15; i++)
//		{
//			gotoXY(40, i);
//			setTextColor(2 + rand() % 14);
//			cout << char(35);
//		}
//	}
//	gotoXY(tuong.Td.x, tuong.Td.y);
//	{
//		for (int i = 5; i < 20; i++)
//		{
//			gotoXY(55, i);
//			setTextColor(2 + rand() % 14);
//			cout << char(35);
//		}
//	}
//	gotoXY(tuong.Td.x, tuong.Td.y);
//	{
//		for (int i = 10; i < 15; i++)
//		{
//			gotoXY(70, i);
//			setTextColor(2 + rand() % 14);
//			cout << char(35);
//		}
//	}
//}
////===================================================================================================//
////void Tuong2(Tuong &tuong)
////{
////	gotoXY(tuong.Td.x, tuong.Td.y);
////	{
////		for (int i = 5; i < 20; i++)
////		{
////			gotoXY(25, i);
////			setTextColor(2 + rand() % 14);
////			cout << char(35) << char(35) << char(35);
////			cout << char(35) << char(35) << char(35);
////			cout << char(35) << char(35) << char(35);
////		}
////	}
////	gotoXY(tuong.Td.x, tuong.Td.y);
////	{
////		for (int i = 5; i < 20; i++)
////		{
////			gotoXY(55, i);
////			setTextColor(2 + rand() % 14);
////			cout << char(35) << char(35) << char(35);
////			cout << char(35) << char(35) << char(35);
////			cout << char(35) << char(35) << char(35);
////		}
////	}
////}
////===========================================DIEM(chua xong)====================================================//
//void TinhDiem(Snake &snake, Moi &moi)
//{
//	int diem = 0;
//	gotoXY(80, 15);
//	cout << "score:";
//	while (snake.dot[0].x == moi.td.x && snake.dot[0].y == moi.td.y)
//	{
//		diem++;
//		cout << diem;
//	}
//}
////=========================================HAM CHINH================================================//
//int main()
//{
//	int LC, dieukien, About, lc, sp, map, hep, dc;
//	Snake snake;
//	Moi moi;
//	Tuong tuong;
//	khoitao(snake, moi);
//	welcom();
//	do
//	{
//		//tgs = thoigiansleep;
//		clrscr();
//		//Lua chon cua menu
//		menu();
//		cin >> LC;
//		switch (LC)
//		{
//			//Thoat tro choi
//		case 7:
//		{
//			exit(0);
//		}
//			//Giup do
//		case 6:
//		{
//			clrscr();
//			help();
//			cin >> hep;
//			if (hep == 1)
//				lc = 1;
//			break;
//		}
//			//Thong tin tac gia
//		case 5:
//		{
//			clrscr();
//			about();
//			cin >> About;
//			if (About == 1)
//				lc = 1;
//			break;
//		}
//			//Diem cao nhat
//		case 4:
//		{
//			clrscr();
//			DiemCao();
//			cin >> dc;
//			if (dc == 1)
//			{
//				lc = 1;
//				break;
//			}
//		}
//			//Chon toc do
//		case 3:
//		{
//			clrscr();
//			speed();
//			cin >> sp;
//			if (sp == 1)
//				lc = 1;
//			break;
//		}
//			//Chon map
//		case 2:
//		{
//			clrscr();
//			menumap();
//			cin >> map;
//			if (map == 1)
//				lc = 1;
//			break;
//		}
//		//play game
//		case 1:
//		{
//			while (1)
//			{
//				//Hien thi thuc an va con ran
//				hienthi(snake, moi);
//				//Tinh diem
//				TinhDiem(snake, moi);
//				//In ra buc tuong
//				Tuong1(tuong);
//				//Tuong2(tuong);
//				//Dieu khien con ran
//				dieukhien(snake);
//				//Thua game, thong bao diem va tro lai menu chinh
//				dieukien = xuly(snake, moi, tuong);
//				if (dieukien == -1)
//				{
//					lc = 1;
//					break;
//				}
//				Sleep(100);
//			}
//		}
//		}
//	} while (lc == 1);
//	return 0;
//}