void agregar(struct nodo *libro)
{
    int r=0,art,i,des;
    while(r==0)
    {
        printf("QUE ARTICULO DESEA AGREGAR\n");
        if(scanf("%i",&art)!=0)
        {
            for(i=0;i<TAM;i++)
            {
                if((*(libro+i)).aux==(art-1))
                {
                    printf("CUANTOS ARTICULOS?\n");
                    if (scanf("%i",&des)!=0)
                    {
                        if(des<=(*(libro+i)).disponible)
                        {
                            (*(libro+i)).disponible-=des;
                            (*(libro+i)).cantidad+=des;
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
