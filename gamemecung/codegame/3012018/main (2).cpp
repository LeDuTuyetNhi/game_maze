#include<iostream>
#include<conio.h>
#include<ctime>
#include"console.h"
using namespace std;
#define DOT_RAN 22
#define max 100
#define len 1
#define xuong 2
#define trai 3
#define phai 4
#define tuongtren 3
#define tuongduoi 23
#define tuongtrai 4
#define tuongphai 50
struct toado
{
	int x, y;
};

toado ran[max];
int sodot = 3;
int diem = 0;

void khoitaoran();
void hienthiran(toado dotcuoicu);
toado randichuyen(int huong);
void batsukien(int &huong);
void taotuong();
bool kiemtrathua();
void xulithua();
toado hienthimoi();
bool kiemtrathucan(toado moi);
void themdot();
void menu();
void luachon(int chon);
void hinhnen(int h);
int nc(char &c);
void kitu(char c);

void main()
{
	int h = 1;
	hinhnen(h);
	Sleep(2000);
	menu();
	system("pause");
}
void khoitaoran()
{
	setTextColor( YELLOW_COLOR);
	ran[0].x = tuongtrai + 3;
	ran[1].x = tuongtrai + 2;
	ran[2].x = tuongtrai + 1;
	ran[0].y = ran[1].y = ran[2].y = tuongtren + 1;
}
void hienthiran(toado dotcuoicu)
{
	setTextColor( YELLOW_COLOR);
	for(int i = 0 ; i < sodot; i++)
	{
		gotoXY(ran[i].x, ran[i].y);
		cout << (char)DOT_RAN;
	}
	gotoXY(dotcuoicu.x, dotcuoicu.y);
		cout<<" ";
}
toado randichuyen(int huong)
{
	toado dotcuoicu = ran[sodot - 1];
	for(int i = sodot - 1; i >= 1; i--)
	{
		ran[i] = ran[i - 1];
	}
	switch(huong)
	{
	case len:
		ran[0].y--;
		break;
	case xuong:
		ran[0].y++;
		break;
	case trai:
		ran[0].x--;
		break;
	case phai:
		ran[0].x++;
		break;
	}
	return dotcuoicu;
}
void dichuyenran(int &huong)
{
	int key = inputKey();
	if(key == 'w' || key == 'W' || key == KEY_UP)
		huong = len;
	else if(key == 's' || key == 'S' || key == KEY_DOWN)
		huong = xuong;
	else if(key == 'a' || key == 'A' || key == KEY_LEFT)
		huong = trai;
	else if(key == 'd' || key == 'D' || key == KEY_RIGHT)
		huong = phai;
}
void taotuong()
{
	setTextColor( GREEN_COLOR);
	for(int i = tuongtrai; i <= tuongphai; i++)
	{
		gotoXY(i, tuongtren);
		cout << (char)220;
	}
	for(int j = tuongtren + 1; j <= tuongduoi; j++)
	{
		gotoXY(tuongtrai, j);
		cout << (char)221;
	}
	for(int i = tuongtrai; i <= tuongphai; i++)
	{
		gotoXY(i, tuongduoi);
		cout << (char)223;
	}
	for(int j = tuongtren + 1; j <= tuongduoi - 1; j++)
	{
		gotoXY(tuongphai, j);
		cout << (char)222;
	}
}
bool kiemtrathua()
{
	if(ran[0].y == tuongtren)
		return true;
	if(ran[0].y == tuongduoi)
		return true;
	if(ran[0].x == tuongtrai)
		return true;
	if(ran[0].x == tuongphai)
		return true;
}
void xulithua()
{
	if(kiemtrathua() == true)
	{
		setTextColor(DARK_WHITE_COLOR);
		Sleep(500);
		clrscr();
		cout << "    ____ _____ _____ ___  ___     ____ _   _____  _____\n";
		cout << "   /    `/ __ `/ __ `__ \/ _ \   / __ \ | / / _ \/ ___/\n";
		cout << "  / /_/ / /_/ / / / / / /  __/  / /_/ / |/ /  __/ /    \n";
		cout << "  \__, /\__,_/_/ /_/ /_/\___/   \____/|___/\___/_/     \n";
		cout << " /____/                                                 \n";
	}
}
toado hienthimoi()
{
	srand(time(NULL));
	int x =	tuongtrai + 1 + rand() % (tuongphai - tuongtrai - 1);
	int y = tuongtren + 1 + rand() % (tuongduoi - tuongtren - 1);
	gotoXY(x,y);
	cout<<"*";
	toado temp;
	temp.x=x;
	temp.y=y;
	return temp;
}
bool kiemtrathucan(toado moi)
{
	if(ran[0].x == moi.x && ran[0].y == moi.y)
		return true;
	return false;
}
void themdot()
{
	ran[sodot] = ran[sodot - 1];
	sodot++;
}
void menu()
{	
	int chon;
	system("cls");
	setTextColor(RED_COLOR);
	cout <<"*********** menu *************\n";
	cout <<"1. play\n";
	cout <<"2. help\n";
	cout <<"3. high score\n";
	cout <<"4. about\n";
	cout <<"5. exit\n";
	cout <<"******************************\n";
	cout <<"nhap lua chon cua ban: ";
	cin >> chon;
	while((chon < 1)||(chon > 5))
	{
		cout <<"nhap lai lua chon cua ban: ";
		cin >> chon;
	}
	luachon(chon);
}
void luachon(int chon) 
{
	switch(chon)
	{
	case 1:
		{
			system("cls");
			setTextColor(3);
			char name[256];
			cout <<"nhap ten cua ban: \n";
			fflush(stdin);
			gets(name);
			int x = 0, y = 0;
			khoitaoran();
			int huong = phai;
			taotuong();
			toado moi = hienthimoi();
			while(1)
			{
				toado dotcuoicu = randichuyen(huong);
				hienthiran(dotcuoicu);
				dichuyenran(huong);
				if(kiemtrathucan(moi) == true)
				{
					moi = hienthimoi();
					themdot();
					diem++;
					gotoXY(tuongphai + 3,tuongtren);
					cout<<"Diem: "<<diem;
				}
					if(kiemtrathua() == true)
						break;
						Sleep(200);
				}
				xulithua();
				cout <<"******************************\n";
				cout <<"bam 0 de quay lai: ";
				cin >> chon;
				while(chon!=0)
				{
					cin >> chon;
				}
				if(chon==0)
					menu();
				break;
			}
	case 2:
		{
			system("cls");
			setTextColor(CYAN_COLOR);
			cout <<"huong dan choi:\n";
			cout <<"bam phia w hoac phim mui ten len de di chuyen len tren\n";
			cout <<"bam phim d hoac phim mui ten phai de di chuyen sang phai\n";
			cout <<"bam phim s hoac phim mui ten xuong de di chuyen xuong duoi\n";
			cout <<"bam phim a hoac phim mui ten trai de di chuyen sang trai\n";
			cout <<"Khi an moi se duoc cong 1 diem\n";
			cout <<"Khi ran dung tuong ran se chet\n";
			cout <<"bam 0 de quay lai: ";
			cin >> chon;
			while(chon!=0)
			{
				cin >> chon;
			}
			if(chon==0)
				menu();
			break;
		}
	case 3:
		{
			system("cls");
			setTextColor(PINK_COLOR);
			cout <<"diem:"<<diem<<endl;
			cout <<"\n******************************\n";
			cout <<"bam 0 de quay lai: ";
			cin >> chon;
			while(chon!=0)
			{
				cin >> chon;
			}
			if(chon==0)
				menu();
			break;
		}
	case 4:
		{
			system("cls");
			setTextColor(GREEN_COLOR);
			cout <<"************about*************\n";
			cout <<"giao vien huong dan: \n";
			cout <<"vu dinh bao\n";
			cout << "nguoi code game\n";
			cout <<"le du tuyet nhi\n";
			cout <<"******************************\n";
			cout <<"bam 0 de quay lai: ";
			cin >> chon;
			while(chon!=0)
			{
				cin >> chon;
			}
			if(chon==0)
				menu();
			break;
		}
	case 5 :
		{
			system("cls");
			setTextColor(5);
			cout << "  _______  _______  _______  ______     _______  __   __  _______ \n";
			cout << " |       ||       ||       ||      |   |  _    ||  | |  ||       |\n";
			cout << " |    ___||   _   ||   _   ||  _    |  | |_|   ||  |_|  ||    ___|\n";
			cout << " |   | __ |  | |  ||  | |  || | |   |  |       ||       ||   |___ \n";
			cout << " |   ||  ||  |_|  ||  |_|  || |_|   |  |  _   | |_     _||    ___|\n";
			cout << " |   |_| ||       ||       ||       |  | |_|   |  |   |  |   |___ \n";
			cout << " |_______||_______||_______||______|   |_______|  |___|  |_______|\n";

			cout <<"******************************\n";
			cout <<"nhan phim bat ki de ket thuc\n";
			break;
		}
	}
}
void hinhnen(int h)
{
	setTextColor (BLUE_COLOR);                                                                                     
cout << "	  /$$$$$$                      /$$   /$$          \n";
	cout << "        /$$__  $$                    | $$  /$$/          \n";
	cout << "       | $$  \__/ /$$$$$$$   /$$$$$$ | $$ /$$/   /$$$$$$ \n";
	cout << "       |  $$$$$$ | $$__  $$ |____  $$| $$$$$/   /$$__  $$\n";
	cout << "        \____  $$| $$  \ $$  /$$$$$$$| $$  $$  | $$$$$$$$\n";
	cout << "        /$$  \ $$| $$  | $$ /$$__  $$| $$\  $$ | $$_____/\n";
	cout << "       |  $$$$$$/| $$  | $$|  $$$$$$$| $$ \  $$|  $$$$$$$\n";
	cout << "        \______/ |__/  |__/ \_______/|__/  \__/ \_______/\n";
	cout << "                                                         \n";            
}
