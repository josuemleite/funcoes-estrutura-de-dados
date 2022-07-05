// Nesta funcão são realizadas 11 chamadas de função para
// calcular funcaoRecursiva(3, 3), retornando 20.

int funcaoRecursiva(int m, int n) {
	if (n == 1) {
		return m + 1;
	} else if (m == 1) {
		return n + 1;
	} else if (m > 1 && n > 1) {
		return funcaoRecursiva(m, n - 1) + funcaoRecursiva(m - 1, n);
	}
}
