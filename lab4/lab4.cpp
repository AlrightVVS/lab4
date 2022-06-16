#include "Dictionary.cpp"
int main()
{
	Dictionary<char[20]> diction;
	char text1[20] = { "Polo G" };
	char text2[20] = { "Trippie Redd" };
	char text3[20] = { "Lil Durk" };
	char text4[20] = { "NLE Choppa" };
	char text5[20] = { "42 Dugg" };
	char text6[20] = { "Nardo Wick" };
	char text7[20] = { "Fivio Foreign" };
	char text8[20] = { "Kanye West" };
	char text9[20] = { "Lil Tjay" };


char text10[20] = { "Gucci Mane" };
char text11[20] = { "Lil Baby" };
char text12[20] = { "J Cole" };
char text13[20] = { "Kodak Black" };
char text14[20] = { "Kendrick Lamar" };
char text15[20] = { "KSI" };
diction.INSERT(text1);
diction.INSERT(text2);
diction.INSERT(text3);
diction.INSERT(text4);
diction.INSERT(text5);
diction.INSERT(text6);
diction.INSERT(text7);
diction.INSERT(text8);
diction.INSERT(text9);
diction.INSERT(text10);
diction.INSERT(text11);
diction.INSERT(text12);
diction.INSERT(text13);
diction.INSERT(text14);
diction.INSERT(text15);
diction.PRINT();
return 0;
}