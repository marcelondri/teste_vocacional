#include <cmath>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
main()
{
    setlocale(LC_ALL,"Portuguese");
    system ("color 4f");
    int a=0;
    float b,r1=0,r2=0,r3=0,r4=0,r5=0,r6=0,r7=0,r8=0,r9=0,r10=0,rf=0,rf1=0;
    char q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,tecla,y;
    do{
    system("color 4f");
	system("cls");	
	cout <<"\t ANTES DE USAR ESSE PROGRAMA SE ATENTE A ALGUMAS OBSERVA��ES\n\n\n\n\n\n\n";
    cout <<"Nesse programa voc� s� ir� usar o teclado utilizando n�meros e letras para sele-cionar as op��es\n\n\n\n";
    cout <<"Depois de selecionar um n�mero ou letra aperte enter para prosseguir \n\n\n\n\n";
    cout <<"\t\t Criado por : Vinicius Moura, ";
    cout <<"Victor Klempe\n\n\n\n\n";
    cout <<"\t\t\t  TECLE QUALQUER TECLA";
    tecla=getch();
	system ("cls");
       cout <<"\t\t\t Bem vindo ao teste vocacional\n\n\n";
       cout <<"\t   Selecione um curso para ver se realmente combina com voc�\n\n\n\n\n";
       cout <<"\t\t\t ----------------------------\n";
	   cout <<"\t\t\t | (1) Administra��o        |\n";
	   cout <<"\t\t\t ----------------------------\n";
       cout <<"\t\t\t | (2) Informatica          |\n";
       cout <<"\t\t\t ----------------------------\n";
       cout <<"\t\t\t | (3) Seguran�a do trabalho|\n";
       cout <<"\t\t\t ----------------------------\n";
       cout <<"\t\t\t | (4) Enfermagem           |\n";
       cout <<"\t\t\t ----------------------------\n\n";
       cout <<"\n\nSua resposta : ";
    cin >>a;
    if (a==1) //COME�A QUESTIONARIO ADMINISTRA��O
	{
	system("cls");
	system("color F1");
	   cout <<"\t\t\t\t  Administra��o\n\n\n\n\n\n";
	   cout <<"\nHumm escolheu administra��o, ser� que voc� est� pronto para ser um profissional";
	   cout <<" que vai gerenciar os recursos humanos, materias, e financeiros de uma empresa ?\n\n\n\n\n\n";
	   cout <<"\t\t\ttecle enter para come�ar o teste";
	tecla=getch();
	system("cls");
	system ("color F1");
	   cout <<"1) Tem interesse em gest�o de empreendimento ? \n\n\n";
	   cout <<"\n A) Tenho interesse em todo o aspecto de gest�o de uma empresa.\n\n\n";
	   cout <<"\n B) N�o tenho interesse algum.\n\n\n";
	   cout <<"\n C) N�o sei, para dizer a verdade, n�o entendi nem o significado da pergunta.\n\n\n";
	   cout <<"\n D) Tenho um pouco de interesse, mas ainda estou em d�vidas em outras carreiras.\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q1;

	if ((q1=='a')||(q1=='A'))
	{
		r1=1;
	}
	system("cls");
	   cout <<"2) Gosta de trabalhar em equipe, consegue visualizar as capacidades\n";
	   cout << "   individuais de cada integrante.\n\n\n";
	   cout <<"\n A) Gosto muito do trabalho em equipe, muitas vezes � um desafio gerenciar as";
	   cout <<"\t    habilidades de todos os integrantes.\n\n\n";
	   cout <<"\n B) Sou individualista.\n\n\n";
	   cout <<"\n C) N�o gosto de trabalho em equipe, prefiro fazer tudo sozinho.\n\n\n";
	   cout <<"\n D) Eu gosto um pouco, mas acho mais produtivo fazer tudo eu mesmo.\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q2;
	if ((q2=='a')|| (q2 =='A')){
		r2=1;
	}
	system("cls");
	cout <<"3) J� pensou alguma vez em ter o pr�prio neg�cio? Imaginou todos os \n ";
	cout <<"  desafios que estariam envolvidos ?\n\n\n";
	cout <<"\n A) J� pensei diversas vezes, at� mesmo em gerenciar uma empresa familiar. Penso que � um grande desafio abrir o pr�prio neg�cio tamb�m e a id�ia me fascina.\n\n\n";
	cout <<"\n B) Nunca pensei.\n\n\n";
	cout <<"\n C) As vezes penso e d� a maior pregui�a.\n";
	cout <<"\n\n\n D) Prefiro trabalhar para os outros, prefiro que me digam o que fazer e quando fazer.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='a')|| (q3=='A')){
		r3=1;
	}
	system("cls");
	cout <<"4) Possui habilidade para dar bons conselhos e escutar as pessoas,\n";
	cout <<"   Consegue trabalhar e desenvolver suas pr�prias habilidades ?\n\n\n";
	cout <<"\n A) N�o tenho paci�ncia para me relacionar socialmente.\n\n\n";
	cout <<"\n B) Prefiro mais falar sobre mim.\n\n\n";
	cout <<"\n C) Sou uma pessoa bastante limitada, geralmente sou eu que escuto os conselhos.\n";
	cout <<"\n D) Sou um �timo ouvinte e reflito muito para dar conselhos Tenho consci�ncia   dos meus limites e meu potencial.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q4;
	if ((q4=='d')|| (q4=='D')){
		r4=1;
	}
		system("cls");
	cout <<"5) Consegue gerenciar bem os conflitos presentes na sua vida familiar e de trabalho, etc?\n\n\n";
	cout <<"\n A) De forma alguma, algumas vezes sou eu a fonte dos problemas!\n\n\n";
	cout <<"\n B) Tenho bastante jogo de cintura, gerenciar conflitos � uma especialidade que executo bem.\n\n\n";
	cout <<"\n C) Fujo de todos os conflitos, desta forma n�o preciso resolver coisa alguma!\n";
	cout <<"\n\n\n D) Tenho bastante dificuldade, prefiro me isolar a ter que resolver algum\n";
	cout <<"conflito.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q5;
	if ((q5=='b')|| (q5=='B')){
		r5=1;
	}
		system("cls");
	cout <<"6) Consegue vender bem suas qualidades e minimizar seus defeitos?\n\n\n";
	cout <<"\n A) Escondo bem meus defeitos!\n\n\n";
	cout <<"\n B) Geralmente o que acontece � o contr�rio.\n\n\n";
	cout <<"\n C) � uma habilidade que possuo e desenvolvo cada dia mais. Muitas vezes falam\n";
	cout <<"que sou muito ''marketeiro''.\n";
	cout <<"\n\n\n D) N�o tenho essa habilidade.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q6;
	if ((q6=='c')|| (q6=='C')){
		r6=1;
	}
		system("cls");
	cout <<"7) Entende a import�ncia de ter um perfil s�rio no trabalho? Respeita\n";
	cout <<"as pessoas e tamb�m � respeitado?\n\n\n";
	cout <<"\n A) Entendo perfeitamente esta necessidade, entendo tamb�m como a postura\n";
	cout <<"profissional � importante para uma carreira de sucesso.\n\n\n";
	cout <<"\n B) Sou uma pessoa muito divertida, n�o consigo ficar s�rio em momento algum.\n\n\n";
	cout <<"\n C) S� respeito quem me respeita, comigo � olho no olho!\n";
	cout <<"\n\n\n D) N�o entendo, acho que n�o nasci para trabalhar.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='a')|| (q7=='A')){
		r7=1;
	}
	system("cls");
	cout <<"8) Em qual dos perfis abaixo voc� melhor se encaixa?\n\n\n";
	cout <<"\n A) O observador\n\n\n";
	cout <<"\n B) O l�der\n\n\n";
	cout <<"\n C) O flex�vel\n\n\n";
	cout <<"\n D) O construtor\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='b')|| (q8=='B')){
		r8=1;
	}
	system("cls");
	cout <<"9)  Como voc� projeta sua vida para daqui 5 anos?\n\n\n";
	cout <<"\n A) Procuro n�o pensar no futuro, pois meu sucesso depende muito da oportunidade dada por outras pessoas.\n\n";
	cout <<"\n B) Tenho v�rios planos, entre eles o de montar meu pr�prio neg�cio. Por�m, n�o tenho muita certeza de que dar� certo, pois muitas empresas fecham logo no";
	cout <<"in�cio de sua exist�ncia\n\n";
	cout <<"\n C) Imagino-me um empreendedor de sucesso, com meu pr�prio neg�cio concretizado e bastante competitivo no mercado. Tenho este anseio e s� depende de mim alcan�-�lo. \n";
	cout <<"\n\n D) Trabalhar em uma grande empresa sendo um funcion�rio dela.\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='c')|| (q9=='C')){
		r9=1;
	}
		system("cls");
	cout <<"10)  Se algo der errado em algum projeto profissional, voc�:\n\n\n";
	cout <<"\n A) N�o se deixa abalar, afinal, para que as coisas sejam resolvidas � necess�rio manter a calma. \n\n\n";
	cout <<"\n B) Acredita que tudo ir� se resolver da melhor maneira, mas que � preciso trabalhar para que a melhora aconte�a. \n\n\n";
	cout <<"\n C) Acha que o mundo est� desabando e que, por mais que voc� se esforce, nada poder� ajud�-lo a resolver o problema. \n\n";
	cout <<"\n D) Tenta resolver de qualquer jeito e entregar mesmo que esteja errado. \n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q10;
	if ((q10=='b')|| (q10=='B')){
		r10=1;
	}
     rf=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
     rf1=rf/10*100;
     system ("cls");
     cout <<"\n\n\n\n\n\n\t\tVOC� POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
     cout <<"\t   Quer conhecer mais sobre esse curso? visite a sala : 20 e 21\n\n\n\n\n";
}

	else if (a==2) // Inform�tica
	{
	system("cls");
	system("color 0A");
	   cout <<"\t\t  Inform�tica/ Desenvolvimento de sistemas\n\n\n\n\n\n";
	   cout <<"Vejo que escolheu inform�tica, aonde voc� vai aprender l�nguagens de programa��o para cria��o de sites, aplicativos at� mesmo jogos, sendo uma �rea aonde tem";
	   cout <<"   uma infinidade de caminhos para seguir.  \n\n\n\n\n\n";
	   cout <<"\t\t\ttecle enter para come�ar o teste";
	tecla=getch();
	system("cls");
	system ("color 0A");
	   cout <<"\t\t1) S�o op��es do Painel de Controle, exceto: \n\n\n";
	   cout <<"\n A) V�deo.\n\n\n";
	   cout <<"\n B) Adicionar ou remover programas.\n\n\n";
	   cout <<"\n C) Adicionar ou remover Hardware.\n\n\n";
	   cout <<"\n D) Mouse.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q1;

	if ((q1=='c')||(q1=='C'))
	{
		r1=1;
	}
	system("cls");
	   cout <<"\t\t2) Voc� gosta de matem�tica e l�gica ? \n\n\n";
	   cout <<"\n A) Sim, Gosto dos dois.\n\n\n";
	   cout <<"\n B) N�o, eu n�o sou de exatas.\n\n\n";
	   cout <<"\n C) N�o gosto, mas eu fa�o.\n\n\n";
	   cout <<"\n D) S� gosto da l�gica.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q2;
	if ((q2=='a')|| (q2 =='A')){
		r2=1;
	}
	system("cls");
	cout <<"\t\t3) J� pensou em desenvolver algum aplicativo ?\n\n\n ";
	cout <<"\n A) Sim, mas eu prefiro pagar por isso.\n\n\n";
	cout <<"\n B) Sim, j� tive ideias mas n�o sei programar.\n\n\n";
	cout <<"\n C) N�o, nunca pensei.\n\n\n";
	cout <<"\n D) Sim, mas nunca tive vontade.\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='b')|| (q3=='B')){
		r3=1;
	}
	system("cls");
	cout <<"\t\t4) Voc� j� quis desenvolver algum jogo ?\n\n\n";
	cout <<"\n A) N�o, estou sat�sfeito com os que existe.\n\n\n";
	cout <<"\n B) Sim, J� tive �deias mas n�o sei programar.\n\n\n";
	cout <<"\n C) Sim, mas tenho pregui�a em montar c�digos.\n\n\n";
	cout <<"\n D) N�o, eu n�o gosto de jogos eletronico.\n\n";
	cout <<"\n\nSua resposta : ";
	//cout <<"";
	fflush(stdin);
	cin>>q4;
	if ((q4=='B')|| (q4=='b')){
		r4=1;
	}
		system("cls");
	cout <<"\t\t5) Voc� tem facilidade de memorizar de que maneira ?\n\n\n";
	cout <<"\n A) Lendo a lousa. \n\n\n";
	cout <<"\n B) Copiando.\n\n\n";
	cout <<"\n C) Na pr�tica.\n\n\n";
	cout <<"\n D) Tenho d�ficuldades em memorizar.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q5;
	if ((q5=='c')|| (q5=='C')){
		r5=1;
	}
		system("cls");
	cout <<"\t\t6) De quais caracter�sticas suas voc� sente orgulho ?\n\n\n";
	cout <<"\n A) Aud�cia e facilidade para lidar com o inesperado.\n\n\n";
	cout <<"\n B) Senso de dever e capacidade de dar o exemplo.\n\n\n";
	cout <<"\n C) Idealismo e disposi��o para compreender os outros.\n";
	cout <<"\n\n\n D) Engenhosidade e rapidez mental.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q6;
	if ((q6=='d')|| (q6=='D')){
		r6=1;
	}
		system("cls");
	cout <<"\t\t7) Voc� costuma confiar mais em:\n\n\n";
	cout <<"\n A) Sua percep��o, que � agu�ada.\n\n\n";
	cout <<"\n B) Intui��es e pressentimentos.\n\n\n";
	cout <<"\n C) Raz�o e l�gica \n\n\n";
	cout <<"\n D) Costumes e tradi��es.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='c')|| (q7=='C')){
		r7=1;
	}
	system("cls");
	cout <<"\t\t8) Voc� acredita que:\n\n\n";
	cout <<"\n A) A propaganda � a alma do neg�cio.\n\n\n";
	cout <<"\n B) Sem tecnologia, n�o h� trabalho para todos.\n\n\n";
	cout <<"\n C) Objetos bonitos enriquecem a vida.\n\n\n";
	cout <<"\n D) Se n�o cuidarmos do planeta, a esp�cie humana poder� desaparecer rapidinho.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='b')|| (q8=='B')){
		r8=1;
	}
	system("cls");
	cout <<"\t\t9)  Voc� possui facilidade de trabalhar em grupo ?\n\n\n";
	cout <<"\n A) N�o. Sou uma pessoa mais reservada.\n\n\n";
	cout <<"\n B) Sim. Juntos somo mais fortes\n\n\n";
	cout <<"\n C) N�o, mas tento trabalhar.\n\n\n";
	cout <<"\n D) Sou um pouco timido, mas me esfor�o.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='b')|| (q9=='B')){
		r9=1;
	}
		system("cls");
	cout <<"\t\t10)	Voc� gosta da �rea de inform�tica?\n\n\n";
	cout <<"\n A) Sim, Sempre quis trabalhar nessa �rea.\n\n\n";
	cout <<"\n B) Sim, mas n�o trabalharia nela.\n\n\n";
	cout <<"\n C) N�o, mas trabalharia por conta do dinheiro.\n\n\n";
	cout <<"\n D) N�o faz meu tipo.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q10;
	if ((q10=='b')|| (q10=='B')){
		r10=1;
	}
     rf=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
     rf1=rf/10*100;
     system ("cls");
     cout <<"\n\n\n\n\n\n\t\tVOC� POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
    // cout <<"Quer conhecer mais sobre esse curso? visite a sala : ";
}
     //terminou inform�tica

	if (a==3) //Seguran�a do trabalho
	{
	system("cls");
	system("color 2F");
	   cout <<"\t\t  Seguran�a do trabalho\n\n\n\n\n\n";
	   cout <<"WOW seguran�a de trabalho ? s�rio.\n\n";
	   cout <<"Voc� seguindo essa carreira dever� se preocupar com seus funcion�rios em quest�o de sa�de e prote��o at� mesmo aumentar sua produ��o, preocupando tamb�m com o  emocional de cada funcion�rio. \n\n\n\n";
	   cout <<"\n\n\t\t\ttecle enter para come�ar o teste";
	tecla=getch();
	system("cls");
	system ("color 2F");
	   cout <<"\t\t1) Quais dos verbos abaixo mais representa voc�: \n\n\n";
	   cout <<"\n A) Comunicar.\n\n\n";
	   cout <<"\n B) Ensinar.\n\n\n";
	   cout <<"\n C) Escrever.\n\n\n";
	   cout <<"\n D) Pensar.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q1;

	if ((q1=='a')||(q1=='A'))
	{
		r1=1;
	}
	system("cls");
	   cout <<"\t\t2) Quais das habilidades abaixo voc� julga possuir ? \n\n\n";
	   cout <<"\n A) Desenvolver an�lises, teses e argumentos.\n\n\n";
	   cout <<"\n B) Transmitir mensagens e conhecimentos.\n\n\n";
	   cout <<"\n C) Lidar com a natureza e os animais.\n\n\n";
	   cout <<"\n D) Aten��o aos detalhes.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q2;
	if ((q2=='d')|| (q2 =='D')){
		r2=1;
	}
	system("cls");
	cout <<"\t\t3) Se voc� tivesse que fazer um trabalho volunt�rio qual seria ?\n\n\n ";
	cout <<"\n A) Aulas de futebol com crian�as carentes.\n\n\n";
	cout <<"\n B) Trabalhar na educa��o de jovens e adultos.\n\n\n";
	cout <<"\n C) Criar e organizar uma biblioteca comunit�ria.\n\n\n";
	cout <<"\n D) Fazer um levantamento sobre as necessidades de determinada comunidade e pensar em formas de atender a demanda.\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='d')|| (q3=='D')){
		r3=1;
	}
	system("cls");
	cout <<"\t\t4) Voc� gostaria que seu trabalho exigisse o uso de roupas: \n\n\n";
	cout <<"\n A) Formais, como ternos.\n\n\n";
	cout <<"\n B) Trajes de seguran�a.\n\n\n";
	cout <<"\n C) Uniformes.\n\n\n";
	cout <<"\n D) Informais, como jeans.\n\n";
	cout <<"\n\nSua resposta : ";
	//cout <<"";
	fflush(stdin);
	cin>>q4;
	if ((q4=='B')|| (q4=='b')){
		r4=1;
	}
		system("cls");
	cout <<"\t\t5) Na escola eu geralmente me destacava por:\n\n\n";
	cout <<"\n A) N�o prestar aten��o nas aulas. \n\n\n";
	cout <<"\n B) Ser atencioso e ajudar meus colegas.\n\n\n";
	cout <<"\n C) Ser bastante didicado aos esportes.\n\n\n";
	cout <<"\n D) Ser engr�ado e contar piadas.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q5;
	if ((q5=='b')|| (q5=='B')){
		r5=1;
	}
		system("cls");
	cout <<"\t\t6) Voc� se descreve como uma pessoa:\n\n\n";
	cout <<"\n A) Calma e um tanto intelectual.\n\n\n";
	cout <<"\n B) Impulsiva e um tanto aventureira.\n\n\n";
	cout <<"\n C) Cautelosa e sempre respons�vel.\n\n\n";
	cout <<"\n D) Entusiasmanda e automotivada.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q6;
	if ((q6=='c')|| (q6=='C')){
		r6=1;
	}
		system("cls");
	cout <<"\t\t7) No seu dia a dia, voc� tem facilidade em lidar com:\n\n\n";
	cout <<"\n A) Animais.\n\n\n";
	cout <<"\n B) Arte.\n\n\n";
	cout <<"\n C) Pessoas.\n\n\n";
	cout <<"\n D) M�quinas.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='c')|| (q7=='C')){
		r7=1;
	}
	system("cls");
	cout <<"\t\t8) Voc� � uma pessoa organizada.\n\n\n";
	cout <<"\n A) Sim, mas uma baguncinha de vez em quando � bom.\n\n\n";
	cout <<"\n B) N�o, nem ligo muito pra isso n�o.\n\n\n";
	cout <<"\n C) Um pouco, quando alguem me visita ajeito as coisas.\n\n\n";
	cout <<"\n D) Detalhista, tudo tem que estar em plena organiza��o.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='d')|| (q8=='D')){
		r8=1;
	}
	system("cls");
	cout <<"\t\t9)  Qual atividade voc� se indentifica mais ?\n\n\n";
	cout <<"\n A) Algo voltado para o ensino.\n\n\n";
	cout <<"\n B) Algo ligado a prote��o.\n\n\n";
	cout <<"\n C) Algo voltado a contru��o.\n\n\n";
	cout <<"\n D) Cuidado com animais.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='b')|| (q9=='B')){
		r9=1;
	}
		system("cls");
	cout <<"\t\t10)	Quando chega em um lugar voc� primeiro:\n\n\n";
	cout <<"\n A) Analisa o ambiente, e percebe se tem perigos eminentes em sua volta.\n\n\n";
	cout <<"\n B) N�o presta aten��o em sua volta.\n\n\n";
	cout <<"\n C) Ve alguns problemas mas n�o se importa\n\n\n";
	cout <<"\n D) Tenho medo de sair de casa por conta dos perigos.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q10;
	if ((q10=='a')|| (q10=='A')){
		r10=1;
	}
     rf=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
     rf1=rf/10*100;
     system ("cls");
     cout <<"\n\n\n\n\n\n\t\tVOC� POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
     cout <<"\t   Quer conhecer mais sobre esse curso? visite a sala : 12\n\n\n\n\n";
}
	//termina seguran�a do trabalho

	else if (a==4) //Enfermagem
	{
	system("cls");
	system("color F2");
	   cout <<"\t\t\t\t  Enfermagem\n\n\n\n\n\n";
	   cout <<"\n Preparado para cuidar das pessoas e ajud�-las a recuperar a sa�de. A profiss�o de enfermeiro exige dedica��o e comprometimento com o pr�ximo.\n\n\n\n";
	   cout <<"\n\n\t\t\ttecle enter para come�ar o teste";
	tecla=getch();
	system("cls");
	system ("color F2");
	   cout <<"\t1) Quais das �reas de estudo abaixo indicadas voc� mais gosta ? \n\n\n";
	   cout <<"\n A) Tenho um interesse bastante definido por ci�ncias exatas.\n\n\n";
	   cout <<"\n B) Tenho predile��o pela �rea de humanas e muita dificuldade para lidar com ";
	   cout <<"exatas. \n\n\n";
	   cout <<"\n C) Meu interesse � claramente voltado �s ci�ncias biol�gicas.\n\n\n";
	   cout <<"\n D) Gosto das disciplinas de biol�gicas e humanas.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q1;
	if ((q1=='d')||(q1=='D'))
	{
		r1=1;
	}
	system("cls");
	   cout <<"\t2) Qual destes grupos de ideias est� mais relacionado ao que voc� vislumbra fazer no futuro?\n\n\n";
	   cout <<"\n A) Gerir, cuidar, assistir, orientar.\n\n\n";
	   cout <<"\n B) Debater, discutir, criar, escrever.\n\n\n";
	   cout <<"\n C) Analisar, ponderar, refletir, argumentar.\n\n\n";
	   cout <<"\n D) Cuidar, capacitar, recuperar, estimular.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q2;
	if ((q2=='d')|| (q2 =='D')){
		r2=1;
	}
	system("cls");
	cout <<"\t3) Qual destas atividades escolares mais te interessa?\n\n\n ";
	cout <<"\n A) Assistir a document�rios.\n\n\n";
	cout <<"\n B) Dar assist�ncia a uma comunidade carente.\n\n\n";
	cout <<"\n C) Arrecadar dinheiro da turma para um projeto.\n\n\n";
	cout <<"\n D) Organizar a comiss�o de formatura.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='b')|| (q3=='B')){
		r3=1;
	}
	system("cls");
	cout <<"\t4) Em quais destes ambientes voc� se sente mais a vontade?\n\n\n";
	cout <<"\n A) Em uma floresta.\n\n\n";
	cout <<"\n B) Em centros esportivos.\n\n\n";
	cout <<"\n C) Em um hospital.\n\n\n";
	cout <<"\n D) Em shoppings.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q4;
	if ((q4=='c')|| (q4=='C')){
		r4=1;
	}
		system("cls");
	cout <<"\t5) Se voc� tivesse que escolher uma atividade para exercer por 6 meses  seria?\n\n\n";
	cout <<"\n A) Reformar uma casa.\n\n\n";
	cout <<"\n B) Me colocar em contato com pessoas bem-sucedidas.\n\n\n";
	cout <<"\n C) Algo que pudesse ser realizado em equipe.\n\n\n";
	cout <<"\n D) Uma atividade volunt�ria e com a qual eu pudesse ajudar o maior n�mero de pessoas.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q5;
	if ((q5=='d')|| (q5=='D')){
		r5=1;
	}
		system("cls");
	cout <<"\t6) O emprego ideal � aquele no qual voc�:\n\n\n";
	cout <<"\n A) Traz seguran�a.\n\n\n";
	cout <<"\n B) Surpreende ou emociona as pessoas. \n\n\n";
	cout <<"\n C) Contribui com a sociedade.\n\n\n";
	cout <<"\n D) Aprende muito.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q6;
	if ((q6=='c')|| (q6=='C')){
		r6=1;
	}
		system("cls");
	cout <<"\t7) O que voc� mais valoriza?\n\n\n";
	cout <<"\n A) Os fatos.\n\n\n";
	cout <<"\n B) O estudo e a reflex�o.\n\n\n";
	cout <<"\n C) O prazer e as emo��es.\n\n\n";
	cout <<"\n D) O direito e o bem estar de todos.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='d')|| (q7=='D')){
		r7=1;
	}
	system("cls");
	cout <<"\t8) O que mais te incomoda � quando as pessoas...\n\n\n";
	cout <<"\n A) N�o respeitam as outras.\n\n\n";
	cout <<"\n B) Burlam ou ignoram regras.\n\n\n";
	cout <<"\n C) Demoram muito pra tomar uma decis�o.\n\n\n";
	cout <<"\n D) Desmonstram pregui�a ou submiss�o.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='a')|| (q8=='A')){
		r8=1;
	}
	system("cls");
	cout <<"\t9)  Voc� prefere levar sua vida:\n\n\n";
	cout <<"\n A) Com pouca rotina e poucas regras.\n\n\n";
	cout <<"\n B) Com regras definidas e disciplina.\n\n\n";
	cout <<"\n C) Interagindo com todo tipo de pessoa.\n\n\n";
	cout <<"\n D) Com muita autonomia: �na sua�.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='c')|| (q9=='C')){
		r9=1;
	}
		system("cls");
	cout <<"\t10)  Voc� � muito bom lidando com:\n\n\n";
	cout <<"\n A) Ferramentas, instrumentos e equipamentos.\n\n\n";
	cout <<"\n B) Pessoas de todos os n�veis sociais e culturais.\n\n\n";
	cout <<"\n C) Controle do tempo, comando e execu��o.\n\n\n";
	cout <<"\n D) Sistemas e constru��o (material ou mental).\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q10;
	if ((q10=='b')|| (q10=='B')){
		r10=1;
	}
     rf=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
     rf1=rf/10*100;
     system ("cls");
     cout <<"\n\n\n\n\n\n\t\tVOC� POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
     cout <<"\t   Quer conhecer mais sobre esse curso? visite a sala : 9\n\n\n\n\n";
      //termina enfermagem
	}
	
	cout <<"Aperte qualquer tecla para voltar, aperte 3 vezes ESC para sair \n\n\n\n";
	y=getch();
	
	
}while (y!=27);
 	system("pause");
}


