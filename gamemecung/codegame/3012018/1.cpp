//#include<iostream>
//#include<ctime>
//#include"console.h"
//using namespace std;
//
//#define DOT_RAN 22
//#define max 100
//#define len 1
//#define xuong 2
//#define trai 3
//#define phai 4
//#define tuongtren 3
//#define tuongduoi 23
//#define tuongtrai 4
//#define tuongphai 50
//struct toado
//{
//	int x;
//	int y;
//};
//toado ran[max];
//int sodot= 3;
//int diem = 0;
//int d = 0;
//
//void khoitaoran();
//void hienthiran(toado dotcuoicu);
//toado randichuyen(int huong);
//void batsukien(int &huong);
//void taotuong();
//bool kiemtrathua();
//void xulithua();
//toado hienthimoi();
//bool kiemtrathucan(toado moi);
//void themdot();
//void main()
//{
//
//}
//void khoitaoran()
//{
//	setTextColor( YELLOW_COLOR);
//	ran[0].x= tuongtrai+3;
//	ran[1].x= tuongtrai+2;
//	ran[2].x= tuongtrai+1;
//	ran[0].y = ran[1].y = ran[2].y= tuongtren+1;
//}
//void hienthiran(toado dotcuoicu)
//{
//	setTextColor( YELLOW_COLOR);
//	for(int i=0 ; i<sodot ;i++)
//	{
//		gotoXY( ran[i].x , ran[i].y);
//		cout << (char)DOT_RAN;
//	}
//	gotoXY(dotcuoicu.x, dotcuoicu.y);
//    cout<<" ";
//}
//toado randichuyen(int huong)
//{
//	toado dotcuoicu = ran[sodot-1];
//	for(int i=sodot-1; i>=1; i--)
//	{
//		ran[i] = ran[i-1];
//	}
//	switch(huong)
//	{
//	case len:
//		ran[0].y--;
//		break;
//		case xuong:
//		ran[0].y++;
//		break;
//		case trai:
//		ran[0].x--;
//		break;
//		case phai:
//		ran[0].x++;
//		break;
//	}
//	return dotcuoicu;
//}
//void batsukien(int &huong)
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
//void taotuong()
//{
//	setTextColor( GREEN_COLOR);
//	for(int a=tuongtrai ; a<=tuongphai ; a++)
//	{
//		gotoXY(a,tuongtren);
//		cout << (char)220;
//	}
//
//	for(int b = tuongtren +1; b <= tuongduoi ; b++)
//	{
//		gotoXY(tuongtrai,b);
//		cout << (char)221;
//	}
//	for(int a = tuongtrai; a<= tuongphai ; a++)
//	{
//		gotoXY(a,tuongduoi);
//		cout << (char)223;
//	}
//
//	for(int b = tuongtren+1; b <= tuongduoi-1 ; b++)
//	{
//		gotoXY(tuongphai,b);
//		cout << (char)222;
//	}
//}
//bool kiemtrathua()
//{
//	if(ran[0].y== tuongtren)
//		return true;
//	if(ran[0].y == tuongduoi)
//		return true;
//	if(ran[0].x == tuongphai)
//		return true;
//	if(ran[0].x == tuongtrai)
//		return true;
//}
//void xulithua()
//{
//	if(kiemtrathua()==true)
//	{
//		setTextColor(DARK_WHITE_COLOR);
//		Sleep(500);
//		clrscr();
//	cout << "    ____ _____ _____ ___  ___     ____ _   _____  _____\n";
//	cout << "   /    `/ __ `/ __ `__ \/ _ \   / __ \ | / / _ \/ ___/\n";
//	cout << "  / /_/ / /_/ / / / / / /  __/  / /_/ / |/ /  __/ /    \n";
//	cout << "  \__, /\__,_/_/ /_/ /_/\___/   \____/|___/\___/_/     \n";
//	cout << " /____/                                                 \n";
//	}
//}
//toado hienthimoi()
//{
//	d++;
//	srand(time(NULL));
//	int x=tuongtrai+1 +rand()%(tuongphai -tuongtrai-1);
//	int y=tuongtren+1+ rand()%(tuongduoi-tuongtren -1);
//	gotoXY(x,y);
//	cout<<" *";
//	toado temp;
//	temp.x=x;
//	temp.y=y;
//	return temp;
//}
//bool kiemtrathucan(toado moi)
//{
//	if(ran[0].x==moi.x && ran[0].y==moi.y)
//		return true;
//	return false;
//}
//
//void themdot()
//{
//	ran[sodot] = ran[sodot - 1];
//	sodot ++;
//}