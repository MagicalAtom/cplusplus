/*
در کد زیر ما با استفاده از 
* 
بعد از نوع متغیر که اینجا
int 
هست 
و بعد نام 
متغیر که 
clone 
و برای مقدار متغیر به این صورت
&age
گفتیم یک متغیر پوینتر داریم که اشاره میکنه به جایگاه متغیر 
age 
در حافظه . مقدار متغیر 
age 
رو بعد از چاپ گرفتن 
clone 
خواهیم داشت . 
زیرا از متغیر 
age 
در متغیر 
clone 
کپی گرفتیم . 
برای استفاده هم به این صورت
*clone 
تا بفهمونیم این متغیر ما یک پوینتر هستش



  */


#include <iostream>



int main(){
    int age = 20;
    int* clone = &age;



    std::cout << "Hello World " << *clone;
}






/////// ======================================
#include <iostream>
using namespace std;


int main(){
    string name;
    string* clone1 = &name;
    string* clone2 = &name;

    cout << "Please insert your bot name : ";
    cin >> name;
    cout << "This is Clone 1 ==> " << *clone1;
    cout << "and" << endl;
    cout << "This is Clone 2 ==> " << *clone2;
    cout << "and" << endl;
    puts("Welcome to new world");
}

