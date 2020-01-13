//#include<iostream>
//#include<ctime>
//#include "console.h"
//using namespace std;
//#define DOT_RAN 254
//#define max 100
//#define len 1
//#define xuong 2
//#define trai 3
//#define phai 4
//#define tuongtren 8
//#define tuongduoi 33
//#define tuongtrai 9
//#define tuongphai 53
//struct toado
//{
//	int x;
//	int y;
//};
//toado ran[max];
//int sodot= 3;//so luong phan tu cua mang
//int diem = 0;
//int d = 0;
//void khoitaoran()
//{
//	ran[0].x= tuongtrai+3;
//	ran[1].x= tuongtrai+2;
//	ran[2].x= tuongtrai+1;
//	ran[0].y = ran[1].y = ran[2].y= tuongtren+1;
//}
//void hienthiran(toado dotcuoicu)
//{
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
//int key=inputKey();
//if(key== KEY_UP)
//{
// huong= len;
//}
//else if(key== KEY_DOWN)
//{
//huong= xuong;
//}
//else if(key==KEY_LEFT)
//{
//huong= trai;
//}
//else if(key== KEY_RIGHT)
//{
//huong= phai;
//}
//}
//void taotuong()
//{
//for(int a=tuongtrai ; a<=tuongphai ; a++)
//{
//	gotoXY(a,tuongtren);
//	cout << (char)220;
//}
//
//for(int b = tuongtren +1; b <= tuongduoi ; b++)
//{
//	gotoXY(tuongtrai,b);
//	cout << (char)221;
//}
//for(int a = tuongtrai; a<= tuongphai ; a++)
//{
//	gotoXY(a,tuongduoi);
//	cout << (char)223;
//}
//
//for(int b = tuongtren+1; b <= tuongduoi-1 ; b++)
//{
//	gotoXY(tuongphai,b);
//	cout << (char)222;
//}
//}
//bool kiemtrathua()
//{
//if(ran[0].y== tuongtren)
//	return true;// dung co nghia la da thua
//if(ran[0].y==tuongduoi)
//	return true;
//if(ran[0].x==tuongphai)
//	return true;
//if(ran[0].x==tuongtrai)
//	return true;
//
//}
//void xulithua()
//{
//if(kiemtrathua()==true)
//{
//	Sleep(500);
//	clrscr();
//	cout<<" Game Over ! Good Luck Next time Baby ...";
//}
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
//if(ran[0].x==moi.x && ran[0].y==moi.y)
//{
//return true;
//}
//else 
//{
//return false;
//}
//}
//void themdot()
//{
//	ran[sodot] = ran[sodot -1];
//	sodot++;
//}
//void main()
//{
//	system("cls");
//	/*int i;
//	for( i=0;i<256;i++)
//	{
//		cout<< i << " : " (char)i <<endl;
//	}*/
//	khoitaoran();
//	
//	int x=0,y=0;
//	int huong = phai;
//	int diem=0;
//	taotuong();
//	toado moi= hienthimoi();
//	while(1)	
//	{
//		//clrscr();
//		toado dotcuoicu = randichuyen(huong);
//		hienthiran( dotcuoicu);
//		if(kiemtrathucan(moi)==true)
//		{
//			moi = hienthimoi();
//			themdot();
//			diem++;
//			gotoXY(tuongphai+3, tuongtren);
//			cout<<" Diem: "<<diem;
//		}
//		batsukien(huong);
//		if(kiemtrathua()==true)
//			break; 
//		Sleep(300);
//		}
//	xulithua();
//	system("pause");
//}