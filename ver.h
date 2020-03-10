void ver(struct nodo *libro)
{
    int i;
    for(i=0;i<TAM;i++)
    {
        printf("LIBRO [%i]\n",i+1);
        puts((*(libro+i)).titulo);
        puts((*(libro+i)).autor);
        puts((*(libro+i)).editorial);
        printf("Edicion: %i\n",(*(libro+i)).edicion);
        printf("Precio: $ %g\n",(*(libro+i)).precio);
        printf("Disponible: %i\n",(*(libro+i)).disponible);
    }
}
