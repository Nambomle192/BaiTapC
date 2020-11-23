Bài 1: Chuong trình v?i hàm IndexOf dó th?a mãn yêu c?u d? bài:
#include <iostream>
using namespace std;
int indexof(char* s, char c)
{ 
for (int i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return i;
}
}
return -1;
}
int main() {
char s[] = "helloworld";
cout << indexof(s, 'c');
return 0;
}

Bài 2: Chuong trình v?i hàm substring dó th?a mãn yêu c?u d? bài:
#include <iostream> 
#include <string>
using namespace std; 
char* substring(char* s, int index, int length)
{
char* p = new char[length];
memcpy(p, s + index, length);
return p;
}

int main()
{
char s[] = "hello world";
cout << substring(s, 2, 3);
return 0;
}
