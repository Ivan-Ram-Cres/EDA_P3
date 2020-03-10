void inicio(struct nodo *libro)
{
    int num,i=0;
    FILE *ap;
    ap=fopen("catalogo.txt","r");
    if (ap==NULL)
    {
        printf("NO SE PUDO LEER EL ARCHIVO\n");
    }
    else
    {

        while(feof(ap)==0)
        {
            fscanf(ap,"%s",(*(libro+i)).titulo);
            fscanf(ap,"%s",(*(libro+i)).autor);
            fscanf(ap,"%s",(*(libro+i)).editorial);
            fscanf(ap,"%i",&(*(libro+i)).edicion);
            fscanf(ap,"%i",&(*(libro+i)).cantidad);
            fscanf(ap,"%i",&(*(libro+i)).disponible);
            fscanf(ap,"%i",&(*(libro+i)).aux);
            fscanf(ap,"%f",&(*(libro+i)).precio);
            i++;
            if(i==TAM)
            {
                fclose(ap);
                break;
            }
        }
    }
}






