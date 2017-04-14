BT 01)
p3 = &d;
cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
==> Output: *p3 = B, p3 = 0x5678
p3 = p1;
cout << "*p3 = " << *p3 << ", p3 = " << p3 << endl;
==> Output: *p3 = A, p3 = Ox1234
*p1 = *p2
cout << "*p1 = " << *p1 << ", p1 = " << p1 << endl;
==> Output: *p1 = B, p1 = 0x1234

BT02)
Lệnh *p = 5 gán cho i = 5

BT03)
	char c = 'C';
	double *p = &c;
Lỗi vì c có kiểu dữ liệu char thì con trỏ phải khai báo là char *p = &c
( Con trỏ trỏ đến kiểu dữ liệu dạng char ) chứ không được là double

