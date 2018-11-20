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
	cout <<"\t ANTES DE USAR ESSE PROGRAMA SE ATENTE A ALGUMAS OBSERVAÇÕES\n\n\n\n\n\n\n";
    cout <<"Nesse programa você só irá usar o teclado utilizando números e letras para sele-cionar as opções\n\n\n\n";
    cout <<"Depois de selecionar um número ou letra aperte enter para prosseguir \n\n\n\n\n";
    cout <<"\t\t Criado por : Vinicius Moura, ";
    cout <<"Victor Klempe\n\n\n\n\n";
    cout <<"\t\t\t  TECLE QUALQUER TECLA";
    tecla=getch();
	system ("cls");
       cout <<"\t\t\t Bem vindo ao teste vocacional\n\n\n";
       cout <<"\t   Selecione um curso para ver se realmente combina com você\n\n\n\n\n";
       cout <<"\t\t\t ----------------------------\n";
	   cout <<"\t\t\t | (1) Administração        |\n";
	   cout <<"\t\t\t ----------------------------\n";
       cout <<"\t\t\t | (2) Informatica          |\n";
       cout <<"\t\t\t ----------------------------\n";
       cout <<"\t\t\t | (3) Segurança do trabalho|\n";
       cout <<"\t\t\t ----------------------------\n";
       cout <<"\t\t\t | (4) Enfermagem           |\n";
       cout <<"\t\t\t ----------------------------\n\n";
       cout <<"\n\nSua resposta : ";
    cin >>a;
    if (a==1) //COMEÇA QUESTIONARIO ADMINISTRAÇÃO
	{
	system("cls");
	system("color F1");
	   cout <<"\t\t\t\t  Administração\n\n\n\n\n\n";
	   cout <<"\nHumm escolheu administração, será que você está pronto para ser um profissional";
	   cout <<" que vai gerenciar os recursos humanos, materias, e financeiros de uma empresa ?\n\n\n\n\n\n";
	   cout <<"\t\t\ttecle enter para começar o teste";
	tecla=getch();
	system("cls");
	system ("color F1");
	   cout <<"1) Tem interesse em gestão de empreendimento ? \n\n\n";
	   cout <<"\n A) Tenho interesse em todo o aspecto de gestão de uma empresa.\n\n\n";
	   cout <<"\n B) Não tenho interesse algum.\n\n\n";
	   cout <<"\n C) Não sei, para dizer a verdade, não entendi nem o significado da pergunta.\n\n\n";
	   cout <<"\n D) Tenho um pouco de interesse, mas ainda estou em dúvidas em outras carreiras.\n\n";
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
	   cout <<"\n A) Gosto muito do trabalho em equipe, muitas vezes é um desafio gerenciar as";
	   cout <<"\t    habilidades de todos os integrantes.\n\n\n";
	   cout <<"\n B) Sou individualista.\n\n\n";
	   cout <<"\n C) Não gosto de trabalho em equipe, prefiro fazer tudo sozinho.\n\n\n";
	   cout <<"\n D) Eu gosto um pouco, mas acho mais produtivo fazer tudo eu mesmo.\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q2;
	if ((q2=='a')|| (q2 =='A')){
		r2=1;
	}
	system("cls");
	cout <<"3) Já pensou alguma vez em ter o próprio negócio? Imaginou todos os \n ";
	cout <<"  desafios que estariam envolvidos ?\n\n\n";
	cout <<"\n A) Já pensei diversas vezes, até mesmo em gerenciar uma empresa familiar. Penso que é um grande desafio abrir o próprio negócio também e a idéia me fascina.\n\n\n";
	cout <<"\n B) Nunca pensei.\n\n\n";
	cout <<"\n C) As vezes penso e dá a maior preguiça.\n";
	cout <<"\n\n\n D) Prefiro trabalhar para os outros, prefiro que me digam o que fazer e quando fazer.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='a')|| (q3=='A')){
		r3=1;
	}
	system("cls");
	cout <<"4) Possui habilidade para dar bons conselhos e escutar as pessoas,\n";
	cout <<"   Consegue trabalhar e desenvolver suas próprias habilidades ?\n\n\n";
	cout <<"\n A) Não tenho paciência para me relacionar socialmente.\n\n\n";
	cout <<"\n B) Prefiro mais falar sobre mim.\n\n\n";
	cout <<"\n C) Sou uma pessoa bastante limitada, geralmente sou eu que escuto os conselhos.\n";
	cout <<"\n D) Sou um ótimo ouvinte e reflito muito para dar conselhos Tenho consciência   dos meus limites e meu potencial.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q4;
	if ((q4=='d')|| (q4=='D')){
		r4=1;
	}
		system("cls");
	cout <<"5) Consegue gerenciar bem os conflitos presentes na sua vida familiar e de trabalho, etc?\n\n\n";
	cout <<"\n A) De forma alguma, algumas vezes sou eu a fonte dos problemas!\n\n\n";
	cout <<"\n B) Tenho bastante jogo de cintura, gerenciar conflitos é uma especialidade que executo bem.\n\n\n";
	cout <<"\n C) Fujo de todos os conflitos, desta forma não preciso resolver coisa alguma!\n";
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
	cout <<"\n B) Geralmente o que acontece é o contrário.\n\n\n";
	cout <<"\n C) É uma habilidade que possuo e desenvolvo cada dia mais. Muitas vezes falam\n";
	cout <<"que sou muito ''marketeiro''.\n";
	cout <<"\n\n\n D) Não tenho essa habilidade.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q6;
	if ((q6=='c')|| (q6=='C')){
		r6=1;
	}
		system("cls");
	cout <<"7) Entende a importância de ter um perfil sério no trabalho? Respeita\n";
	cout <<"as pessoas e também é respeitado?\n\n\n";
	cout <<"\n A) Entendo perfeitamente esta necessidade, entendo também como a postura\n";
	cout <<"profissional é importante para uma carreira de sucesso.\n\n\n";
	cout <<"\n B) Sou uma pessoa muito divertida, não consigo ficar sério em momento algum.\n\n\n";
	cout <<"\n C) Só respeito quem me respeita, comigo é olho no olho!\n";
	cout <<"\n\n\n D) Não entendo, acho que não nasci para trabalhar.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='a')|| (q7=='A')){
		r7=1;
	}
	system("cls");
	cout <<"8) Em qual dos perfis abaixo você melhor se encaixa?\n\n\n";
	cout <<"\n A) O observador\n\n\n";
	cout <<"\n B) O líder\n\n\n";
	cout <<"\n C) O flexível\n\n\n";
	cout <<"\n D) O construtor\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='b')|| (q8=='B')){
		r8=1;
	}
	system("cls");
	cout <<"9)  Como você projeta sua vida para daqui 5 anos?\n\n\n";
	cout <<"\n A) Procuro não pensar no futuro, pois meu sucesso depende muito da oportunidade dada por outras pessoas.\n\n";
	cout <<"\n B) Tenho vários planos, entre eles o de montar meu próprio negócio. Porém, não tenho muita certeza de que dará certo, pois muitas empresas fecham logo no";
	cout <<"início de sua existência\n\n";
	cout <<"\n C) Imagino-me um empreendedor de sucesso, com meu próprio negócio concretizado e bastante competitivo no mercado. Tenho este anseio e só depende de mim alcanç-álo. \n";
	cout <<"\n\n D) Trabalhar em uma grande empresa sendo um funcionário dela.\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='c')|| (q9=='C')){
		r9=1;
	}
		system("cls");
	cout <<"10)  Se algo der errado em algum projeto profissional, você:\n\n\n";
	cout <<"\n A) Não se deixa abalar, afinal, para que as coisas sejam resolvidas é necessário manter a calma. \n\n\n";
	cout <<"\n B) Acredita que tudo irá se resolver da melhor maneira, mas que é preciso trabalhar para que a melhora aconteça. \n\n\n";
	cout <<"\n C) Acha que o mundo está desabando e que, por mais que você se esforce, nada poderá ajudá-lo a resolver o problema. \n\n";
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
     cout <<"\n\n\n\n\n\n\t\tVOCÊ POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
     cout <<"\t   Quer conhecer mais sobre esse curso? visite a sala : 20 e 21\n\n\n\n\n";
}

	else if (a==2) // Informática
	{
	system("cls");
	system("color 0A");
	   cout <<"\t\t  Informática/ Desenvolvimento de sistemas\n\n\n\n\n\n";
	   cout <<"Vejo que escolheu informática, aonde você vai aprender línguagens de programação para criação de sites, aplicativos até mesmo jogos, sendo uma área aonde tem";
	   cout <<"   uma infinidade de caminhos para seguir.  \n\n\n\n\n\n";
	   cout <<"\t\t\ttecle enter para começar o teste";
	tecla=getch();
	system("cls");
	system ("color 0A");
	   cout <<"\t\t1) São opções do Painel de Controle, exceto: \n\n\n";
	   cout <<"\n A) Vídeo.\n\n\n";
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
	   cout <<"\t\t2) Você gosta de matemática e lógica ? \n\n\n";
	   cout <<"\n A) Sim, Gosto dos dois.\n\n\n";
	   cout <<"\n B) Não, eu não sou de exatas.\n\n\n";
	   cout <<"\n C) Não gosto, mas eu faço.\n\n\n";
	   cout <<"\n D) Só gosto da lógica.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q2;
	if ((q2=='a')|| (q2 =='A')){
		r2=1;
	}
	system("cls");
	cout <<"\t\t3) Já pensou em desenvolver algum aplicativo ?\n\n\n ";
	cout <<"\n A) Sim, mas eu prefiro pagar por isso.\n\n\n";
	cout <<"\n B) Sim, já tive ideias mas não sei programar.\n\n\n";
	cout <<"\n C) Não, nunca pensei.\n\n\n";
	cout <<"\n D) Sim, mas nunca tive vontade.\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='b')|| (q3=='B')){
		r3=1;
	}
	system("cls");
	cout <<"\t\t4) Você já quis desenvolver algum jogo ?\n\n\n";
	cout <<"\n A) Não, estou satísfeito com os que existe.\n\n\n";
	cout <<"\n B) Sim, Já tive ídeias mas não sei programar.\n\n\n";
	cout <<"\n C) Sim, mas tenho preguiça em montar códigos.\n\n\n";
	cout <<"\n D) Não, eu não gosto de jogos eletronico.\n\n";
	cout <<"\n\nSua resposta : ";
	//cout <<"";
	fflush(stdin);
	cin>>q4;
	if ((q4=='B')|| (q4=='b')){
		r4=1;
	}
		system("cls");
	cout <<"\t\t5) Você tem facilidade de memorizar de que maneira ?\n\n\n";
	cout <<"\n A) Lendo a lousa. \n\n\n";
	cout <<"\n B) Copiando.\n\n\n";
	cout <<"\n C) Na prática.\n\n\n";
	cout <<"\n D) Tenho díficuldades em memorizar.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q5;
	if ((q5=='c')|| (q5=='C')){
		r5=1;
	}
		system("cls");
	cout <<"\t\t6) De quais características suas você sente orgulho ?\n\n\n";
	cout <<"\n A) Audácia e facilidade para lidar com o inesperado.\n\n\n";
	cout <<"\n B) Senso de dever e capacidade de dar o exemplo.\n\n\n";
	cout <<"\n C) Idealismo e disposição para compreender os outros.\n";
	cout <<"\n\n\n D) Engenhosidade e rapidez mental.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q6;
	if ((q6=='d')|| (q6=='D')){
		r6=1;
	}
		system("cls");
	cout <<"\t\t7) Você costuma confiar mais em:\n\n\n";
	cout <<"\n A) Sua percepção, que é aguçada.\n\n\n";
	cout <<"\n B) Intuições e pressentimentos.\n\n\n";
	cout <<"\n C) Razão e lógica \n\n\n";
	cout <<"\n D) Costumes e tradições.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='c')|| (q7=='C')){
		r7=1;
	}
	system("cls");
	cout <<"\t\t8) Você acredita que:\n\n\n";
	cout <<"\n A) A propaganda é a alma do negócio.\n\n\n";
	cout <<"\n B) Sem tecnologia, nâo há trabalho para todos.\n\n\n";
	cout <<"\n C) Objetos bonitos enriquecem a vida.\n\n\n";
	cout <<"\n D) Se não cuidarmos do planeta, a espécie humana poderá desaparecer rapidinho.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='b')|| (q8=='B')){
		r8=1;
	}
	system("cls");
	cout <<"\t\t9)  Você possui facilidade de trabalhar em grupo ?\n\n\n";
	cout <<"\n A) Não. Sou uma pessoa mais reservada.\n\n\n";
	cout <<"\n B) Sim. Juntos somo mais fortes\n\n\n";
	cout <<"\n C) Não, mas tento trabalhar.\n\n\n";
	cout <<"\n D) Sou um pouco timido, mas me esforço.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='b')|| (q9=='B')){
		r9=1;
	}
		system("cls");
	cout <<"\t\t10)	Você gosta da área de informática?\n\n\n";
	cout <<"\n A) Sim, Sempre quis trabalhar nessa área.\n\n\n";
	cout <<"\n B) Sim, mas não trabalharia nela.\n\n\n";
	cout <<"\n C) Não, mas trabalharia por conta do dinheiro.\n\n\n";
	cout <<"\n D) Não faz meu tipo.\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q10;
	if ((q10=='b')|| (q10=='B')){
		r10=1;
	}
     rf=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
     rf1=rf/10*100;
     system ("cls");
     cout <<"\n\n\n\n\n\n\t\tVOCÊ POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
    // cout <<"Quer conhecer mais sobre esse curso? visite a sala : ";
}
     //terminou informática

	if (a==3) //Segurança do trabalho
	{
	system("cls");
	system("color 2F");
	   cout <<"\t\t  Segurança do trabalho\n\n\n\n\n\n";
	   cout <<"WOW segurança de trabalho ? sério.\n\n";
	   cout <<"Você seguindo essa carreira deverá se preocupar com seus funcionários em questão de saúde e proteção até mesmo aumentar sua produção, preocupando também com o  emocional de cada funcionário. \n\n\n\n";
	   cout <<"\n\n\t\t\ttecle enter para começar o teste";
	tecla=getch();
	system("cls");
	system ("color 2F");
	   cout <<"\t\t1) Quais dos verbos abaixo mais representa você: \n\n\n";
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
	   cout <<"\t\t2) Quais das habilidades abaixo você julga possuir ? \n\n\n";
	   cout <<"\n A) Desenvolver análises, teses e argumentos.\n\n\n";
	   cout <<"\n B) Transmitir mensagens e conhecimentos.\n\n\n";
	   cout <<"\n C) Lidar com a natureza e os animais.\n\n\n";
	   cout <<"\n D) Atenção aos detalhes.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q2;
	if ((q2=='d')|| (q2 =='D')){
		r2=1;
	}
	system("cls");
	cout <<"\t\t3) Se você tivesse que fazer um trabalho voluntário qual seria ?\n\n\n ";
	cout <<"\n A) Aulas de futebol com crianças carentes.\n\n\n";
	cout <<"\n B) Trabalhar na educação de jovens e adultos.\n\n\n";
	cout <<"\n C) Criar e organizar uma biblioteca comunitária.\n\n\n";
	cout <<"\n D) Fazer um levantamento sobre as necessidades de determinada comunidade e pensar em formas de atender a demanda.\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='d')|| (q3=='D')){
		r3=1;
	}
	system("cls");
	cout <<"\t\t4) Você gostaria que seu trabalho exigisse o uso de roupas: \n\n\n";
	cout <<"\n A) Formais, como ternos.\n\n\n";
	cout <<"\n B) Trajes de segurança.\n\n\n";
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
	cout <<"\n A) Não prestar atenção nas aulas. \n\n\n";
	cout <<"\n B) Ser atencioso e ajudar meus colegas.\n\n\n";
	cout <<"\n C) Ser bastante didicado aos esportes.\n\n\n";
	cout <<"\n D) Ser engrçado e contar piadas.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q5;
	if ((q5=='b')|| (q5=='B')){
		r5=1;
	}
		system("cls");
	cout <<"\t\t6) Você se descreve como uma pessoa:\n\n\n";
	cout <<"\n A) Calma e um tanto intelectual.\n\n\n";
	cout <<"\n B) Impulsiva e um tanto aventureira.\n\n\n";
	cout <<"\n C) Cautelosa e sempre responsável.\n\n\n";
	cout <<"\n D) Entusiasmanda e automotivada.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q6;
	if ((q6=='c')|| (q6=='C')){
		r6=1;
	}
		system("cls");
	cout <<"\t\t7) No seu dia a dia, você tem facilidade em lidar com:\n\n\n";
	cout <<"\n A) Animais.\n\n\n";
	cout <<"\n B) Arte.\n\n\n";
	cout <<"\n C) Pessoas.\n\n\n";
	cout <<"\n D) Máquinas.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='c')|| (q7=='C')){
		r7=1;
	}
	system("cls");
	cout <<"\t\t8) Você é uma pessoa organizada.\n\n\n";
	cout <<"\n A) Sim, mas uma baguncinha de vez em quando é bom.\n\n\n";
	cout <<"\n B) Não, nem ligo muito pra isso não.\n\n\n";
	cout <<"\n C) Um pouco, quando alguem me visita ajeito as coisas.\n\n\n";
	cout <<"\n D) Detalhista, tudo tem que estar em plena organização.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='d')|| (q8=='D')){
		r8=1;
	}
	system("cls");
	cout <<"\t\t9)  Qual atividade você se indentifica mais ?\n\n\n";
	cout <<"\n A) Algo voltado para o ensino.\n\n\n";
	cout <<"\n B) Algo ligado a proteção.\n\n\n";
	cout <<"\n C) Algo voltado a contrução.\n\n\n";
	cout <<"\n D) Cuidado com animais.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='b')|| (q9=='B')){
		r9=1;
	}
		system("cls");
	cout <<"\t\t10)	Quando chega em um lugar você primeiro:\n\n\n";
	cout <<"\n A) Analisa o ambiente, e percebe se tem perigos eminentes em sua volta.\n\n\n";
	cout <<"\n B) Não presta atenção em sua volta.\n\n\n";
	cout <<"\n C) Ve alguns problemas mas não se importa\n\n\n";
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
     cout <<"\n\n\n\n\n\n\t\tVOCÊ POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
     cout <<"\t   Quer conhecer mais sobre esse curso? visite a sala : 12\n\n\n\n\n";
}
	//termina segurança do trabalho

	else if (a==4) //Enfermagem
	{
	system("cls");
	system("color F2");
	   cout <<"\t\t\t\t  Enfermagem\n\n\n\n\n\n";
	   cout <<"\n Preparado para cuidar das pessoas e ajudá-las a recuperar a saúde. A profissão de enfermeiro exige dedicação e comprometimento com o próximo.\n\n\n\n";
	   cout <<"\n\n\t\t\ttecle enter para começar o teste";
	tecla=getch();
	system("cls");
	system ("color F2");
	   cout <<"\t1) Quais das áreas de estudo abaixo indicadas você mais gosta ? \n\n\n";
	   cout <<"\n A) Tenho um interesse bastante definido por ciências exatas.\n\n\n";
	   cout <<"\n B) Tenho predileção pela área de humanas e muita dificuldade para lidar com ";
	   cout <<"exatas. \n\n\n";
	   cout <<"\n C) Meu interesse é claramente voltado às ciências biológicas.\n\n\n";
	   cout <<"\n D) Gosto das disciplinas de biológicas e humanas.\n\n\n";
	   cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q1;
	if ((q1=='d')||(q1=='D'))
	{
		r1=1;
	}
	system("cls");
	   cout <<"\t2) Qual destes grupos de ideias está mais relacionado ao que você vislumbra fazer no futuro?\n\n\n";
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
	cout <<"\n A) Assistir a documentários.\n\n\n";
	cout <<"\n B) Dar assistência a uma comunidade carente.\n\n\n";
	cout <<"\n C) Arrecadar dinheiro da turma para um projeto.\n\n\n";
	cout <<"\n D) Organizar a comissão de formatura.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q3;
	if ((q3=='b')|| (q3=='B')){
		r3=1;
	}
	system("cls");
	cout <<"\t4) Em quais destes ambientes você se sente mais a vontade?\n\n\n";
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
	cout <<"\t5) Se você tivesse que escolher uma atividade para exercer por 6 meses  seria?\n\n\n";
	cout <<"\n A) Reformar uma casa.\n\n\n";
	cout <<"\n B) Me colocar em contato com pessoas bem-sucedidas.\n\n\n";
	cout <<"\n C) Algo que pudesse ser realizado em equipe.\n\n\n";
	cout <<"\n D) Uma atividade voluntária e com a qual eu pudesse ajudar o maior número de pessoas.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q5;
	if ((q5=='d')|| (q5=='D')){
		r5=1;
	}
		system("cls");
	cout <<"\t6) O emprego ideal é aquele no qual você:\n\n\n";
	cout <<"\n A) Traz segurança.\n\n\n";
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
	cout <<"\t7) O que você mais valoriza?\n\n\n";
	cout <<"\n A) Os fatos.\n\n\n";
	cout <<"\n B) O estudo e a reflexão.\n\n\n";
	cout <<"\n C) O prazer e as emoções.\n\n\n";
	cout <<"\n D) O direito e o bem estar de todos.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q7;
	if ((q7=='d')|| (q7=='D')){
		r7=1;
	}
	system("cls");
	cout <<"\t8) O que mais te incomoda é quando as pessoas...\n\n\n";
	cout <<"\n A) Não respeitam as outras.\n\n\n";
	cout <<"\n B) Burlam ou ignoram regras.\n\n\n";
	cout <<"\n C) Demoram muito pra tomar uma decisão.\n\n\n";
	cout <<"\n D) Desmonstram preguiça ou submissão.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q8;
	if ((q8=='a')|| (q8=='A')){
		r8=1;
	}
	system("cls");
	cout <<"\t9)  Você prefere levar sua vida:\n\n\n";
	cout <<"\n A) Com pouca rotina e poucas regras.\n\n\n";
	cout <<"\n B) Com regras definidas e disciplina.\n\n\n";
	cout <<"\n C) Interagindo com todo tipo de pessoa.\n\n\n";
	cout <<"\n D) Com muita autonomia: “na sua”.\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q9;
	if ((q9=='c')|| (q9=='C')){
		r9=1;
	}
		system("cls");
	cout <<"\t10)  Você é muito bom lidando com:\n\n\n";
	cout <<"\n A) Ferramentas, instrumentos e equipamentos.\n\n\n";
	cout <<"\n B) Pessoas de todos os níveis sociais e culturais.\n\n\n";
	cout <<"\n C) Controle do tempo, comando e execução.\n\n\n";
	cout <<"\n D) Sistemas e construção (material ou mental).\n\n\n";
	cout <<"\n\nSua resposta : ";
	fflush(stdin);
	cin>>q10;
	if ((q10=='b')|| (q10=='B')){
		r10=1;
	}
     rf=r1+r2+r3+r4+r5+r6+r7+r8+r9+r10;
     rf1=rf/10*100;
     system ("cls");
     cout <<"\n\n\n\n\n\n\t\tVOCÊ POSSUI = "<<rf1<<"%  DE AFINIDADE COM ESSE CURSO\n\n\n\n\n\n";
     cout <<"\t   Quer conhecer mais sobre esse curso? visite a sala : 9\n\n\n\n\n";
      //termina enfermagem
	}
	
	cout <<"Aperte qualquer tecla para voltar, aperte 3 vezes ESC para sair \n\n\n\n";
	y=getch();
	
	
}while (y!=27);
 	system("pause");
}


