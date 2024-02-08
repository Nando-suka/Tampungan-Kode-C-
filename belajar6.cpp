#include <iostream>
#include <ctime>

using namespace std;

//inisialisasi ubah nama
string ubahNama ();
//inisialisasi satikar
int satikvar ();

int main ()
 {
   long sec;
   //pemanggilan fugsi satikvar
   satikvar();
   satikvar();
   satikvar();
   //pemanggilan fungsi ubahNama
   ubahNama ();
   ubahNama ();
   ubahNama ();
   ubahNama ();
   ubahNama ();
   time (&sec);
   string tm = ctime (&sec);
   cout << "Waktu	: " << tm << endl;
    return 0;
 }

int satikvar ()
 {
   static int bilangan = 10;
   ++bilangan;
   cout << bilangan;
   cout << endl;
   return bilangan;
 }

string ubahNama ()
 {
   string nama [5] = {"Eko","Kaoru","Kage","Kubo","Yuniams"}; //pendeklarasian larik nama
   static int i = -1; //membuat variabel int static
   i++; //dilakukan proses increment
   nama [i]; //peneguhan larik nama dengan parameter i
   cout << nama [i]; //menampilkan variabel string nama dengan larik dan parameter i
   cout << endl; //mengakhiri
   return nama [i]; //mengembalikan nilai fungsi string
 }
