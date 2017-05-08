
10. Structura ierarhica de clase privitoare la figuri plane, care contine o clasa abstracta, din care deriva clasele:
- puncte
	(date prin perechi de coordonata exprimate in pixeli, perechile fiind date cu ajutorul unei structuri definite separat);
- segmente orizontale
	(date prin 3 numere reprezentand ordonata comuna si cele doua abscise ale capetelor, exprimate in pixeli);
- segmente verticale
	(date prin 3 numere reprezentand abscisa comuna si cele doua ordonate ale capetelor, exprimate in pixeli);
- dreptunghiuri
	(date printr-un punct reprezentand varful din stanga sus si doua numere reprezentand laturile in pixeli).

Operatorii +, * sunt supraincarcati cu operatiile de translatie, respectiv de scalare (adica modificarea fiecarei
coordonata a punctelor figurii prin inmultirea cu un numar real numit factor de scalare atasat respectivei coordonata).

Ambele operatii au primul operand o figura, iar al doilea operand o pereche de numere
reprezentand  vectorul de translatie, respectiv perechea de factori de scalare, rezultatul fiind o figura.

Operatiile se dau ca metode virtuale pure in clasa abstracta si se definesc pentru fiecare clasa de figuri particulare.

Se vor scrie metode de afisare a figurilor, prin supradefinirea unei metode virtuale pure din clasa abstracta,
utilizandu-se functii din bibliotecile grafice.
Clasa abstracta are o data membra de tip int reprezentand tipul de figura,
iar fiecare constructor al unei clase derivate da acestui camp o valoare proprie clasei:
0 pentru puncte, 1 pentru segmente orizontale , 2 pentru segmente verticale , 3 pentru dreptunghiuri.

=================

Structura definita separat = Coordonata (perechi de coordonata exprimate in pixeli, deci de tip int)
Structura definita separat = Factor (o pereche de numere reprezentand  vectorul de translatie, respectiv perechea de factori de scalare - lucreaza cu pixeli, deci de tip int)
O clasa abstracta = FiguraPlana
	- o data membra de tip int reprezentand tipul de figura = tip
	-
Clase derivate:
- Punct = Punct
	- Coordonata coord;
- SegmentH
	- int ordonata, int abscisa1, int abscisa2
- SegmentV
	- int abscisa, int ordonat1, int ordonata2
- Dreptunghi = Rectangle
	- Punct varf, int lungime, int latime