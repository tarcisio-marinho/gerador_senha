#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void geraSenha(int tam);
int main(){
	int tam;
	printf("Digite o tamanho: ");
	scanf("%d",&tam);
	geraSenha(tam);
}
void geraSenha(int tam){
	int i,atual,k;
	char senha[tam];srand((unsigned)time(NULL));
	for(i=0;i<tam;i++){
		atual=rand()%81;				
		if(atual==0){
			senha[i]='0';
		}else if(atual==1){
			senha[i]='1';
		}else if(atual==2){
			senha[i]='2';
		}else if(atual==3){
			senha[i]='3';
		}else if(atual==4){
			senha[i]='4';
		}else if(atual==5){
			senha[i]='5';
		}else if(atual==6){
			senha[i]='6';
		}else if(atual==7){
			senha[i]='7';
		}else if(atual==8){
			senha[i]='8';
		}else if(atual==9){
			senha[i]='9';
		}else if(atual==10){
			senha[i]='a';
		}else if(atual==11){
			senha[i]='b';
		}else if(atual==12){
			senha[i]='c';
		}else if(atual==13){
			senha[i]='d';
		}else if(atual==14){
			senha[i]='e';
		}else if(atual==15){
			senha[i]='f';
		}else if(atual==16){
			senha[i]='g';
		}else if(atual==17){
			senha[i]='h';
		}else if(atual==18){
			senha[i]='i';
		}else if(atual==19){
			senha[i]='j';
		}else if(atual==20){
			senha[i]='k';
		}else if(atual==21){
			senha[i]='l';
		}else if(atual==22){
			senha[i]='m';
		}else if(atual==23){
			senha[i]='n';
		}else if(atual==24){
			senha[i]='o';
		}else if(atual==25){
			senha[i]='p';
		}else if(atual==26){
			senha[i]='q';
		}else if(atual==27){
			senha[i]='r';
		}else if(atual==28){
			senha[i]='s';
		}else if(atual==29){
			senha[i]='t';
		}else if(atual==30){
			senha[i]='u';
		}else if(atual==31){
			senha[i]='v';
		}else if(atual==32){
			senha[i]='w';
		}else if(atual==33){
			senha[i]='x';
		}else if(atual==34){
			senha[i]='y';
		}else if(atual==35){
			senha[i]='z';
		}else if(atual==36){
			senha[i]='A';
		}else if(atual==37){
			senha[i]='B';
		}else if(atual==38){
			senha[i]='C';
		}else if(atual==39){
			senha[i]='D';
		}else if(atual==40){
			senha[i]='E';
		}else if(atual==41){
			senha[i]='F';
		}else if(atual==42){
			senha[i]='G';
		}else if(atual==43){
			senha[i]='H';
		}else if(atual==44){
			senha[i]='I';
		}else if(atual==45){
			senha[i]='J';
		}else if(atual==46){
			senha[i]='K';
		}else if(atual==47){
			senha[i]='L';
		}else if(atual==48){
			senha[i]='M';
		}else if(atual==49){
			senha[i]='N';
		}else if(atual==50){
			senha[i]='O';
		}else if(atual==51){
			senha[i]='P';
		}else if(atual==52){
			senha[i]='Q';
		}else if(atual==53){
			senha[i]='R';
		}else if(atual==54){
			senha[i]='S';
		}else if(atual==55){
			senha[i]='T';
		}else if(atual==56){
			senha[i]='U';
		}else if(atual==57){
			senha[i]='V';
		}else if(atual==58){
			senha[i]='W';
		}else if(atual==59){
			senha[i]='X';
		}else if(atual==60){
			senha[i]='Y';
		}else if(atual==61){
			senha[i]='Z';
		}else if(atual==62){
			senha[i]='!';
		}else if(atual==63){
			senha[i]='#';
		}else if(atual==64){
			senha[i]='$';
		}else if(atual==65){
			senha[i]='%';
		}else if(atual==66){
			senha[i]='&';
		}else if(atual==67){
			senha[i]='+';
		}else if(atual==68){
			senha[i]=',';
		}else if(atual==69){
			senha[i]='-';
		}else if(atual==70){
			senha[i]='.';
		}else if(atual==71){
			senha[i]='/';
		}else if(atual==72){
			senha[i]=':';
		}else if(atual==73){
			senha[i]=';';
		}else if(atual==74){
			senha[i]='<';
		}else if(atual==75){
			senha[i]='=';
		}else if(atual==76){
			senha[i]='>';
		}else if(atual==77){
			senha[i]='?';
		}else if(atual==78){
			senha[i]='@';
		}else if(atual==79){
			senha[i]='[';
		}else if(atual==80){
			senha[i]=']';
		}else if(atual==81){
			senha[i]='_';
		}

	}
	printf("Sua nova senha: ");
	for(i=0;i<tam;i++){
		printf("%c",senha[i]);
	}
	printf("\n\n");

}
