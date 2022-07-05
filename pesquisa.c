int pesquisa(tlista lista, tdado dado) {
	while (lista->ini != NULL) {
		if (lista->ini->dado == dado) {
			return 1;
		} else {
			lista->ini = lista->ini->prox;
		}
	}
	return 0;
}
