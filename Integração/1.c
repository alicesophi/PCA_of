#include <stdio.h>

int main() {
    char goleiros[3][50]= {"Hugo", "Matheus", "Santos"};
    int avaliacao_goleiros[3] = {10, 8, 5};
	  char defesa[7][50] = {"Rodrigo", "Leo", "David", "Cleiton", "Fabricio", "pablo", "Varela"};
    int avaliacao_defesa[7] = {8, 7, 6, 6, 7, 6, 7};
	  char medio_campo[8][50] = {"Everton", "Arrascaeta",  "Arturo", "VH", "Matheus", "Thiago", "Erik", "Gerson"};
    int avaliacao_medioc[8] = {9, 9, 7, 8, 7, 6, 7, 9};
	  char atacantes[5][50] = {"Gabi", "Bruno", "Pedro", "Marinho", "Everton"}; 
    int av_atacante[5] = {9, 8, 9, 8, 7};
    int i, j, k, l , m, n, a, b, c; 
	  int posicao_inserir, posicao_inserir2, posicao_inserir3;
	  int melhor_goleiro = 0, melhor_defesa[4], melhor_medioc[4], melhor_atacante[2];
    
    
    for(i=0; i<3; i++){
    	if(avaliacao_goleiros[i] > avaliacao_goleiros[melhor_goleiro]){
    		melhor_goleiro = i;
		}
		
	}
	printf("Melhor goleiro: %s\nAvaliacao: %d\n", goleiros[melhor_goleiro], avaliacao_goleiros[melhor_goleiro]);
	
	//avaliacao defesa
	for(i=0; i<4; i++){
		melhor_defesa[i] = -1;
	}
	for(i=0; i<7; i++){
		posicao_inserir =  -1;
		
		for(j=0; j<4; j++){
			if(avaliacao_defesa[j] == -1 || avaliacao_defesa[i]>avaliacao_defesa[melhor_defesa[j]]){
			posicao_inserir = j;
			break;
			}
		}
			if(posicao_inserir != -1){
            for(k=2; k>=posicao_inserir; k--){
                melhor_defesa[k+1] = melhor_defesa[k];
            }
            melhor_defesa[posicao_inserir] = i;
        }
}
    
    printf("Melhores defesas:\n");
    for(i=0; i<4; i++){
        printf("%s - Avaliacao: %d\n", defesa[melhor_defesa[i]], avaliacao_defesa[melhor_defesa[i]]);
    }
    // 4 medios campos
    for (l = 0; l < 4; l++) {
    	melhor_medioc[l] = -1;
    }
    
    for (l = 0; l < 8; l++) {
        posicao_inserir2 = -1;
        
        for (m = 0; m < 4; m++) {
            if (avaliacao_medioc[m] == -1 || avaliacao_medioc[l] > avaliacao_medioc[melhor_medioc[m]]) {
                posicao_inserir2 = m;
                break;
            }
        }
        if (posicao_inserir2 != -1) {
            for (n = 2; n >= posicao_inserir2; n--) {
                melhor_medioc[n + 1] = melhor_medioc[n];
            }
            melhor_medioc[posicao_inserir2] = l;
        }
    }
    
    printf("Melhores Meios Campos:\n");
    for (l = 0; l < 4; l++) {
        printf("%s - Avaliacao: %d\n", medio_campo[melhor_medioc[l]], avaliacao_medioc[melhor_medioc[l]]);
    }
    
    //melhores atacantes 2
    for (a = 0; a < 2; a++) {
    	melhor_atacante[a] = -1;
    }
    
    for (a = 0; a < 5; a++) {
        posicao_inserir3 = -1;
        
        for (b = 0; b < 2; b++) {
            if (av_atacante[b] == -1 || av_atacante[a] > av_atacante[melhor_atacante[b]]) {
                posicao_inserir3 = b;
                break;
            }
        }
        if (posicao_inserir3 != -1) {
            for (c = 2; c >= posicao_inserir3; c--) {
                melhor_atacante[c + 1] = melhor_atacante[c];
            }
            melhor_atacante[posicao_inserir3] = a;
        }
    }
    
    printf("Melhores Atacantes:\n");
    for (a = 0; a < 2; a++) {
        printf("%s - Avaliacao: %d\n", atacantes[melhor_atacante[a]], av_atacante[melhor_atacante[a]]);
    }
    
    
    return 0;
}
