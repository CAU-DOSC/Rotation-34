# Rotation-34

README.txt
This file is for describing a string - operation program we made for class in CAU
----------------------------------------------------------------------------------------------------------------
The code(.c .h) files are in Rotation-34\Rotarion

Ownership description :

README.txt 		�迵��(kimyoungi99)
main.c			�迵��(kimyoungi99)
Gen_data.c		�迵��(kimyoungi99)
Vector_Rotation.c 	��â��
Jugling_Algo.c		������(holoquew)
Reverse.c		�̻�
blockswap.c		ä��  

Function description :
main : 

For handling I/O and measuring lead time
(�� sting function�� ���� string�� ���ڷ� ������ �ص� ���꿡 �ɸ��� �ð��� �����Ͽ� ����Ͽ����ϴ�.)



Vector_rotation : 
char *Vector_rotation(char *ary, int d, int n);

A string function that rotates sting n times(one at a time) and returns a pointer that points result string 



Juggling :
char *Juggling(char arr[], int n, int k)

A string function that rotates sting using juggling method and returns a pointer that points result string 



Reverse :
char *Reverse(char *str, int d, int n)

A string functiong that reverse sting



Generate_array :
char *Generate_array(int length);

A funcion that generates string that has length of value length



Generate_d :
int Generate_d(void);

A funcion that generate random value d

----------------------------------------------------------------------------------------------------------------
���� ��� :
1. ������ ���ϰ� �ϱ� ���� visual studio �ַ���� git���� ���� ������ clone�̳� pull�� ���� ���� ������Ʈ�� ������ �ʾƵ� compile, debugging�� �� �ֵ��� �Ͽ����ϴ�.
2. �ʿ��� �Լ��� ���� �ϳ��� �þƼ� �ϱ�� �Ͽ� �� �Լ����� ������ ���� ����� Owner�� ���ϰ� �ڵ� �ۼ� - �����Ͽ����ϴ�.
----------------------------------------------------------------------------------------------------------------
��� ��� (README.png ����): 
Enter Test Size(string size = 1024*2^n) : 10
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
1024         514                :  1          0          1          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
2048         1538               :  7          0          7          0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
4096         3586               :  31         0          36         0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
8192         -510               :  9          0          10         0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
16384        7682               :  272        0          312        0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
32768        -8708              :  659        0          914        0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
65536        24052              :  4076       0          4455       1
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
131072       89530              :  26251      2          30563      0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
262144       220230             :  132163     3          149645     0
STR Length   Rotate Distance    :  Trivial    Juggling   Reverse    Block      (���� : ms)
524288       480538             :  554436     13         652988     3




