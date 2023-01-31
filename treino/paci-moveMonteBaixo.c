int moveMonteBaixo(int j)//move carta do monte para pilha de baixo
{
	noCarta *n1= pilhaDeBaixo[j], *n_ant=monte,*n2 = NULL;
	int      c;

	if(atual==NULL)//se a pilha de cima estiver vazia
		return 0;

	if(n1!=NULL)//se a pilha de baixo nao estiver vazia
	{
		while(n1->prox!=NULL)//encontra a carta de baixo no monte
			n1=n1->prox;

	printf("\n[%d%c]\n",n1->valor,n1->naipe);//debug

		if(atual->valor!=(n1->valor-1))//se a carta de cima nao for uma unidade menor que a de baixo
			return 0;

		if((n1->naipe=='c' && atual->naipe=='o') ||
		   (n1->naipe=='o' && atual->naipe=='c') ||
		   (n1->naipe=='p' && atual->naipe=='e') ||
		   (n1->naipe=='e' && atual->naipe=='p') ||
		   (n1->naipe=='c' && atual->naipe=='c') ||
		   (n1->naipe=='e' && atual->naipe=='e') ||
		   (n1->naipe=='o' && atual->naipe=='o') ||
		   (n1->naipe=='p' && atual->naipe=='p'))//se a carta de cima for de naipe diferente da de baixo
			return 0;
	}

	if(atual==n_ant)//se a carta de cima for a primeira do monte
		n_ant=NULL;
	else
	{
		while(n_ant->prox!=atual)//encontra a carta de cima no monte
			n_ant=n_ant->prox;
	}

	if(n1!=NULL)//se a pilha de baixo nao estiver vazia
	{
		n1->prox=atual;
	}
	else
	{
		if(atual->valor!=13)//se a carta de cima nao for um rei
			return 0;
		pilhaDeBaixo[j]=atual;
	}

	if(n_ant!=NULL)//se a carta de cima nao for a primeira do monte
		n_ant->prox=atual->prox;
	else//se a carta de cima for a primeira do monte
		monte=atual->prox;
	n2=atual;
	atual=atual->prox;
	n2->prox=NULL;

	return 1;
}