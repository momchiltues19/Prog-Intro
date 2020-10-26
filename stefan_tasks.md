## Task 1

Ще ви бъдат дадени 2 цели числа, разделени чрез нов ред, които образуват интервал, за всяко число от този интервал трябва ако числото е между
0 и 9 трябва да изкарате името му на екрана `example: [0-1] - zero, one`   
а в останалите случаи трябва да се изведе дали числото е четно или не (even - odd). 

## Task 2

Напишете програма която по зададено число n да изпринтира елхичка, която е на n нива.
```
ако n=3
  *  
 ***
*****  
  *  
```

## Task 3

Напишете програма която да изкарва на екрана всички прости делители на зададено число n.

## Task 4

Напишете програма която да изкарва на екрана всички перфектни числа между нула и зададено число n (а може и просто до 500 или 10000, нз кое е по-уместно).
*Note: едно число наричаме перфектно, когато то е равно на сумата на делителите му (без самото число)*
*пр: 6 = 1+2+3; 28 = 1+2+4+7+14*

## Task 5

При дадена целочислена стойност от стандартния вход извежда квадратът и кубът на това число, всяко на нов ред

Примерен вход:
```
10
```
Изход:
```
100
1000
```

Примерен вход:
```
-2
```
Изход:
```
4
-8
```

## Task 6

Напишете програма която да приема числа с плаваща запетая от стандартния вход до достигане на отрицателно такова. Изведете на екрана тяхната сума. 

Примерен вход:
```
1
2.3
4
0.45
-2.1
```
Изход:
```
7.75
```

Примерен вход:
```
-1.24
```
Изход:
```
0
```

## Task 7

Ще ви бъдат дадени 2 цели числа, разделени чрез нов ред, които образуват интервал, за всяко число от този интервал трябва ако числото е между 0 и 9 трябва да изкарате името му на екрана example: [0-1] - zero, one
а в останалите случаи трябва да се изведе дали числото е четно или не (even - odd).

## Task 8

Въвежда се число n, което указва, колко числа ще бъдат въведени. На следващите n
реда се въвежда по едно целочислено число. Да се изведат сумата и средно
аритметичното, всяко на нов ред, като пред сумата е изписано "Sum: ", а пред
средно аритметичното "Avg: ".

*Note: средно аритметичното да бъде закръглено до втори знак след десетичната
запетая!*

Примерен вход:
```
5
1
2
3
4
5
```
Изход:
```
Sum: 15
Avg: 3.00
```

Примерен вход:
```
3
2
-3
0
```
Изход:
```
Sum: -1
Avg: -0.33
```

## Task 9

Подава се число между 1 и 9999. Ако средно аритметичното на цифрите на това число е повече от 7 числото е тежко. В противен случай е леко.

*Note: При 125: 1+2+5 = 8; 8/3 = 2.67, което е по-малко от 7. При 9988: 9 +
9 + 8 + 8 = 34; 34/4 = 8.5, което е повече от 7*

Примерен вход:
```
125
```
Изход:
```
light
```

## Task 10

Въвежда се числата n, m и k. n е което е бройката столове, които трябва да
купим за новия ни офис. Всеки стол струва m пари. На всеки k стола отстъпката
ни се покачва с 2 процента, като започваме от 0% за първите k стола.

Ако искаме да купим 6 стола с цена 100лв и k = 2 - първите 2 стола ще струват
по 100лв, следващиите 2 ще струват 98лв, а последните 2 ще струват 96лв и като
крайна цена ще платим 588лв.

Примерен вход:
```
6
100
2
```
Изход:
```
588
```

Примерен вход:
```
50
50
10
```
Изход:
```
2400
```

## Task 11 (Това е Task C но без нужда от масиви)

Подава се число n. Програмата чете докато не прочете n нечетни числа.
Да се изведат разликите на първото с второто, второто с третото и
т.н., всяко на нов ред (Или може да е нещо от типа да изкарат пъровото - второто + третото - четвъртото и тн, ти прецени кое е по-интересно)

Примерен вход:
```
4
4
8
4
1
8
16
33
20
22
64000
11
17
```
Изход:
```
-32
22
-6
```

Примерен вход:
```
3
1
0
27
17
3
```
Изход:
```
-2
-26
10
14
```

# За тези нз дали няма да трябват масиви и нз дали вие сте ги взимали вече

## Task A

Напишете програма, която да конвертира число към двоична бройна система и да го изкарва на екрана.

## Task B

Въвежда се число n, което указва, колко числа ще бъдат въведени. На следващите n
реда се въвежда по едно целочислено число. Да се изведад в обратен ред.

Примерен вход:
```
5
1
6
-9
157
32865
```
Изход:
```
32865
157
-9
6
1
```

## Task C

Подава се число n. Програмата чете докато не прочете n нечетни числа.
Да се изведат разликите на първото с последното, второто с предпоследното и
т.н., всяко на нов ред

*Note: ако n е нечетно просто да се изведе средния елемент на масива*

*Note2: със сигурност ще ви бъдат подадени n нечетни числа*

*Note3: В случая 4те нечетни числа са 1, 33, 11, 17. Съответно трябва от 1 да
извадим 17 и от 33 да извадим 11*

Примерен вход:
```
4
4
8
4
1
8
16
33
20
22
64000
11
17
```
Изход:
```
-16
22
```

Примерен вход:
```
3
1
17
3
```
Изход:
```
-2
17
```

## Task D

На стандартния вход получавате изречение до 1000 символа. Да се изведе коя буква
колко често се среща(всякакви други символи да не се зачитат - препинателни
знаци, интервали, цифри, т.н.). Буквите да се изведат по азбучен ред, а тези,
които не се срещат да не се извеждат.

**Изходът трябва да бъде във формата {буква} - {брой_срещания}**

Примерен вход:
```
Some sentence using lots of s's!!! 25
```
Изход:
```
c - 1
e - 4
f - 1
g - 1
i - 1
l - 1
m - 1
n - 3
o - 3
s - 6
t - 2
u - 1
```