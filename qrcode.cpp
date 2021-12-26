#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

#define RED "\e[0;31m"
#define BLUE "\e[0;34m"
#define RESET "\e[0m"

void parola(string password)
{
  int len = password.length();
  system("cls");
  cout << "Parola wifi-ului tau este: ";
  for (int i = 0; i < len; i++)
  {
    cout << RED << "*";
  }
  cout << " (" << len << ")\n";
}

int main()
{
  string SSID, password, encryption, link_start, link_end, link;
  link_start = "https://chart.googleapis.com/chart?chs=500x500&cht=qr&chl=";
  link_end = "&choe=UTF-8.jpg";
  int _encryption;
  cout << "Introdu SSID-ul wifi-ului tau: ";
  getline(cin, SSID);
  system("cls");
  cout << "Alege criptarea folosita de wifi-ului tau. (1-4)\n";
  cout << "[1] WPA\n"
       << "[2] WPA2\n"
       << "[3] WPA3\n"
       << "[4] WEP\n";
  cin >> _encryption;
  system("cls");
  switch (_encryption)
  {
  case 1:
    encryption = "WPA";
    break;
  case 2:
    encryption = "WPA2";
    break;
  case 3:
    encryption = "WPA3";
    break;
  case 4:
    encryption = "WEP";
    break;
  default:
    cout << "Criptare invalida! Reincearca.\n";
    _sleep(3000);
    return 0;
  }
  cout << "Introdu parola wifi-ului tau: ";
  cin >> password;
  system("cls");
  for (int i = 5; i != 0; i--)
  {
    if (i == 1)
      cout << "Link-ul tau este gata intr-o secunda";
    else
      cout << "Link-ul tau este gata in " << i << " secunde";
    _sleep(1000);
    system("cls");
  }
  parola(password);
  link = link_start + "WIFI:T:" + encryption + ";S:" + SSID + ";P:" + password + ";H:;" + link_end + "\n";
  cout << RESET << "Link-ul este: " << BLUE << link << RESET << "\n";
  system("pause");
}
