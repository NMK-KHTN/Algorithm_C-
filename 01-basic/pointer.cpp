📚 II. Timeline Buổi Học (120 phút)
▶️ 1. Giới thiệu con trỏ – Pointer (15 phút)
Nội dung:

Con trỏ là gì

Pointer lưu cái gì

Tại sao phải dùng con trỏ

Toán tử & và *

Lỗi sai thường gặp

Ví dụ:
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* p = &x;   // p lưu địa chỉ của x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer p stores: " << p << endl;
    cout << "Value pointed by p: " << *p << endl;
}


✔ Bạn nhận ra:

p = địa chỉ

*p = giá trị tại địa chỉ đó

▶️ 2. Con trỏ & Hàm – Pointer to Function Parameters (15 phút)
Nội dung:

Truyền địa chỉ vào hàm để thay đổi biến gốc

Con trỏ = cách truyền tham chiếu trong C/C++

Khi nào dùng: đổi giá trị, swap, sửa mảng

Ví dụ:
void changeValue(int* p) {
    *p = 999; // thay đổi giá trị thật ngoài hàm
}

int main() {
    int x = 10;
    changeValue(&x);
    cout << x; // 999
}

▶️ 3. Con trỏ và mảng – Pointer & Array (20 phút)
Nội dung:

Tại sao mảng là con trỏ

a[i] == *(a+i)

Duyệt mảng bằng con trỏ

So sánh int* vs int[]

Ví dụ 1 — Mảng là con trỏ:
int a[5] = {1, 2, 3, 4, 5};
cout << a;     // địa chỉ
cout << &a[0]; // giống a

Ví dụ 2 — Duyệt mảng bằng pointer:
int a[5] = {1,2,3,4,5};
int* p = a;   // p trỏ vào phần tử đầu

for(int i = 0; i < 5; i++)
    cout << *(p + i) << " ";

▶️ 4. Con trỏ cấp 1 – Con trỏ cấp 2 (20 phút)
Nội dung:

Pointer to pointer → int**

Khi nào dùng: mảng 2D, cấp phát động, vector giả

ví dụ minh hoạ:
int x = 10;
int* p = &x;
int** pp = &p;

cout << **pp;  // 10

Ví dụ cấp phát mảng bằng pointer cấp 2:
int** a = new int*[3];
for (int i = 0; i < 3; i++)
    a[i] = new int[4]; // mảng 3x4

▶️ 5. Con trỏ & Struct – Pointer to Struct (20 phút)
Nội dung:

Trỏ vào struct

Dùng toán tử ->

Hàm nhận struct*

Cấp phát động struct

Ví dụ:
struct Student {
    string name;
    int age;
};

int main() {
    Student s = {"Khai", 18};
    Student* p = &s;

    cout << p->name << endl;
    cout << p->age << endl;

    // cấp phát động
    Student* t = new Student{"Minh", 20};
    cout << t->name;
}

▶️ 6. Con trỏ & cấp phát động – new, delete (15 phút)
Nội dung:

Tại sao phải dùng cấp phát động

new → cấp phát

delete → giải phóng

Lỗi memory leak

Ví dụ:
int* p = new int;
*p = 10;
cout << *p;

delete p; // xóa vùng nhớ


Ví dụ cấp phát mảng:

int* a = new int[100];
delete[] a;

▶️ 7. Tổng kết – Bài luyện tập (15 phút)
Bài tập gợi ý:

Viết hàm swap dùng pointer

Viết hàm tăng giá trị mỗi phần tử trong mảng dùng con trỏ

Tạo struct Student và hàm nhập/xuất bằng pointer

Tạo mảng động 2 chiều bằng con trỏ cấp 2

Viết hàm tháo gỡ vùng nhớ động



Bài tập:

Bài 1
int a = 5;
int *p = &a;
*p = 10;
cout << a;


❓ Hỏi:

Chương trình đúng hay sai?

In ra bao nhiêu?

Bài 2
int a = 7;
int b = 3;
int *p = &a;
p = &b;
*p = 9;
cout << a << " " << b;


❓ Hỏi:

Có lỗi không?

Output là gì?

Bài 3
int a = 4;
int *p;
*p = 10;
cout << a;


❓ Hỏi:

Chương trình biên dịch được không?

Nếu chạy thì đúng hay lỗi runtime?

Bài 4
int a = 6;
int *p = &a;
int **pp = &p;
**pp = 20;
cout << a;


❓ Hỏi:

Output?

*p bằng bao nhiêu?

Bài 5
int a = 1;
int b = 2;
int *p = &a;
int *q = &b;
p = q;
*q = 5;
cout << a << " " << b;


❓ Hỏi:

In ra gì?

p đang trỏ tới biến nào?

🔹 PHẦN B – 5 BÀI TẬP MẢNG 1 CHIỀU & 2 CHIỀU
🟦 MẢNG 1 CHIỀU
Bài 6
int a[] = {1, 2, 3};
int *p = a;
cout << *(p + 1);


❓ Hỏi:

Output?

Bài 7
int a[] = {4, 5, 6};
cout << *(a + 2);


❓ Hỏi:

In ra bao nhiêu?

a + 2 trỏ tới đâu?

Bài 8
int a[] = {10, 20, 30};
int *p = &a[0];
p++;
cout << *p;


❓ Hỏi:

Output?

p trỏ tới phần tử nào?

🟩 MẢNG 2 CHIỀU
Bài 9
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
cout << a[1][2];


❓ Hỏi:

In ra bao nhiêu?

Bài 10
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
cout << *(*(a + 1) + 1);


❓ Hỏi:

Output?

Biểu thức *(a + 1) tương đương gì?
