#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
int a, b, c;
cout << "MENCARI SISI MIRING SEGITIGA"<<endl;
cout << "Sisi depan sudut = ";
cin >> a;
cout << "Sisi dekat sudut = ";
cin >> b;
c = sqrt((a*a)+(b*b));
cout << "Sisi miring = "<<c<<endl;
getch();
}
