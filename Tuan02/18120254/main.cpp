#include "List.h"


int main()
{
	// tao danh sach vat nuoi
	List l;
	int n;
	cout << "**Nhap so dong vat ban muon tao: ";
	cin >> n;
	l.Input(l, n);
	cout << endl << "---DANH SACH DA NHAP---" << endl;
	l.Output(l);
	// them vat nuoi
	int nTHEM;
	cout << "**Nhap so vat nuoi muon them: ";
	cin >> nTHEM;
	for (int i = 0; i < nTHEM; i++)
	{
		CvatNuoi p;
		cout << "**Nhap thong tin cho vat nuoi them thu " << i + 1 << endl;
		cin >> p;
		Node* q = l.getNode(p);
		l.AddTail(l, q);
	}
	cout << endl << "---DANH SACH DA THEM---" << endl;
	l.Output(l);
	// xoa vat nuoi theo ma so
	string masoXOA;
	cout << "**Nhap ma so vat nuoi muon xoa: ";
	cin >> masoXOA;
	l.DelByMAso(masoXOA);
	cout << endl << "---DANH SACH DA XOA---" << endl;
	l.Output(l);
	//xem danh sach vat nuoi theo loai
	string loaiXEM;
	cout << "**Nhap loai vat nuoi muon xem: ";
	cin >> loaiXEM;
	cout << endl << "---DANH SACH VAT NUOI MUON XEM---" << endl;
	l.OutputLOAI(loaiXEM);
	// nhap don dat hang
	string muaLOAI;
	float maxKG;
	cout << "**Nhap loai vat nuoi muon mua: ";
	cin >> muaLOAI;
	cout << "**Nhap trong luong toi da can mua: ";
	cin >> maxKG;
	cout << "---THONG TIN DON HANG---"<<endl;
	l.DatHang(muaLOAI,maxKG);
	// sap xep danh sach vat nuoi theo can nang
	l.bubbleSortCAN();
	cout << "---DANH SACH SAU KHI DA SAP XEP THEO CAN NANG---" << endl;
	l.Output(l);
	system("pause");
	return 0;
}