#include <iostream>
using namespace std;

int main() {
	int batteryLevel;
	int chargingStatus;

	//INPUT STATEMENTS
	cout << "Enter the battery level (0-100): ";
	cin >> batteryLevel;
	cout << "Enter the charging status(0 for not charging, 1 for charging)";
	cin >> chargingStatus;

	//PROCESSING STATEMENTS
	cout << "battery < 20: " << (batteryLevel < 20) << endl;
	cout << "battery < 20 && !charging: " << (batteryLevel < 20 && !chargingStatus) << endl;
	cout << "battery == 100 || charging: " << (batteryLevel == 100 || chargingStatus) << endl;
	cout << "battery >= 0 && battery <= 100: " << (batteryLevel >= 0 && batteryLevel <= 100) << endl;
	cout << "0 <= battery <= 100: " << (0 <= batteryLevel <= 100) << endl;

	return 0;
}