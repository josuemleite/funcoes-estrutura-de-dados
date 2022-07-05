int crescente(tlista lista) {
	while (lista->ini != lista->fim) {
		if (lista->ini->dado < lista->ini->prox->dado) {
			lista->ini = lista->ini->prox;
		} else {
			return 0;
		}
	}
	return 1;
}
