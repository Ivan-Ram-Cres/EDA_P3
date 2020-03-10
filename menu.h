    struct nodo{
        char titulo[50],autor[50],editorial[30];
    int edicion,cantidad,disponible,aux;
    float precio;
    };
void menu()
{
    struct nodo libro[TAM];
	void inicio(struct nodo *ap);
    inicio(libro);
    void ver(struct nodo *ap);
    void elementos(struct nodo *ap);
    void elim(struct nodo *ap);
    void agregar(struct nodo *ap);
    int opc,r=0;
    while(r==0)
    {
        printf("\tBIENVENIDO\n");
        printf("(1)VER CATALOGO\n(2)VER ELEMNTOS EN EL CARRITO\n(3)ELIMINAR ELEMENTO\n(4)AGREGAR ELEMENTO\n");
        printf("(5)SALIR\n");
        if(scanf("%i",&opc)!=1)
        {
            printf("Caracter Invalido");
            r=0;
        }
        else
        {
            switch (opc)
            {
                case 1:
                    ver(libro);
                break;
                case 2:
                   elementos(libro);
                break;
                case 3:
                     elim(libro);
                break;
                case 4:
                    agregar(libro);
                break;
                case 5:
                    r=1;
                    break;
                break;
                default:
                break;
            }
        }
    }
}

