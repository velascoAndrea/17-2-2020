#include <iostream>

using namespace std;


string unidades(int num){
    if(num==1){
        return "one";
    }
    else if(num==2){
        return "two";
    }
    else if(num==3){
        return "three";
    }
    else if(num==4){
        return "four";
    }
    else if(num==5){
        return "five";
    }
    else if(num==6){
        return "six";
    }
    else if(num==7){
        return "seven";
    }
    else if(num==8){
        return "eigth";
    }
    else if(num==9){
        return "nine";
    }
    return "";
}

string decenas(int decena){
    if(decena==1){
        return "uno";
    }
    else if(decena==2){
        return "twenty";
    }
    else if(decena==3){
        return "thirty";
    }
    else if(decena==4){
        return "forty";
    }
    else if(decena==5){
        return "fifty";
    }
    else if(decena==6){
        return "sixty";
    }
    else if(decena==7){
        return "seventy";
    }
    else if(decena==8){
        return "eighty";
    }
    else if(decena==9){
        return "ninety";
    }
    return "";
}

string decimos(int num){
    if(num==0){
        return "ten";
    }
    if(num==1){
        return "eleven";
    }
    else if(num==2){
        return "twelve";
    }
    else if(num==3){
        return "thirtheen";
    }
    else if(num==4){
        return "fourteen";
    }
    else if(num==5){
        return "fiveteen";
    }
    else if(num==6){
        return "sixteen";
    }
    else if(num==7){
        return "seventeen";
    }
    else if(num==8){
        return "eigthteen";
    }
    else if(num==9){
        return "nineteen";
    }
    return "";
}

string centenas(int num){
    if(num==1){
        return "one hundred";
    }
    else if(num==2){
        return "two hundred";
    }
    else if(num==3){
        return "three hundred";
    }
    else if(num==4){
        return "four hundred";
    }
    else if(num==5){
        return "five hundred";
    }
    else if(num==6){
        return "six hundred";
    }
    else if(num==7){
        return "seven hundred";
    }
    else if(num==8){
        return "eigth hundred";
    }
    else if(num==9){
        return "nine hundred";
    }
    return "";
}


string NumbretoWord(int number){
    if(number <10){
        return unidades(number);
    }if(number <20 && number >9){
        int unidad = number%10;
        //int decena = ((number)/10)%10;
        return decimos(unidad);
    }
    if(number <100 && number >19){
    int unidad = number%10;
    int decena = ((number)/10)%10;

    string num = decenas(decena) +" " +unidades(unidad);
    return num;

    }else if(number >= 100 && number <=999){
       int unidad = number%10;
       int decena = ((number)/10)%10;
       int  centena = (((number/10))/10)%10;

       string num;
       if(unidad!=0 || decena!=0){
           num = centenas(centena) +" and "+ decenas(decena) +" "+unidades(unidad);
       }else if(unidad==0 && decena==0){
           num = centenas(centena);
       }

       return num;
    }else if(number==1000){
        return "one thousand";
    }else{
        return "fuera de rango";
    }
    return "";
}


int main()
{

      int num;
      cout <<  "Introduce un numero entero: ";
      cin >> num;
    cout << NumbretoWord(num) << endl;
    return 0;
}
