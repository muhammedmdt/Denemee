
#include <iostream>
using namespace std;

int enBuyuk (int sayi1, int sayi2)
{

if (sayi1 > sayi2)
return sayi1;
else
return sayi2;
}

int main()
{ bas:
int sayi1,sayi2;
cout << "Sayi 1 = ";
cin >> sayi1;

cout << '\n' ;

cout << "Sayi 2 = ";
cin >> sayi2;

int sayi = enBuyuk(sayi1,sayi2);
int ebob(1);

for (int i = sayi ; i > 0 ; i-- )
{
if ((sayi1 % i) == 0 && (sayi2 % i) == 0 )
{
ebob = i;
break;
}
}
cout << '\n' ;
cout << "EBOB = " << ebob << endl;

system("pause");
return 0;
}

