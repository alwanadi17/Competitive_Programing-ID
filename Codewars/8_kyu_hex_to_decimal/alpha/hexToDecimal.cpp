// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Alwan Adiuntoro <alwanadiuntoro@gmail.com>
 */

#include <iostream>
#include <math.h>

using namespace std;

int main(){
	cout << "Hex to decimal exercise" << endl << endl;
	int sum = 0;
	string hexString = "-10";
	int length = hexString.length();
	int i = length-1;
	string temp;

	while(!(i < 0)){
		temp += hexString[i];
		i--;
	}
	cout << "Temp = " << temp << endl;
	hexString = temp;

	for(i = 0; hexString[i] != '\0'; i++){
		int dec = 0;
		if(hexString[i] >= '0' && hexString[i] <= '9') dec = hexString[i] - '0';
		else if(hexString[i] >= 'a' && hexString[i] <= 'f') dec = hexString[i] - 'a'+10;
		else if(hexString[i] >= 'A' && hexString[i] <= 'F') dec = hexString[i] - 'A'+10;

		sum += dec * pow(16,i);
		cout << "hexString[" << i << "] = " << hexString[i] << " = " << sum << endl;
	}

	if(hexString[length-1] == '-') sum *= -1;

	cout << "Decimal = " << sum << endl;

	return 0;
}
