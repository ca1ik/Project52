#include <iostream>
using namespace std;
int main() {
 int mark[5] = {19, 10, 8, 17, 9};
 // 4. elemani 9 olarak degistir
 mark[3] = 9;
 // kullanicidan girdi al
 // degeri ucuncu konumda sakla
 cin >> mark[2];
  int length = sizeof(mark) / sizeof(mark[0]);
    cout << "Dizinin uzunluðu: " << length << endl;
 // kullanicidan girdi al
 // i. konuma ekle
 int i = 3;
 cin >> mark[i - 1];
 // dizinin ilk ögesini yazdir
 cout << mark[0]<<"\n";
 // dizinin i. ögesini yazdir
 cout << mark[i - 1]<<"\n";
 for (int i = 0; i < length; i++) {
        cout << mark[i] << "\t";
    }
    cout << endl;
 
 system("pause");
 return 0;
}
