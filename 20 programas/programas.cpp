#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <time.h>

using namespace std;

int main() {
  int i;
  float a,b,c,su,re,mu,di;
  int pari;
  float km,mi,me,pul,lb,kg;
  int o,op,j;
  string pa=" ";
  int num,uni,dec,cen,mil,mal;
  double valor;
  int numero;
  string binario = "";
  int mynum;
  int clave;
  i = 0;
  cout << "Seleccione una opcion";
  cout << "\n1. Operaciones comunes";
  cout << "\n2. Par o impar";
  cout << "\n3. Conversiones de distancia";
  cout << "\n4. Determinar palindromo";
  cout << "\n5. Conversion de numeros arabicos a romanos";
  cout << "\n6. Conversion de numeros a letras";
  cout << "\n7. Conversion de numeros enteros con decimal a letras";
  cout << "\n8. Tabla de multiplicar";
  cout << "\n9. Todas las tablas del 1 al 10";
  cout << "\n10. Multiplicacion graficada";
  cout << "\n11. Conversion de numero decimales a binario";
  cout << "\n12. Conversion de numeros decimales a hexadecimal";
  cout << "\n13. Crear figuras geometricas basicas";
  cout << "\n14, Mover un punto en toda la pantalla";
  cout << "\n15. Simulacion de un cajero";
  cout << "\n16. Calcular la hipotenusa";
  cout << "\n17. Conversion de temperaturas";
  cout << "\n18. Detector de triangulos";
  cout << "\n19. Calcular año bisiesto";
  cout << "\n20. Piedra, papel, tijera";
  cout << "\n21. Salir\n\n";
  cout << "Ingrese el numero de programa que desea usar: ";
  cin >> i;
  o= 0;
  pari=0;
  op= 0;
  j=0;
  
  if (i==1){
  	cout << "\n\nUsted selecciono el progrma 1:\n\n";
  	
  	cout << "Ingrese 2 valores: \n";
  	cin >> a;
  	cin >> b;
  	su = a+b;
  	re = a+b;
  	mu = a*b;
  	di = a/b;
  	
  	cout << "\nLa suma de ambos numeros es " << su;
  	cout << "\nLa resta de ambos numeros es " << re;
  	cout << "\nLa multiplicacion de ambos numeros es " << mu;
  	cout << "\nLa division de ambos numeros es " << di;
  }
  
  if (i==2){
  	cout << "\n\nUsted selecciono el progrma 2:\n\n";
  	cout << "Ingrese un valor que sera verificado: ";
  	cin >> pari;
  	if (pari % 2 == 0){
  		cout << "Su numero es Par";
  	}
  		else
  		cout << "Su numero es Impar";
  }
  
    if (i==3){
  	cout << "\n\nUsted selecciono el progrma 3:\n\n";
  	cout << "Ingrese su distancia en km: ";
  	cin >> km;
  	mi = km/1.609;
  	me = km*1000;
  	pul = km*39370;
  	cout << km << "km son: "<<mi<<" millas\n";
  	cout << km << "km son: "<<me<<" metros\n";
  	cout << km << "km son: "<<pul<<" pulgadas\n";
  	cout << "\n\n\nQue desea usar? \n1.Libras a kilogramos\n2.Kilogramos a libras\n";
  	cin >> o;
  	if (o ==1){
  		cout << "Ingrese sus libras: ";
  		cin >> lb;
  		kg = lb/2.2;
  		cout << lb <<"lb son: "<<kg<<"kg";
	  }
	  if (o==2){
	  	cout << "Ingrese sus Kilogramos: ";
  		cin >> kg;
  		lb = kg*2.2;
  		cout << kg <<"Kg son: "<<lb<<"Lb";
	  }
	  if ((o <= 0) || (o >= 3)){
	  cout << "Opcion no valida.";
      }
  }
  
    if (i==4){
  	cout << "\n\nUsted selecciono el progrma 4:\n\n";
  	cout << "Que desea verificar?\n1.Numero\n2.Palabra\n";
  	cin >> o;
  	if (o == 1){
  		cout << "Ingrese el numero a evaluar: ";
  		cin >> pari;
  		if ((pari % 11 == 0) || (pari <= 9)){
  			cout << "Su numero es palindromo";
		  }
		  else
		  cout << "Su numero no es palindromo";
	  }
	if (o == 2){
		cout <<"Ingrese la palabra a evaluar: ";
		cin >> pa;
		size_t longitud = pa.length()-1;
     	size_t op=0;
	    bool esPalindromo = true;
 
    	for(op=0 ; op<pa.length()/2 && esPalindromo ;op++) {
 
	    	if(pa[op]!=pa[longitud-op]){
			esPalindromo = false;
		}
 
	}
 
    cout<<((true == esPalindromo) ? "Su palabra es palindroma" : "Su palabra no es palindromo");
		
	}
  }

  if (i==5){
  	cout << "\n\nUsted selecciono el progrma 5:\n\n*(este programa soporta hasta 3,999)\n";
  	cout << "Ingrese un numero: ";
  	cin>> num;
  	cout << "\n\n";
  	uni = num % 10; num /= 10;
    dec = num % 10; num /= 10;
    cen = num % 10; num /= 10;
    mil = num % 10; num /= 10;
    switch (mil)
    {
    	case 1: cout<<"M"; break;
    	case 2: cout<<"MM"; break;
    	case 3: cout<<"MMM"; break;
	}
	
	switch (cen)
	{
		case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCCC"; break;
        case 9: cout<<"CM"; break;
	}
	
	switch (dec)
	{
		case 1: cout<<"X"; break;
		case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break; 
    }
    
    switch (uni)
    {
    	case 1: cout<<"I"; break;
    	case 2: cout<<"II"; break;
    	case 3: cout<<"III"; break;
    	case 4: cout<<"IV"; break;
    	case 5: cout<<"V"; break;
    	case 6: cout<<"VI"; break;
    	case 7: cout<<"VII"; break;
    	case 8: cout<<"VIII"; break;
    	case 9: cout<<"IX"; break;
	}



  }
  
  if (i==6){
  	cout << "\n\nUsted selecciono el progrma 6:\n\n\n\n*(este programa soporta hasta 3,999)";
  	cout << "Ingrese un numero: ";
  	cin>> num;
  	cout << "\n\n";
  	uni = num % 10; num /= 10;
    dec = num % 10; num /= 10;
    cen = num % 10; num /= 10;
    mil = num % 10; num /= 10;
    switch (mil)
    {
    	case 1: cout<<"Mil "; break;
    	case 2: cout<<"dos mil "; break;
    	case 3: cout<<"Tres mil "; break;
	}
	
	switch (cen)
	{
		case 1: cout<<"ciento "; break;
        case 2: cout<<"docientos "; break;
        case 3: cout<<"trecientos "; break;
        case 4: cout<<"cuatrocientos "; break;
        case 5: cout<<"quinientos "; break;
        case 6: cout<<"seiscientos "; break;
        case 7: cout<<"setecientos "; break;
        case 8: cout<<"ochocientos "; break;
        case 9: cout<<"novecientos "; break;
	}
	
	switch (dec)
	{
		case 1: cout<<"diez y "; break;
		case 2: cout<<"veinte y "; break;
        case 3: cout<<"treinta y "; break;
        case 4: cout<<"cuarenta y "; break;
        case 5: cout<<"cincuenta y "; break;
        case 6: cout<<"sesenta y "; break;
        case 7: cout<<"setenta y "; break;
        case 8: cout<<"ochenta y "; break;
        case 9: cout<<"noventa y "; break; 
    }
    
    switch (uni)
    {
    	case 1: cout<<"uno"; break;
    	case 2: cout<<"dos"; break;
    	case 3: cout<<"tres"; break;
    	case 4: cout<<"cuatro"; break;
    	case 5: cout<<"cinco"; break;
    	case 6: cout<<"seis"; break;
    	case 7: cout<<"siete"; break;
    	case 8: cout<<"ocho"; break;
    	case 9: cout<<"nueve"; break;
	}

  }
  
  if (i==7){

    {
     double valor;
     int miles,cientos,unidades,decimales;
     char numeros[100][20] = 
     {
     {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
     {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
     {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
     {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
     {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
     {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
     {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
     {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
     {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
     {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
      };
     char centenas[10][20] = 
     {
     {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
     };
     std::cout << "Ingrese su numero: ";
     std::cin >> valor;
     miles = ((int)valor)/1000;
     cientos = (((int)valor)%1000)/100;
     unidades = ((int)valor)%100;
     decimales = ((int) (valor*100.0))%100 ;
     if (miles)
     std::cout << numeros[miles] << " mil ";
     if (cientos)
     std::cout << centenas[cientos] << " ";
     if (unidades) 
     std::cout << numeros[unidades];
     if (decimales)
      {
     if(miles || cientos || unidades)
     {
     std::cout << " punto ";
     }
     std::cout << numeros[decimales];
     }
     std::cout << std::endl;

	 } 
  }
  
  if (i==8){
  	cout << "\n\nUsted selecciono el progrma 8:\n\n";
  	cout << "\nIngrese de que numero desea la tabla: ";
  	cin >> op;
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
  }
  
  if (i==9){
  	cout << "\n\nUsted selecciono el progrma 9:\n\n";
  	cout << "Tablas de multiplicar: ";
  	cout << "\n";
  	op = 1;
  	cout << "\nTabla del 1\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 2;
  	cout << "\nTabla del 2\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 3;
  	cout << "\nTabla del 3\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 4;
  	cout << "\nTabla del 4\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 5;
  	cout << "\nTabla del 5\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 6;
  	cout << "\nTabla del 6\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 7;
  	cout << "\nTabla del 7\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 8;
  	cout << "\nTabla del 8\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 9;
  	cout << "\nTabla del 9\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	op = 10;
  	cout << "\nTabla del 10\n";
  	for (int o=1;o<11;o++){
  		cout<<op<<" * "<<o<< " = "<<op*o<<"\n";
	  }
	  
  }
  
  if (i==10){
  	cout << "\n\nUsted selecciono el progrma 5:\n\n";
  	cout << "Ingrese 2 numeros: ";
  	cin>> a;
	cin>> num;
	b = num;
  	cout << "\n\n";
  	uni = num % 10; num /= 10;
    dec = num % 10; num /= 10;
    cout <<"   "<<a<<"\nx  "<<b<<"\n-----------\n   ";
    cout << uni*a<<"\n "<<dec*a<<"\n-------------\n "<<a*b;
  }
  
  if (i==11){
  	cout << "\n\nUsted selecciono el progrma 11:\n\n";
  	cout<< "Ingrese un numero\n";
	cin >> numero;
	if (numero > 0){
		while (numero >0){
			if (numero%2==0){
				binario = "0"+binario;
			}else{
				binario = "1"+binario;
			}
			numero = (int) numero/2;
		}
	}else if (numero == 0){
		binario = "0";
	}else {
		binario = "No se puede realizar la conversion. ingrese solo numeros positivos";
	}
	cout << "El resultado es : "<<binario;
  }
  
  if (i==12){
  	cout << "\n\nUsted selecciono el progrma 12:\n\n";
	cout << "\nIngrese un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\nSu numero en hexadecimal es: " << mynum;
	cout.unsetf(ios::hex);
  }
  
  if (i==13){
  	cout << "\n\nUsted selecciono el progrma 13:\n\n";
  	cout << "Que figura desea ver?\n1.Cuadrado\n2.Triangulo\n3.Rectangulo\n4.Circulo\n\n";
  	cin>> o;
  	switch (o){
  	case 1: cout << "..........\n.        .\n.        .\n.        .\n.        .\n.........."; break;
  	case 2: cout << "         .\n       .   .\n     .       .\n    . . . . . ."; break;
  	case 3: cout << "..........\n.        .\n.        .\n.        .\n.        .\n.        .\n.        .\n.        .\n.        .\n.        .\n.........."; break;
  	case 4: cout << "    ......\n  ..      ..\n .          .\n .          .\n  ..      ..\n    ......"; break;
	}
  		
  }
  
  if (i==14){
  	cout << "\n\nUsted selecciono el progrma 14:\n\n";
  	for (int o=1;o<100000;o++){
  		cout<<".                                         ";
  	}
  }
  
  if (i==15){
  	cout << "\n\nUsted selecciono el progrma 15:\n\n";
  	//la clave de la tarjeta es 5805
  	cout << "Ingrese su tarjeta de credito por favor...\n\n";
  	cout << "Ingrese la clave de la tarjeta...\n\n";
  	cin >> clave;
  	b = 1500;
  	if (clave == 5805){
  		cout << "BIENVENIDO A G&L\n\n\n1.Consultar saldo       2.Retirar fondos\n\n3.Salir\n\n";
  		cin >> o;
  		if (o == 1){
  			cout << "Su saldo actual es de Q." << a;
		  }
  		if (o == 2){
  		cout<< "\n\nBienvenido...\n\nCuanto dinero desea retirar?\n\n1.Q.50\n2.Q.100\n3.Q500\n4.Q1,000\n5.Q2,000\n";
  		cin>> a;
  		if (a == 1){
  			cout << "\nSe han retirado Q.50\n\nTome su dinero abajo de la maquina\n\nSu saldo actual es: Q"<<b-50;
		  }
		if (a == 2){
  			cout << "\nSe han retirado Q.100\n\nTome su dinero abajo de la maquina\n\nSu saldo actual es: Q"<<b-100;
		  }
		if (a == 3){
  			cout << "\nSe han retirado Q.500\n\nTome su dinero abajo de la maquina\n\nSu saldo actual es: Q"<<b-500;
		  }
		if (a == 4){
  			cout << "\nSe han retirado Q.1,000\n\nTome su dinero abajo de la maquina\n\nSu saldo actual es: Q"<<b-1000;
		  }
		if (a == 5){
  			cout << "\nSaldo insuficiente...";
		  }
	    }
		 
	  }else
	  cout <<"\n\nClave equivocada, intentelo de nuevo...";

  }
  
  if (i==16){
  	cout << "\n\nUsted selecciono el progrma 16:\n\n";
  	cout << "\n Ingrese la altura de su triangulo: ";
  	cin>> a;
  	cout<< "\nIngrese la base de su triangulo: ";
  	cin >>b;
  	su = sqrt((a*a)+(b*b));
  	cout << "La hipotenusa es: " <<su;
  }
  
  if (i==17){
  	cout << "\n\nUsted selecciono el progrma 17:\n\n";
  	cout << "Que temperatura usara?\n\n1.Celsius\n2.Fahrenheit\n3.Kelvin\n";
  	cin >> o;
  	if (o == 1){
  		cout << "Ingrese sus grados Celsius: \n";
  		cin>>a;
  		b= (a*1.8)+32;
  		su= a+273.15;
  		cout << a <<"°C son " << b <<"°F y " << su<<"K";
	  }
	if (o == 2){
		cout << "Ingrese sus grados Fahrenheit: \n";
  		cin>>a;
 		b = (a-32)*(0.5556);
 		su=b+273.15;
 		cout << a <<"°F son " << b <<"°C y " << su<<"K";
	  }
	if (o == 3){
		cout << "Ingrese sus grados Kelvin: \n";
		cin>>a;
		b= a-273.15;
 		su=(b*1.8)+32;
		
  		cout << a <<"K son " << b <<"°C y " << su<<"°F";
	  }
	if (o > 3){
  		cout<<"\nvalor invalido";
	  }  
  	
  }
  
  if (i==18){
  	cout << "\n\nUsted selecciono el progrma 18:\n\n";
  	cout << "Ingrese los 3 lados de su triangulo: \n";
	cin >> a;
	cin>> b;
	cin>> c;
	if (a == b && b==c){
		cout<<"\nSu triangulo es equilatero.";
	} 
	if (a==b && b!=c){
		cout <<"Su triangulo es Isosceles";
	}
	if (b==c && c!=a){
		cout <<"Su triangulo es Isosceles";
	}
	if (a!=b && b!=c){
		cout <<"Su triangulo es Escaleno";
	}
 }
  
  if (i==19){
  	cout << "\n\nUsted selecciono el progrma 19:\n\n";
  	cout << "Ingrese el año que desea comprobar: ";
  	cin >> o;
  	cout << "\n\n";
  	if(o %4==0){
  		cout<<o<<" es un año bisiesto";
	  }
	  else
	  cout <<o<<" no es un año bisiesto";
  }
  
  if (i==20){
  	cout << "\n\nUsted selecciono el progrma 20:\n\n";
  	srand(time(NULL));
  	cout << "\n1.Piedra\n2.Papel\n3.Tijera\nIngrese su jugada\n\n";
  	cin >> a;
    num = 1 + rand() % (4 - 1);
    if (num == a){
    	cout << "Ambos hicieron la misma jugada\nEmpate\n";
	}
	if (num ==1 && a==2){
	cout << "Usuario: Papel\n\nMaquina:Piedra\n\n";
	cout << "Gana el usuario";
	}
	
	if (num ==1 && a==3){
	cout << "Usuario: Tijera\nMaquina:Piedra\n\n";
	cout << "Gana la maquina";
	}
	if (num ==2 && a==1){
	cout << "Usuario: Piedra\nMaquina:Papel\n\n";
	cout << "Gana la maquina";
	}
	if (num ==2 && a==3){
	cout << "Usuario: Tijera\nMaquina:Papel\n\n";
	cout << "Gana el usuario";
	}
	if (num ==3 && a==1){
	cout << "Usuario: Piedra\nMaquina:Tijera\n\n";
	cout << "Gana el usuario";
	}
	if (num ==3 && a==2){
	cout << "Usuario: Papel\nMaquina:Tijera\n\n";
	cout << "Gana la maquina";
	}
	cout << "\nGracias por jugar :D ";
	
  }
  
  if (i==21){
  	
  	cout << "\n\nVuelva pronto!";
  	exit;
  	
  }
  if (i>=22){
  	
  	cout << "\n\nOpcion no valida...";
  	exit;
  	
  }
  
}

