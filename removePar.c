void removePar(tlista *lista) {
	tno *indice;
	indice = lista->ini;
	while (indice != NULL) {
		if (indice->dado % 2 == 0) {
			tno *aux;
			aux = indice->ant;
			indice = indice->prox;
			if (indice == NULL) {
				indice = NULL;
			} else {
				indice->ant = aux;
				free(aux);
			}
		} else {
			indice = indice->prox;
		}
	}
	free(indice);
}
