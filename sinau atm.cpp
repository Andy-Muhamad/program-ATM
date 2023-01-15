#include <iostream>
#include <unistd.h>

using namespace std;

void garis()
{
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
}
void data()
{
	cout<<"1. daftar pass"<<endl;
	cout<<"2. setor"<<endl;
	cout<<"3. tarik"<<endl;
	cout<<"4. cek saldo"<<endl;
	cout<<"0. keluar"<<endl;
}
void atm()
{
	system("cls");
	garis();
	cout<<">>>>>>>>>>>>>>>>>>> ATM <<<<<<<<<<<<<<<<<<< "<<endl;
	garis();	
}

main()
{
	int menu;
	int saldo;
	int nominal;
	int pin;
	int input[100000];
	char ulang;
	do
	{
		a:
		atm();
		data();
		garis();
		int b=0;
		cout<<"pilih: "<<endl;
		cin>>menu;
	
		
		;switch (menu)
		{
			case 1:
				atm();
				 cout<<endl;
				cout<<">>>>>>>>>>>>>> password baru <<<<<<<<<<<<<<"<<endl;
				cout<<"masukan pin baru anda : ";
				cin>>input[b];
				cout<<endl;
				cout<<"     password baru telah terdaftarkan"<<endl;
				garis();
				sleep(2);
				goto a;
				break;
				
			case 2:
				atm();
				cout<<"masukan pin anda :"<<endl;
				cin>>pin;
				if(pin==input[b])
				{
					cout<<endl;
					garis();
					cout<<">>>>>>>>>>>>>>> fitur setor <<<<<<<<<<<<<<<"<<endl;
					cout<<"masukan nominal: Rp.";
					cin>>nominal;
					saldo = saldo + nominal;
					cout<<"saldo anda sekarang : Rp."<<saldo;
					cout<<endl;
					cout<<"\tsaldo anda telah masuk"<<endl;
					garis();
					sleep(1);
					goto a;
					break;
				}
				else
				{
					atm();
					cout<<"pin anda salah atau belum terdaftar"<<endl;
					garis();
					sleep(1);
				}
				
				
				break;
				
				
			case 3:
				atm();
				cout<<"masukan pin anda :"<<endl;
				cin>>pin;
				if(pin==input[b])
				{
					cout<<endl;	
					garis();
					cout<<">>>>>>>>>>>>>>> fitur tarik <<<<<<<<<<<<<<<"<<endl;
					cout<<"masukan nominal: Rp.";
					cin>>nominal;
					if(nominal>saldo)
					{
						cout<<endl;
						cout<<"\tsaldo anda tidak mencukupi"<<endl;
					}
					else
					{
						cout<<endl;
						saldo=saldo-nominal;
						cout<<endl;
						cout<<"anda telah selesai melakukan tarik tunai"<<endl;
					}
				garis();
				sleep(2);
				goto a;
				break;
				}
				else
				{
					atm();
					cout<<"pin anda salah atau belum terdaftar"<<endl;
					garis();
					sleep(1);
				}
				
			case 4:
				atm();
				cout<<endl;
				garis();
				cout<<">>>>>>>>>>>> fitur cek saldo <<<<<<<<<<<<<<"<<endl;
				cout<<"saldo: Rp."<<saldo;
				cout<<endl;
				garis();
				sleep(2);
				goto a;
				break;
				
			case 0:
				atm();
				cout<<endl;
				cout<<">>>>>>>>>>>> kamu telah keluar <<<<<<<<<<<<"<<endl;
				cout<<endl;
				garis();
				break;
				
			default:
				atm();
				cout<<endl;
				cout<<">>>>>>>>> pernyataan tidak valid <<<<<<<<<<"<<endl;
				cout<<endl;
				garis();
				break;	
		
		}
		cout<<"kembali ke menu?(y/n)"<<endl;
		garis();
		cin>>ulang;
	}while (ulang == 'y');
	return 0;
}
