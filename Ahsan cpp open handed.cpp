#include<iostream>
using namespace std;
int main()
{
	int choice, book;
	cout << "Welcome to our library" << endl;
	cout << "\n 1.Borrow a book";
	cout << "\n 2.Return a book";
	cout << "\nEnter your choice:";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Which book would yopu like to borrow" << endl;
		cin>>book;
		cout << "Thankyou for borrowing this book" << endl;
		cout << "Please return it on time"<<endl;
    }
	else
	{
		int days;
		cout << "Since how long have you had this book:";
		cin >> days;
		if (days != 0)
		{
			cout << "You will be fined" << days << "$"<<endl;
			cout << "Please return it as soon as possible";
	    }
		else
		{
			cout << "Thankyou do visit us again";
     	}
	}	
}