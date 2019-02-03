# Ejercicios a Trabajar
## AreaCricunferencia.c
Calcular el área de un circunferencia

## Mayor.c
Dados tres valores enteros a,b,c que cumplen a>=b>=c, intercambie los 
valores de manera que cumplan a<=b<=c

## Par.c
Dice si b es par

## Votar.c
En ese país, se permite votar a los descendientes directos extranjeros sólo si son mayores a 25 años, pero a los nativos se les permite votar con solo 18 años o más. Traduzcalo a C

'''
[
	const esDescendienteExtranjero : bool;
	const edad : int;
	var puedeVotar: bool;

	puedeVotar := true;
	if ( esDescendienteExtranjero ) ->
		if ( edad >= 25 ) -> 
			skip;
		[] ( edad < 25 ) ->
			puedeVotar = False;
		[] ( !esDescendienteExtranjero ) ->
			if ( edad >= 18 ) ->
				skip;
			[] ( edad < 18 ) -> puedeVotar = False;
fi
]
'''

## Chimefon.c
La política de la compañía telefónica “chimefon” es: “Chismea + x -”. Cuando se realiza una llamada, el
cobro es por el tiempo que esta dura, de tal forma que los primeros cinco minutos cuestan $ 1.00 c/u, los siguientes tres, 80¢ c/u, los siguientes dos minutos, 70¢ c/u, y a partir del décimo minuto, 50¢ c/u. Además, se carga un impuesto de 3 % cuando es domingo, y si es día hábil, en turno matutino, 15 %, y en turno vespertino, 10 %. Realice un algoritmo para determinar cuánto debe pagar por cada concepto una persona que realiza una llamada. El algoritmo recibecomo entrada el número de minutos de la llamada y el turno que puede ser domingo, día hábil matutino o día hábil vespertino.

## Ordenado.c
Escriba un algoritmo, usando un subprograma para los cálculos, que
determine si una secuencia S de N enteros está ordenada en forma creciente, decreciente, o
está en desorden. Para el programa en Python, escriba un subprograma para la lectura de los
elementos de la secuencia que lo realice hasta un número N especificado por el usuario y los
almacene en un arreglo S. No se admite la secuencia vacía ni unitaria. Luego realice otro
subprograma que tome la secuencia y determine el tipo de orden que presenta, y devuelva
como resultado un valor entero (-1: decreciente; 1:creciente y 0:en desorden). Finalice con un
subprograma que muestre en pantalla el resultado con un mensaje al usuario. El programa
principal debe llamar a estos tres subprogramas.

## Fibonnacci.c
Escriba un algoritmo, usando un subprograma para los cálculos, que
dado un arreglo A de N números naturales produzca otro arreglo F con el número de
Fibonacci de cada uno de los valores de A. El programa en Python debe utilizar el mismo
esquema de la pregunta 1, es decir, debe incluir los siguientes subprogramas: leer los
número de la entrada, almacenarlos en un arreglo A, producir los números de Fibonacci en un
segundo arreglo F y tomar el arreglo F e imprimirlo en pantalla. Sugerencia: escriba una
función que dado un número natural i produzca el número de Fibonacci fib(i) de dicho valor.

## FactoresPrimos.c
Escriba un algoritmo, usando un subprograma para los cálculos, que
dados dos números naturales N y M, produzca la lista de los factores primos de M que son
menores o iguales a N, indicando por cada uno su exponente en la factorización de M. El
programa en Python debe utilizar el mismo esquema de la pregunta 1. Además, puede
1escribir una función que determine si un número es primo; y otra que dado un natural X diga
si divide a otro natural Y. Con estas dos funciones puede determinar cuáles números primos
dividen a M

## Triangulos.c
En geometría los triángulos pueden clasificarse por sus ángulos internos en: acutángulo, rectángulo u
obtusángulo. Esto resulta de la suma de sus ángulos internos, expresados en grados, siempre da 180°. Un
triángulo es:

* Rectángulo: si y sólo si tiene un ángulo recto (es decir de 90°).
* Obtusángulo: si y sólo sí tiene una ángulo obtuso (es decir mayor a 90°).
* Acutángulo: si y sólo sí todos sus ángulos son agudos (es decir menores a 90°).

Haga un programa en PYTHON que solicite al usuario las medidas en grados de los tres ángulos de un
triángulo específico y determine a que clasificación se corresponde.

## ValorE.c
La constante e, la cual es la base de los logaritmos naturales se representa con una larga cantidad de decimales
(por ejemplo: 2.7182818284...). Existen fórmulas aproximadas para calcular el valor de e. Una de estas
fórmulas es sumar, hasta cierto límite, los términos de la serie infinita: 1, 1/1!, 1/2!, 1/3!, 1/4!, ... .
Puede establecerse el límite mediante un número natural n de forma que se para cuando se haya sumado el
término 1/n!, a esto lo llamaremos la opción de limitar por iteraciones. También es posible establecer el límite
mediante una cota real ε de forma que se pare cuando se haya sumado el primer término 1/n! que sea
estrictamente menor que ε, a esto lo llamaremos la opción de limitar por precisión.
Se desea hacer un programa en PYTHON que calcule una aproximación de e mediante el método descrito. El
programa debe manejar dos opciones limitar por iteraciones y limitar por precisión, pidiendo al usuario que
establezca el límite según desee. En cualquier caso, el número máximo de iteraciones sería 18. La entrada y
salida debe ser como se muestra en las figuras 1 y 2.

## Apariciones.c
Escriba un procedimiento recursivo que dado un arreglo de enteros calcule
el número de veces que un entero k aparece en el arreglo. 

### NoNulos.c
Escriba un algoritmo que dada una matriz NxN de ceros y unos, calcule el
número de casillas no nulas (diferentes de cero) de la matriz. 