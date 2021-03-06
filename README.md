# Credit-card-Checking

Write a program that will process a series of zero or more credit card transactions by reading
in the transaction record from standard input, validating the credit card, and then outputting
a verdict as to the validity of the credit card. A transaction record consists of the following
elds, one per line:
 name on the credit card i.e. rst name, optional initial, last name e.g. Jane A. Qiu,
Fred Smith
 credit card number e.g. 45567375868998551
 card expiry date (1- or 2-digit month [space] 2-digit year), [space], transaction number
(positive integer, up to 5 digits in length),[space] , date (day [space] month [space] year),
time (24-hour time), [space] and amount e.g. 05 18 00001 25 05 2015 2105 45.03
You may assume that all of the information is correctly formatted and is of the appropriate
type, so the only form of validation that is required is to check whether or not the credit card
number is valid. (Ideally, you'll eventually expand the program to validate the full transac-
tion.) The program will only validate VISA card numbers for now. VISA card numbers start
1See the le a2/validCCNums.txt for a list of 10 valid VISA numbers that you can use in your test cases.
with the digit `4', and are either 13 or 16 digits in length. Note that the number is too large
to store into an integer, so you will have to manipulate the string character-by-character, and
convert the individual characters to digits as necessary using stringstream.
The card number is validated by applying the Luhn algorithm. For example, consider the
following 16-digit number 4556737586899855.
(1) If the rst digit isn't a 4, the card is invalid.
(2) If the length of the card number is neither 13 nor 16, the card is invalid.
(3) The rightmost digit is the check digit. In the example, this is the digit 5. Starting
from the check digit and moving to the left, double every second digit (marked in bold).
The number 4556737586899855 now becomes i.e. 8,5,10,6,14,3,14,5,16,6,16,9,18,8,10,5.
(4) For each number over 9, add together the digits of the product. The number now becomes
8,5,1+0,6,1+4,3,1+4,5,1+6,6,1+6,9,1+8,8,1+0,5 = 8,5,1,6,5,3,5,5,7,6,7,9,9,8,1,5
(5) Add all numbers together. The sum is 90.
(6) Calculate the result of the sum modulo 10 i.e. 90 modulo 10 = 0.
(7) If the result is 0, the card number is valid.
The format of each record output is as follows:

00001 25/05/2015 21:00 $45.03 (4556737586899855, Jane A. Qiu, 05/18) valid[newline]
00001 25/05/2015 21:00 $45.03 (4556737586899856, Fred Smith, 05/18) invalid[newline]
Note that the transaction number is specied to have a width of 5 digits, and a ll character
of `0' The transaction date has a width of 2 set for the day and the month. The transaction
time has a width of 2 for each of the hour and the minutes. The dollar amount has a precision
of 2 (hint: investigate use of fixed and showpoint IO manipulators). The expiry month and
year each have a width of 2.
Note: Do not copy paste the example above to create a test le. The formatting
might NOT be correct. This test case has been provided to you (q3.in and q3.out)
within the a2 directory
The program ends upon reaching the end of the input stream.
Due on Due Date 1: Write the program in C++. Call your program validate.cc.
