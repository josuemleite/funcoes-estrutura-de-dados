int somaRecursiva(int[] vetor, int tamanho) {
	if (tamanho == 0) {
		return 0;
	} else {
		return vetor[tamanho - 1] + soma(vetor, tamanho - 1);
	}
}
