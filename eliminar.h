void elim(struct nodo *libro)
{
    int r=0,del,i,art;
    while(r==0)
    {
        printf("QUE ELEMENTO QUIERE ELIMINAR\n");
        if (scanf("%i",&art)!=0)
        {
            for(i=0;i<TAM;i++)
            {
                if((*(libro+i)).aux==art)
                {
                    printf("CUANTOS ARTICULOS?\n");
                    if (scanf("%i",&del)!=0)
                    {
                        if(del<=(*(libro+i)).disponible)
                        {
                            (*(libro+i)).disponible+=del;
                            (*(libro+i)).cantidad-=del;
                        }
                    }
                }
            }
        }
        printf("DESEA AGREGAR OTRO ARTICULO?\n(0)Si\t(1)No\n");
        if (scanf("%i",&r)!=0)
        {

        }
    }
}
