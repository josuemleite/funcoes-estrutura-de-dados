void decimalParaBinario(int decimal) {
	if (decimal > 0) {
		decimalParaBinario(decimal / 2);
		printf("%d", decimal % 2);
	}
}
