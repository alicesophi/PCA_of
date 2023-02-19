int main(){
	char data[10];
	int dia=0, mes=0, ano=0;
	int i;
	
	printf("Digite uma data no formato 'DD/MM/AAAA': ");
	scanf("%s", data);
	
	//verificar se as barras estão corretas:
	
	while(data[i] != '\0'){
		if(i==2 || i==5){
			if(data[i] != '/'){
				printf("data invalida.\n");
				return 0;
			}
		}
		else if(data[i] < '0' || data[i] > '9'){
			printf("Data invalida.\n");
			return 0;
		}
		i++;
	}
	
	// extrair o dia mes e ano da data
	
	dia = (data[0] - '0')*10 + (data[1] - '0');
	mes = (data[3] - '0')*10 + (data[4] - '0');
	ano = (data[6] - '0')*1000 + (data[7] - '0')*100 + (data[8] - '0')*10 + (data[9] - '0')*1;
	
	//verificar se os valores sao validos
	
	if(dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0) {
        printf("Data invalida.\n");
        return 0;
    }
	
	printf("Dia: %d\n", dia);
    printf("Mes: %d\n", mes);
    printf("Ano: %d\n", ano);

	return 0;
}
