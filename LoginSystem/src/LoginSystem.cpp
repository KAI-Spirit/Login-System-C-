/*
* Mo
* First original program
* CAN STORE  username and password
* Designing a simple Menu
* Program will store records
* user can edit records
*/

#include<iostream>

using namespace std;

int main(){

	string CreatedUsername;
	string CreatedPassword;

	cout << "Please create a username: " << flush;
	cin >> CreatedUsername;
	cout << "Username entered" << endl;

	cout << "Please create a password: " << flush;
	cin >> CreatedPassword;
	cout << "Password entered" << endl;
	//cout << CreatedUsername << endl;  //Check users entered username
	//cout << CreatedPassword << endl;  // check users entered password

	string AuthUsername;
	string AuthPassword;
	bool UsernameCheck = 0;
	bool PasswordCheck = 0;

	do {
		cout << "Enter your username: " << flush;
		cin >> AuthUsername;
		cout << "Enter your password: " << flush;
		cin>> AuthPassword;

		UsernameCheck =( AuthUsername == CreatedUsername);
		PasswordCheck = (AuthPassword == CreatedPassword);

		//cout << UsernameCheck << endl;
		//cout << PasswordCheck <<endl;
		//if ((UsernameCheck == 1) && (PasswordCheck==1)){
		//	cout << "Login Accepted" << endl;
		//}
		if((UsernameCheck && PasswordCheck) != 1){
			cout << "Invalid username or password" << endl;
		}

	} while( (UsernameCheck && PasswordCheck) != 1);

	cout << "Hello, please select an option" << endl;
	cout << "1.\tAdd new record " << endl;
	cout << "2.\tDelete new record " << endl;
	cout << "3.\tView record " << endl;
	cout << "4.\tSearch record " << endl;
	cout << "5.\tQuit" << endl;

	string value;
	do{
		cout << "Option: " << flush;
		cin >> value;

		if( value == "1"){
			cout << "Adding new record " << endl;
		}	else if (value == "2"){
			cout << "Deleting record" << endl;
		}	else if(value == "3"){
			cout << "Viewing records" << endl;
		}	else if(value == "4"){
			cout <<"Searching records" << endl;
		}	else if(value == "5"){
			cout << "Quitting Program";
			break;
		}
		else{
			cout << "Invalid Option" << endl;
		}
	}while(value != "5");

	return 0;
}
