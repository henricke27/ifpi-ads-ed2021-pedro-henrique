class NoP{
	public:
		char nome;
		NoP *prox;
		NoP *ant;
		NoP(char n){
			nome = n;
			prox = NULL;
			ant = NULL;
		}
};
