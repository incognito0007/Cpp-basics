#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

class Employee{
        public:
        string name;
        int salary;

        Employee(string name, int salary, int sp)
        {
            this->name = name;
            this->salary = salary;
            this->secretPassword = sp;
        }

        void printDetails(){
            cout<<"the name of our first employee is "<<this->name<<" and his salary is "<<this->salary<<" dollar"<<endl;
        }

        void getSecretPassword()
        {
            cout<<"the secret password is "<<this->secretPassword;
        }

        private:
            int secretPassword;
    };

    class Programmer : public Employee
    {
        public:
            int errors;
    };

// int subtract(int a, int b)
// {
//     int c;
//     c = a - b;
//     return c;
// }


int main()
{
    // cout<<"hello world"<<endl;
    // cout<<"Next line";
    // int a, b, c;
    // short sa=9;
    // short s2344556?7a=12;
    // cout<<sa<<s23445567a;

    // camelCase Notation
    // int marksInMaths=83;
    // cout<<"The marks of the students in math is "<<marksInMaths;

    // short a;
    // int b;
    // long c;
    // long long d;
    // float score=45.32;
    // float const score=45.32; //the const will not allow the score to cahnge
    // double score2=45.323;
    // long double score3=45.3245;

    // score=35; //this score will overwrite the previous score and change the output

    // cout<<"the score is "<<score;

    // int a, b;
    // cout<<"Enter the first number";
    // cin>>a;

    // cout<<"enter second number";
    // cin>>b;

    // cout<<"a+b is "<<a+b<<endl;
    // cout<<"a-b is "<<a-b<<endl;
    // cout<<"a*b is "<<a*b<<endl;
    // cout<<"a/b is "<<(float)a/b<<endl;

    // int age;
    // cout<<"enter your age";
    // cin>>age;
    // if (age>150)
    // {
    //     cout<<"invalid age";
    // }
    // else if (age>18)
    // {
    //     cout<<"you can vote";
    // }

    // else{
    //     cout<<"you cannot vote";
    // }

    // int age;
    // cout << "enter your age";
    // cin >> age;
    // switch (age)
    // {
    // case 12:
    //     cout << "you are 12 years old";
    //     break;
    // case 18:
    //     cout << "you are 18 years old";
    //     break;

    // default:
    //     cout << "you are niether 12 nor 18 years old";
    //     break;
    // }

    // int index = 0;
    // while (index<34)
    // {
    //     cout<<"WE are at index number "<<index<<endl;
    //     index = index+1;
    // }

    // do
    // {
    //     cout << "WE are at index number " << index << endl;
    //     index = index + 1;
    // } while (index < 37);

    // for (int i = 5; i < 34; i++)
    // {
    //     cout<<"the value of i is "<<i<<endl;
    // }

    // int x, y;
    // cout<<"Enter the first number"<<endl;;
    // cin>>x;

    // cout<<"enter second number"<<endl;;
    // cin>>y;
    // cout<<"the function return "<<add(x,y)<<endl;
    // cout<<"the function return "<<subtract(x,y)<<endl;

    // int arr[3] = {5, 8, 11};
    // cout<<arr[2];

    // int marks[6];

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"marks of "<< i <<"th student is"<<endl;
    //     cin>>marks[i];
    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"marks of "<< i <<"th student is "<<marks[i]<<endl;
    // }
    

    // int arr2d[4][3]{
    //     {1,2,3},
    //     {4,5,6},
    //     {7, 8, 9},
    //     {10, 11, 12}
    // };

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"the value at "<<i<<", "<<j<<" is"<<arr2d[i][j]<<endl;
    //     }  
    // }
    


    // int a = 344;
    // int b = 82.54;
    // cout<<(float) a/39<<endl;

    // cout<<(int) b;

    // string name = "harry";
    // cout<<"the name is "<<name<<endl;
    // cout<<"the name length is "<<name.length()<<endl;
    // cout<<"the name is "<<name.substr(0,3)<<endl;
    // cout<<"the name is "<<name.substr(2,3)<<endl;

    // int a = 34;
    // int* ptra;
    // // ptra = &a;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of a is "<<*ptra<<endl;
    // cout<<"the address of a is "<<ptra<<endl;
    // cout<<"the address of a is "<<&a<<endl;

    Employee har("Ankit", 10000, 123456);
    // har.name = "ankit";
    // har.salary = 1000;
    har.printDetails();
    har.getSecretPassword();
    // cout<<har.secretPassword;
    // cout<<"the name of our first employee is "<<har.name<<" and his salary is "<<har.salary<<endl;














    return 0;
}