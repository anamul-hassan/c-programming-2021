//scientific calculator in c++
//written by Abd - elrahman Elmasry
//e-mail: abdoasemelzedy@hotmail.com
//there is no copy right for this code


#include<iostream>//main library
#include<math.h>// for mathimatics function
#include<stdexcpt.h>//for exeption conditions

using namespace std;

class calc
{
private:
    int len,//for the length of array
        intPartTemp,//for using its value
        intLen,//for the len of integer part
        floatLen,//for the len of float part
        ten,//for pow function
        str;//for deter mine starting point

    double value,//for the value of mid
        floatPartTemp,//for getting floating part of numbers for converting
        x; // for the value of variable x

    char ch[1000] ;//charchters for saving formulas
    char carriage[100];//for putting num in it as a caracter
    char copy [1000];//for saving user formula

//getting information form user
    void setInfo()
{
    cin.getline(copy,1000);//getting formulas from user
    copyArray(copy, ch);//copy array to save its value
    replace(x,'x');//replacing variable x with its value
}

void copyArray (char main [], char copy [] )
{
    //getting main array lenght
    int len = strlen(main);
    int temp;

    //it counts to null because of null
    for(temp=0;temp<=len;temp++)
    {
        copy[temp] = main[temp];
    }
}


//editing formulas to be adaptable to computing rules
void edit()
{//star edit
    int temp;

    len = strlen(ch);

    for(temp=0;temp<len;temp++)
    {//loop for cover all characters

        //the condition there is two variables after them thelf without *
         if(!triangleMove(temp) && isalpha(ch[temp]) && isalpha(ch[temp+1]) )
            //not triangle to make sure they aren't triangle functions
            insert(temp,len,'*');

        //the condition when there is a number and after it a variable without *
        else if(temp!=0 && isalpha(ch[temp]) && isdigit(ch[temp-1]))
            insert(temp,len,'*');

        //the condition there is two parentheses after them thelf without *
        else if(temp!=0 && ch[temp] == '(' && ch[temp-1] ==')' )
            insert(temp,len,'*');

        //the condition when there is a number before (
        else if(temp!=0 && ch[temp] == '(' && isdigit(ch[temp-1]) )
        insert(temp,len,'*');

        else if( ( ch[temp]=='.' && temp == 0) || ( temp>0 && ch[temp] == '.' && !isdigit( (ch[temp-1]) ) ) )
            insert(temp,len,'0');

        //the condition when there is ++
        else if( ch[temp] == '+' && ch[temp+1] =='+' )
            smaller(temp,len,'+');

        //the condition when there is ++
        else if( ch[temp] == '+' && ch[temp+1] =='-' )
            smaller(temp,len,'-');

        //the condition when there is ++
        else if( ch[temp] == '-' && ch[temp+1] =='-' )
            smaller(temp,len,'+');

        //the condition when there is ++
        else if( ch[temp] == '-' && ch[temp+1] =='+' )
            smaller(temp,len,'-');

    }//end loop of coverting

    //the condition when first digit is +
    if(ch[0]=='+')
        decrease(0,1);

}//end edit

//for examing formulas from being out of math rules
bool exam ()
{
    int leftBracket=0,//for count left brackts
        rightBracket=0,//for count right brackt
        len = strlen(ch), // for array lenght
        temp;//temprature variable

    for(temp = 0; temp<len; temp++)
    {
        //continue defaule condition of being number
        if( isdigit(ch[temp]) )
            continue;

        //count left brackets
        else if(ch[temp] == '(')
            leftBracket ++;

        //count right brackets
        else if(ch[temp] == ')')
            rightBracket ++;

        //the condition of being two mathimatics symbols after themself
        else if( !isalpha(ch[temp]) && !isalpha(ch[temp+1]) && !isdigit(ch[temp+1]) )
            return false;

    }//end covering loop

    //false formulas with right brackets not equal leftbrackets
    if(rightBracket != rightBracket)
        return false;

    //condition with the last idgits isn't number or ')'
    if( !isdigit (ch[len-1] ) && ch[len-1] != ')'  )
        return false;

    //defaule condition
    return true;
}


//for moving temp
bool triangleMove(int &temp)
{

    //sin condition
    if(ch[temp] == 's' && ch[temp+1] == 'i' && ch[temp+2] == 'n' && ch[temp+3] == '(' && isdigit(ch[temp+4]) )
    {
        temp+=4;//for going to next element
        return true;
    }

    //cos condition
    else if(ch[temp] == 'c' && ch[temp+1] == 'o' && ch[temp+2] == 's' && ch[temp+3] == '(' && isdigit(ch[temp+4]) )
    {
        temp+=4;//for going to next element
        return true;
    }

    //tan condition
    else if(ch[temp] == 't' && ch[temp+1] == 'a' && ch[temp+2] == 'n' && ch[temp+3] == '(' && isdigit(ch[temp+4]) )
    {
        temp+=4;//for going to next element
        return true;
    }

    //defaul condition
    return false;
}

//examing triangle functions
bool triangle (int temp)
{

    //sin condition
    if(ch[temp] == 's' && ch[temp+1] == 'i' && ch[temp+2] == 'n' && ch[temp+3] == '(' && isdigit(ch[temp+4]) )
    {
        return true;
    }

    //cos condition
    else if(ch[temp] == 'c' && ch[temp+1] == 'o' && ch[temp+2] == 's' && ch[temp+3] == '(' && isdigit(ch[temp+4]) )
    {
        return true;
    }

    //tan condition
    else if(ch[temp] == 't' && ch[temp+1] == 'a' && ch[temp+2] == 'n' && ch[temp+3] == '(' && isdigit(ch[temp+4]) )
    {
        return true;
    }

    //defaul condition
    return false;
}

void increase (int order,  int &len, int count)
{//for increaseing array's element
    int temp, temp2;

    //punt any digit

    for(temp2=0; temp2<count; temp2++)
{
    len++;//increase len by one for the new character

    for(temp=len;temp>order;temp--)
    {//increase array with one starting with last element
        ch[temp]=ch[temp-1];
    }
}
}//end increase function

void decrease (int order, int count)
{//for increaseing array's element
    int temp, temp2;
    int len = strlen(ch);
    for(temp2=0;temp2<count;temp2++)
{

    for(temp=order;temp<len;temp++)
    {//increase array with one starting with last element
        ch[temp]=ch[temp+1];
    }
    len--;//increase len by one for the new character
}
}//end increase function

void insert(int order,  int &len, char ob)
{//for puting an element in some order

    //increase characters
    increase (order, len,1);
    //put requred element in its position
    ch[order] = ob;

}//end insert function

void smaller(int order,  int &len, char ob)
{//for shorting two elements with one as ++ to be +

    //decrease
    decrease(order, 1);
    //put requred element in its position
    ch[order] = ob;

}//end smaller function

int getNumLen(double num)
{//for the lenght of a num to put it in a character

    int intPart,//for the  integer part
        temp, //temprature variable
        numLen;//for the lenght of the num

    bool plus = false;

    double floatPart;//for the float part

    if(num<0)
    {
        plus = true;
        num*=-1;
    }


    //determine integer part
    intPart = intPartTemp = static_cast<int>(num);
    floatPart = floatPartTemp = num - intPart;

    //getting integer part lenght
    for(intLen=0;intPart>0;intPart/=10)
    {
        intLen++;
    }

    if(intLen == 0)
        intLen = 1;//for making a digit for 0

    //getting integer part lenght
    //initializing floatLen with 1 for '.'
    floatPart>0?floatLen=1:floatLen=0;
    for(temp= 1; floatPart!=0 && floatLen<10 ; floatLen++)
    {
        floatPart*=10;//put one digit in the integer part
        temp = static_cast<int>(floatPart) ;
        floatPart-=temp;//remove the digit
    }

    if(plus){
        intLen++;//increase digit for -
        intPart *=-1;
    }
    numLen = intLen + floatLen;



    return numLen;
}//end getLength function

void convert(char carriage[], double num, int intLen, int intPart, int floatLen, double floatPart, int numLen, bool sign )
{
    int temp1, temp;
    int start = 0;

        //making the first position for 0 in the condition
        //of numbers less than 1

        if(numLen>0)
        {
            carriage[numLen]=0;
        }
        else
        {
            numLen=1;
            carriage[numLen]=0;
        }

        //negative conditions
    if(!sign){
        start ++;
        carriage[0] = '-';
    }


    //integer part
    for(temp=intLen-1;temp>=start;temp--)
    {
        temp1= intPart % 10 ;//getting the first digit
        carriage[temp]= temp1+48;//put the first digit

        intPart/=10; //remove the first digit
    }

    //floating part

    //move null to next position
    if(floatPart!=0){

        //intLen as null in this time is in intLen position
        carriage[intLen]='.';
        carriage[intLen + floatLen ]=0;

        //starting with intLen because of int part and .
    for(temp=intLen+1;temp<floatLen+intLen; temp++)
    {
        floatPart*=10;//put one digit in the integer part
        temp1 = floatPart;//get the digit and put it in integer variable
        carriage[temp]=temp1+48;//get the digit in the integer part
        floatPart-=temp1;//remove the digit
    }

    }//end if

}//end convert function

void replace ( double num, char var)
{//for replacing a variable with a numberical value
    int len = strlen(ch);
    int temp;

    for(temp=0;temp<len;temp++)
    {
        if(ch[temp]==var)
        {
            decrease(temp,1);//remove variable
            insertNum(temp,  num);//replace variable with the number
        }//end if
    }//end for
}//end replace


double getFloatNum (int &position, int count)
{

    double num; //for the return

    int temp;//for looping
    int arrange;

    ten = 10;//decleration ten
    num = 0;//initialize num with 0
    arrange=1;

    //intger part
    for(temp=0; isdigit(ch[position]) && temp<count; temp++)
    {

        num = num + (ch[position++]-48)/pow(ten,static_cast<double>(arrange++));
    }

    position--;
    //because it will be increase with the loop
return num;
}//end getNum for floating


double getNum (int &position)
{

    double num, //for the return
            floatPart; // for floating parts

    double sign = 1;//for the numbers'sign 1 is positive

    ten = 10;//decleration ten
    num = 0;//initialize num with 0

    //because we start get the num from its first numerical digit
    if(ch[position]=='-')
        position++;

    if( (position>0 && ch[position-1] == '-') || (position==0 &&ch[position] =='-') )
    {
        sign = false;
    }

    //intger part
    while(isdigit(ch[position]))
    {
        num = num *10 + ch[position]-48;
        position++;
    }
    position--;//return to last numerical digit

    //because it will be increase with the loop

    if(ch[position+1]=='.')
    {
        position+=2; //for going to the num position
        floatPart = getFloatNum(position, 5);

        num = num + floatPart ;
    }

    if(!sign)
        num*=-1;

    return num;
}

bool check(int temp, double &num1 , double &num2, char &symbol)
{

    int len1,//for the lenght of num1
        len2;//for the lenght of num2


    num1 = getNum(temp);
    len1 = getNumLen(num1);

    while(isdigit(ch[temp]))
    temp++;

    temp--;//to be at the last digit

    if(ch[temp+1]!=0 && !isdigit(ch[temp+1]) )
    {

    //getting process symbol
    symbol = ch[++temp];

    //for going to next num after process symbol
    num2 = getNum (++temp);
    len2 = getNumLen (num2);


    return true;
    }//end if condition

    else
        return false;
}

void trigon_op(int &temp)
{

    double num,//result value
            insNum;//insert num

    int numLen;//the lenght of the number
        len = strlen(ch);
    //sin condition
    if(ch[temp]=='s' && ch[temp+1] =='i' && ch[temp+2] =='n')
    {
        //going for number position
        //three for s, i, n and one for '('
        temp+=4;

        //inside num
        insNum = getNum(temp);

        numLen= getNumLen(insNum);

        //return for the main positioin
        temp-=3+numLen;

        //the five are for s, i, n, (, )
        decrease(temp,numLen+5);

        num=sin(insNum);

        insertNum(temp, num);
        temp+=getNumLen(num);
    }

    //cos condition
    else if(ch[temp]=='c' && ch[temp+1] =='o' && ch[temp+2] =='s')
    {
        //going for number position
        //three for c, o, s and one for '('
        temp+=4;

        //inside num
        insNum = getNum(temp);

        numLen= getNumLen(insNum);

        //return for the main positioin
        temp-=3+numLen;

        //the five are for c, o, s, (, )
        decrease(temp,numLen+5);

        num=cos(insNum);

        insertNum(temp, num);

    }

    //tan condition
    else if(ch[temp]=='t' && ch[temp+1] =='a' && ch[temp+2] =='n')
    {
        //going for number position
        //three for t, a, n and one for '('
        temp+=4;

        //inside num
        insNum = getNum(temp);

        numLen= getNumLen(insNum);

        //return for the main positioin
        temp-=3+numLen;

        //the five are for t, a, n, (, )
        decrease(temp,numLen+5);

        num=tan(insNum);

        insertNum(temp, num);
    }
}

//for getting str and end values
void getBorders(int &str, int &end)
{
    int len = strlen(ch) -1 ;
    int temp;
    str=0;//initial value
    end = len;//initial value

    for(temp=0;temp<len;temp++)
    {

    if(temp>0 && ch[temp]=='(' && !isalpha(ch[temp-1]) )
        str=temp+1;

    else if(str > 0 && ch[temp]== ')' && !isalpha(ch[str-1]) )
    {
        end = temp;
        break;
    }

}//emd for



}

void process (double num1, double num2, char symbol, int temp)
{//processing operations


    int len1 = getNumLen(num1),
         len2 = getNumLen(num2),//for num1 and num2 lenght
        len = strlen(ch);//for the size of array
        int count;//for the position of removing and insertion

    double num; // for the result

    if(symbol == '^')
        num = pow(num1,num2);

    else if(symbol == '*')
        num = num1*num2;

    else if(symbol == '/')
        num = num1/num2;

    else if(symbol == '+')
        num = num1+num2;

    else if(symbol == '-')
        num = num1+num2;// + because it will be taken as negative before

        //len1 for removing num1
        //len2 for removing num2
        //1 for removing symbol

    if(num2 >= 0 && num1 >=0) //in this condition the lenght of of num1 and num2 are real
        count = len1+len2;

    //in this condition the lenght of of num2 is real and num1 is with negative sign so we should remove it
    else if(num2 >= 0 && num1 <0)
        count = len1+len2;


    //in this condition the lenght of of num1 is real and num2 is with negative sign so we should remove it
    else if(num2 < 0 && num1 >=0)
        count = len1 + len2;

    //in this condition the lenght of of num1  and num2 are with negative signs so we should remove them
    else if(num2 < 0 && num1 <0)
    {
        count = len1 + len2 ;
        temp--;//to be at negativ sign
    }
    if(symbol != '-')
        count ++ ;

    //decrease ch form numbers are members of operation
    decrease(temp,count);


    insertNum(temp,num);
    //starting removing from the first digit of num1
        //as we set now on the last digit of num2

        //reedit the formula
        edit();
}

void semiMath(int str, int end, char ch[])
{
    int temp,
        zero = 0;//for getNum function

    char symbol;

    double num1, // for the first number for operating
            num2;//for the second number for operating

    len = end;

    //trigon function stage

    for(temp=str;temp<len;temp++)
    {
        if(triangle(temp))
        {
            trigon_op(temp);
            getBorders(str,end);
            temp = str -1;//return to first digit after increasing loop to process anothers
            len=end+1;
        }
    }
    //first stage
    len = end;
    for(temp=str;temp<len;temp++)
    {//starting covering the formula with loop

            if( (isdigit(ch[temp]) || ch[temp]=='-' ) && check(temp, num1, num2, symbol) )
            {
                if(symbol == '^')
                {
                    process(num1,num2,symbol,temp);
                    getBorders(str,end);
                    temp = str -1;//return to first digit after increasing loop to process anothers
                    len=end+1;}
            }
    }//end covering loop

    //second stage
    len = end;
    symbol = 0;//remove last symbol
    for(temp=str;temp<len;temp++)
    {//starting covering the formula with loop

            if( (isdigit(ch[temp]) || ch[temp]=='-' ) && check(temp, num1, num2, symbol) )
            {
                if(symbol == '*' || symbol == '/')
                {
                    process(num1,num2,symbol,temp);
                    getBorders(str,end);
                    temp = str -1;//return to first digit after increasing loop to process anothers
                    len=end;
                }
            }
    }//end covering loop

    //third stage
    len = end;
    symbol = 0;//remove last symbol
    for(temp=str;temp<len;temp++)
    {//starting covering the formula with loop

            if( (isdigit(ch[temp]) || ch[temp]=='-' ) && check(temp, num1, num2, symbol) )
            {
                if(symbol == '+' || symbol == '-')
                {
                    process(num1,num2,symbol,temp);
                    getBorders(str,end);
                    temp = str -1;//return to first digit after increasing loop to process anothers
                    len=end;
                }
            }
    }//end covering loop

}//end semi math

double math (char ch[], double x)
{
    int len = strlen(ch) ,//getting carachters' lenght
        temp, //temprature value
        zero = 0,
        end ;

    double  num;//for the final number

    edit();//edit formula to be adaptable to computing rules


    //loop for detemine str and end
if(exam())
{
for(temp = 0; temp <len; temp++)
{
    getBorders(str,end);

    semiMath(str, end,ch);

    len = strlen(ch);

    //if condition for removind ( ) after mathing
    if(str !=0)
    {
        getBorders(str,end);

        decrease(str-1,1);
        decrease(end-1 ,1);
        //end -1 because ')' will decrease one after removing (

    }//end if condition
}
    //getting final result
    num=getNum(zero);

    return num;
}

else
    throw invalid_argument(
    "Your formula is out of mathimatics rules");

}//end math function

void insertNum(int order, double num)
{//for insert a num to a character array
    int temp, numLen;
    int len;
     numLen = getNumLen(num);//determine the num's lenght
    bool sign;//for negativ conditions

     len = strlen(ch);

     if(num>=0)
         sign = true;
     else
         sign = false;

    convert(carriage,num,intLen,intPartTemp,floatLen,floatPartTemp, numLen, sign);

    //negative condition


    //starting loop with the last because it will be increase
    for(temp = numLen-1; temp>=0 ; temp--)
    {

        increase(order, len,1);
        ch[order] = carriage [temp];//tranport from carriage array
    }

}//end insert num
/////////////////////////////////////////////////////////////

public:

double getResult()
{
    setInfo();
    double num = math(ch,value);
    return num;
}

double getResult(char ch[], double value)
{
    double num = math(ch,value);
    return num;
}

};//end calc class

void main ()
{

    calc test;
    while(cout<<"= "<<test.getResult()<<endl<<endl<<endl);

}