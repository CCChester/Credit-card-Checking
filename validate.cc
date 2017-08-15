#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

using namespace std;

/*********** findOrInsert ***********
     Purpose: An string str, represent the credit card number,
          to check this string of integer whether is valid or not.
          if the card is valid, then return "valid".
     Returns: "invalid" or "valid"
************************************/

string valid(string str){
    int posi = 0;    //position
    int sum = 0;     // the length of string
    while (str[posi]){
        //loop for get the length of string
        sum++;
        posi++;
    } //while
    if (str[0] != '4'){   //not begin with "4"
        return "invalid";
    } //if
    if (sum != 13 && sum != 16){
        return "invalid";
    }  //if
    if (sum == 16){
        char one[sum];  //make a char array, nema one
        int pos = 0;
        while (pos < sum){
            //loop for copy string to char array
            one[pos] = str[pos];
            pos++;
        }
        int arr[sum];  //make a integer array
        int intlength = 0;    //integer array length
        while (intlength < sum){
            //loop for copy the char array to int array
            arr[intlength] = one[intlength] - '0';
            intlength++;
        } //while
        int even = 0;
        int total = 0;
        int index = 0;
        while (index < sum){
            //loop for lumn alorightm
            if (index == even){
                arr[index] = arr[index]*2;
                if (arr[index] > 9){
                    int left = arr[index]/10;
                    int right = arr[index]%10;
                    arr[index] = left + right;
                    total = total + arr[index];
                } //if
                else{
                    total = total + arr[index];
                }
                even = even + 2;
            }
            else{
                total = total + arr[index];
            } //else
            index++;
        } //while
        if ((total%10) == 0){
            return "valid";
        }
        else{ return "invalid";}
    } //if
    // the same of the function above
    // if the length of int array is 13.
    if (sum == 13){
        char one[sum];
        int pos = 0;
        while (pos < sum){
            one[pos] = str[pos];
            pos++;
        } //while
        int arr[sum];
        int i = 0;
        while (i < sum){
            arr[i] = one[i] - '0';
            i++;
        }
        int odd = 1;
        int total = 0;
        int index = 0;
        while (index < sum){
            if (index == odd){
                arr[index] = arr[index]*2;
                if (arr[index] > 9){
                    int left = arr[index]/10;
                    int right = arr[index]%10;
                    arr[index] = left + right;
                    total = total + arr[index];
                }
                else{
                    total = total + arr[index];
                }
                odd = odd + 2;
            }
            else{
                total = total + arr[index];
            }
            index++;
        }
        if ((total%10) == 0){
            return "valid";
        } //if
        else{ return "invalid";}
    }
    return "";
}

/*********** yesname **********
       Purpose: An string, str, is looked up this str whether contain
            integer from 0 to 9.
            if it contains integer 0-9, then return 0.
            if it does not contains integer 0-9, then return 1.
 
        Returns: return integer 1 or 0.
***********************************/

int yesname (string str){
    int index = 0;
    int strlength = 0;
    while (str[index]){
        //loop to get the length of the string
        strlength++;       //increment strlength
        index++;
    } //while
    int pos = 0;
    while (pos < strlength){
        //loop to check string do not contain integer 0-9
        if (str[pos] >= '0' && str[pos] <= '9'){
            return 0; //return 0 if there exist integer 0-9
        }
        pos++;       //increment position
    } //while
    return 1;        //return 1 if there does not exist 0-9
}


/*********** havespace **********
     Purpose: contains a string str, to check the string
          whether have space or not.
          if the string has space, then return 1.
          if the string does not have space, then return 0.
 
     Returns: 1 or 0.
***********************************/

int havespace (string str){
    int pos = 0;
    int sum = 0;
    while (str[pos]){
        //loop for count the length of string
        sum++;    //increment sum
        pos++;
    } //while
    int index = 0;
    while (index < sum){
        //loop for check there do not have space
        if (str[index] == ' '){
            return 1;
        } //if
        index++;
    } //while
    return 0;
}

/*********** strange **********
      Purpose:  contains string str, to get the transition number.
           
      Returns: return a string contains 5 integer.
***********************************/

string strange(string str){
    if (str[1] == ' '){
        string mystr = "0000";
        string mystr2 = "000";
        string mystr3 = "00";
        string mystr4 = "0";
        string mystr5 = "";   //make a empty string
        string newstr;
        if (str[6] == ' '){
            newstr = mystr + str[5];
        } //if
        else if (str[7] == ' '){
            newstr = mystr2 + str[5] + str[6];
        } //else if
        else if (str[8] == ' '){
            newstr = mystr3 + str[5] + str[6] + str[7];
        } //else if
        else if (str[9] == ' '){
            newstr = mystr4 + str[5] + str[6] + str[7] + str[8];
        }  //else if
        else if (str[10] == ' '){
            newstr = mystr5 + str[5] + str[6] + str[7] + str[8] + str[9];
        }  //else if
        return newstr;
    } //if
    else{
        string mystr = "0000";
        string mystr2 = "000";
        string mystr3 = "00";
        string mystr4 = "0";
        string mystr5 = "";    //make a empty string
        string newstr;
        if (str[7] == ' '){
            newstr = mystr + str[6];
        } //if
        else if (str[8] == ' '){
            newstr = mystr2 + str[6] + str[7];
        } //else if
        else if (str[9] == ' '){
            newstr = mystr3 + str[6] + str[7] + str[8];
        }  //else if
        else if (str[10] == ' '){
            newstr = mystr4 + str[6] + str[7] + str[8] + str[9];
        } //else if
        else if (str[11] == ' '){
            newstr = mystr5 + str[6] + str[7] + str[8] + str[9] + str[10];
        } 
       return newstr;
    } //else
}

/*********** expire **********
     purpose: contains a string str, to store the expire date.
          
     Returns: to return a expire day. It is a string
***********************************/

string expire(string str){
    string mynew, mynew2,mynew3,mynew4,over;
    if (str[1] == ' '){
        mynew = str[0];
        mynew2 = str[2];
        mynew3 = str[3];
        over = '0'+ mynew + '/' + mynew2 + mynew3;
        return over;
    } //if
    mynew = str[0];
    mynew2 = str[1];
    mynew3 = str[3];
    mynew4 = str[4];
    over = mynew + mynew2 + '/' + mynew3 + mynew4;
    return over;
}

/*********** clock **********
     purpose: contains a string str, store the time.
    
     Returns: returns a stirng, represent the time.
***********************************/

string clock(string str){
    string mynew = "";
    string newone;
    int pos = 0;
    int totallength = 0;
    while (str[pos]){
        //loop for count the length of string
        totallength++;
        pos++;
    } //while
    int i = 0;
    int sum = 0;
    int my = 4;
    while (i < totallength){
        if (sum == 7){
            my = i-5;
            string mynew2;
            string mynew = "";
            while (my < i-1){
                newone = newone + str[my];
                my++;
            } //while
            mynew2 = mynew +newone[0] + newone[1] + ':' + newone[2] + newone[3];
            return mynew2;
        } //if
        else if (str[i] == ' '){
            sum++;
        }
        i++;
    } //while
    return newone;
}

/*********** day **********
      purpose: contains a string str, store the day.
 
      Returns: returns a stirng, represent the day.
 ***********************************/


string day(string str){
    string mynew = "";
    string newone;
    int pos = 0;
    int totallength = 0;
    while (str[pos]){
        //loop for count the length of the string
        totallength++;
        pos++;
    } //while
    int i = 0;
    int sum = 0;
    int time = 0;
    while (i < totallength){
        if (sum == 3){
            newone = mynew;
            while (str[i] != ' '){
                newone = newone + str[i];
                i++;
                time++;
            } //while
            if (time == 1){
                string bestnew;
                string bestone = "";
                bestnew = bestone + '0' + newone;
                return bestnew;
            } //if
            return newone;
        } //if
        else if (str[i] == ' '){
            sum++;
        }
        i++;
    } //while
    return newone;
}

/*********** month **********
      purpose: contains a string str, store the month.
 
      Returns: returns a stirng, represent the month.
 ***********************************/


string month(string str){
    string mynew = "";
    string newone;
    int pos = 0;
    int totallength = 0;
    while (str[pos]){
        //loop for count the length of the string
        totallength++;
        pos++;
    } //while
    int i = 0;
    int sum = 0;
    int time = 0;
    while (i < totallength){
        if (sum == 4){
            newone = mynew;
            while (str[i] != ' '){
                newone = newone + str[i];
                i++;
                time++;
            } //while
            if (time == 1){
                string bestnew;
                string bestone = "";
                bestnew = bestone + '0' + newone;
                return bestnew;
            } //if
            return newone;
        }
        else if (str[i] == ' '){
            sum++;
        }
        i++;
    } //while
    return newone;
}

/*********** year **********
     purpose: contains a string str, store the year.
 
      Returns: returns a stirng, represent the year.
***********************************/


string year(string str){
    string mynew = "";
    string newone;
    int pos = 0;
    int totallength = 0;
    while (str[pos]){
        //loop for count the length of the string
        totallength++;
        pos++;
    } // while
    int i = 0;
    int sum = 0;
    int time = 0;
    while (i < totallength){
        if (sum == 5){
            newone = mynew;
            while (time< 4){
                newone = newone + str[i];
                time++;
                i++;
            } //while
            return newone;
        } //if
        else if (str[i] == ' '){
            sum++;
        } //if
        i++;
    } //while
    return newone;
}

/*********** money **********
      purpose: contains a string str, store the money.
 
      Returns: returns a stirng, represent the money.
***********************************/

string money (string str){
    string mynew = "";
    string newone;
    int pos = 0;
    int totallength = 0;
    while (str[pos]){
        //loop for count the length of the string
        totallength++;
        pos++;
    } //while
    int i = 0;
    int sum = 0;
    while (i < totallength){
        if (sum == 7){
            newone = mynew;
            while (i < totallength){
                newone = newone + str[i];
                i++;
            } //while
            return newone;
        } //if
        else if (str[i] == ' '){
            sum++;
        } //if
        i++;
    } //while
    return newone;
}

const int maxnum = 100;
string person[maxnum];
string card[maxnum];
string timing[maxnum];
int sum = 0;

/*********** validate **********
      purpose: to read the person name, credit number,
         and another information.
   
      Return: Null
**********************************/

void validate(){
    string str;
    int one = 0;
    int two = 0;
    int three = 0;
    while (getline (cin, str)){
        //loop for read
        if (str == ""){
            return;
        } //if
        if (yesname(str) == 1){  //if it is a person
            person[one] = str;
            one++;
        } //if
        else if (havespace(str) == 0){  //if it is a credit card
            card[two] = str;
            two++;
        } //else if
        else if (havespace(str) == 1){
            timing[three] = str;
            three++;
        } //else if
        sum++;
    } //while
    sum = sum/3;
}

/*********** validate2 **********
      purpose: to print the person name, credit number,
            and another information, and the credit card 
            whether valid or not.
 
      Return: Null
**********************************/

void validate2(){
    int index = 0;
    while (index < sum){
        //loop for print
        cout << strange(timing[index]) << " " << day(timing[index]) << "/" << month(timing[index])
        << "/" << year(timing[index]) << " "
        << clock(timing[index]) << " " << "$" << money(timing[index]) << " "
        << "(" << card[index] << "," << " " << person[index]
        << "," <<  " " <<  expire(timing[index]) << ")" << " " << valid(card[index]) << endl;
        index++;
    } //while
}

/*********** main ***********
      Purpose: to run validate and validate2 function.
 
      Returns: Null
************************************/

int main(){
    validate();
    validate2();
}
