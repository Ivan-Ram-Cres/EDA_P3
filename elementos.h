void elementos(struct nodo *libro)
{
    int r=0,i;
    float total=0;
    for(i=0;i<TAM;i++)
    {
        if(libro[i].cantidad!=0)
        {
            printf("N\tTITULO\tCANTIDAD\tP.U.\tP.T\n");
            printf("%i\t%s\t%i\t%g\t%g\n",(*(libro+i)).aux,(*(libro+i)).titulo,(*(libro+i)).cantidad,(*(libro+i)).precio,(*(libro+i)).precio*(*(libro+i)).cantidad);
            total=total+((*(libro+i)).precio*(*(libro+i)).cantidad);
        }
    }
    printf("TOTAL A PAGAR %g\n",total);
}
