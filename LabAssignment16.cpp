/*Path Project: <redacted>
Written by:  Esquire At Large
e-mail address:  esquirecode@gmail.com
C174 TTh 1:00 
Date:  November 29th, 2007
Assignment #16 - computer #23
Description:  Display an array initialized to odd integers.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
	//Declare variables
	int n, count = 1;
	const int total = 200;
	int numb[total];

	//introduction
	cout << "Assignment #16 \n"
		<< "\tby:  Esquire At Large \n"
		<< "\tdate: November 29th, 2007 \n"
		<< "*******************************************\n\n";

	//Assigment loop
	for(n = 0; n < total; n++){
		numb[n] = count;
		count = count + 2;
	}
	//display loop
	for(n = 0; n < total; n++){
		cout << numb[n] << " ";
		if(((n+1)%8) == 0)
			cout << endl;
	}

	//Closing
	cout << "\n\nGoodbye!\n";

}
/*
Assignment #16
        by:  Esquire At Large
        date: November 29th, 2007
*******************************************

1 3 5 7 9 11 13 15
17 19 21 23 25 27 29 31
33 35 37 39 41 43 45 47
49 51 53 55 57 59 61 63
65 67 69 71 73 75 77 79
81 83 85 87 89 91 93 95
97 99 101 103 105 107 109 111
113 115 117 119 121 123 125 127
129 131 133 135 137 139 141 143
145 147 149 151 153 155 157 159
161 163 165 167 169 171 173 175
177 179 181 183 185 187 189 191
193 195 197 199 201 203 205 207
209 211 213 215 217 219 221 223
225 227 229 231 233 235 237 239
241 243 245 247 249 251 253 255
257 259 261 263 265 267 269 271
273 275 277 279 281 283 285 287
289 291 293 295 297 299 301 303
305 307 309 311 313 315 317 319
321 323 325 327 329 331 333 335
337 339 341 343 345 347 349 351
353 355 357 359 361 363 365 367
369 371 373 375 377 379 381 383
385 387 389 391 393 395 397 399


Goodbye!
Press any key to continue . . .
*/