#include <iostream>
using namespace std;

int main(){
int number;
  cout << "Type your number : " << endl;
  // با استفاده خط زیر میگیم بیا از طریق کامند لاین یک عدد چون نوع متغیر عدد هست دریافت کن بریز داخل متغیر نامبر
  // در اصل از متد سین استفاده میکنیم تا ورودی رو از کاربر بگیریم
  cin >> number;
  // به این صورت هم در آخر خط میایم و نامبر رو پرینت میکنیم 
  cout << "Your Selected Number ===> " <<number;
  

  return 0;
}



// یک مثال از کاربر یک عدد میگیره و ضربدر 2 میکنه و خروجی میده 

#include <iostream>
using namespace std;
int main(){
    int number;
    cout << "Please send a number : " << endl;
    cin >> number;
    cout << "your number power 2 : " <<number*2;
}

// مثال ورود به حساب کاربری

#include <iostream>
using namespace std;

int main(){

    string username;
    string password;

    cout << "Insert Username : " << endl;
    cin >> username;

    cout << "Insert Password : " << endl;
    cin >> password;


    if (username == "Mehran" && password == "123456"){
        cout << "Welcome Bro";
    }else{
        cout << "Stop";
    }


}






