#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int opcion;
void menu();
void menucliente();
void menuempleado();
void menuproveedor();
void crearcliente();
void crearempleado();
void crearproveedor();
void mostrarclientes();
void mostrarempleados();
void mostrarproveedores();
void modificarcliente();
void modificarempleado();
void modificarproveedor();
void eliminarcliente();
void eliminarempleado();
void eliminarproveedores();
int buscarCliente();
int buscarempleado();
int buscarproveedor();
void copiar(char cadena1[],char cadena2[]);
void mostrarCliente(int idCliente);
void mostrarempleado(int idempleado);
void mostrarproveedor(int idproveedor);
void gotoxy(int x,int y);

void gotoxy(int x,int y){
    HANDLE hcon=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwpos;
    dwpos.X=x;
    dwpos.Y=y;
    SetConsoleCursorPosition(hcon, dwpos);
}

struct icliente{
int id;
char nombre[100];
char direccion[100];
char telefono[100];
int cedula;
}cliente[100];

struct iempleado{
int id;
char nombre[100];
char direccion[100];
char telefono[100];
int cedula;
}empleado[100];

struct iproveedor{
int id;
char nombre[100];
char direccion[100];
char telefono[100];
int cedula;
char productos[100];
}proveedor[100];


int num;
int numcliente=0,numempleado=0,numproveedor=0;
int main(){
gotoxy(10,10);menu();

    return 0;
}
void menu (){

do{

     gotoxy(50,2);
     printf("MENU PRINCIPAL.\n");
	gotoxy(40,4);
	printf("1. Clientes.\n");
	gotoxy(40,6);
	printf("2. Empleados.\n");
	gotoxy(40,8);
	printf("3. Proveedores. \n");
	gotoxy(60,4);
	printf("4. Productos.\n");
	gotoxy(60,6);
	printf("5. Compras. \n");
	gotoxy(60,8);
	printf("6. Ventas. \n");
	gotoxy(50,10);
	printf("0. Salir. \n");
	gotoxy(50,12);
	printf("Ingrese una opcion: ");

scanf("%d", &opcion);
    system("cls");
		switch(opcion){
			case 1: menucliente();
				break;
			case 2: menuempleado();
				break;
			case 3: menuproveedor();
				break;
			default: printf("Opcion invalida\n");
			}

	}while(opcion != 0);


}
void menucliente (){
do{
        gotoxy(50,2);printf("Menu Clientes \n");
        gotoxy(40,4);printf("1. Crear Cliente\n");
        gotoxy(40,6);printf("2. Ver Clientes\n");
        gotoxy(40,8);printf("3. Modificar Cliente\n   ");
        gotoxy(60,4);printf("4. Eliminar Cliente\n   ");
        gotoxy(60,6);printf("5. Buscar Cliente\n   ");
        gotoxy(62,8);printf("0. Menu Principal\n  ");
        gotoxy(50,10);printf("Ingrese una opcion:   ");

       scanf("%d",&opcion);
        system("cls");

        switch(opcion){
            case 1: crearcliente();
            break;
            case 2: mostrarclientes();
            break;
            case 3:modificarcliente();
            break;
            case 4:eliminarcliente();
            break;
            case 5:buscarCliente();
            break;
            case 0:menu();
            break;
            default: printf("Opcion invalidad\n");
        }
    }while(opcion != 0);


}
void menuempleado(){
    do{
        gotoxy(50,2);printf("Menu empleados  \n");
        gotoxy(40,4);printf("1. Crear empleado\n");
        gotoxy(40,6);printf("2. Ver empleados\n");
        gotoxy(40,8);printf("3. Modificar empleado\n");
        gotoxy(60,4);printf("4. Eliminar empleado\n");
        gotoxy(60,6);printf("5. Buscar empleado\n");
        gotoxy(62,8);printf("0. Menu Principal\n");
       gotoxy(50,10); printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
                system("cls");

        switch(opcion){
            case 1:crearempleado();
            break;
            case 2:mostrarempleados();
            break;
            case 3:modificarempleado();
            break;
            case 4: eliminarempleado();
            break;
            case 5:buscarempleado();
            break;
            case 0:menu();
            break;
            default: printf("Opcion invalida\n");
        }
    }while(opcion != 0);
}
void menuproveedor(){

do{
        gotoxy(50,2);printf("Menu Proveedores \n");
        gotoxy(40,4);printf("1. Crear Proveedor\n");
        gotoxy(40,6);printf("2. Ver Proveedores\n");
        gotoxy(40,8);printf("3. Modificar Proveedor\n");
        gotoxy(60,4);printf("4. Eliminar Proveedor\n");
        gotoxy(60,6);printf("5. Buscar Proveedor\n");
        gotoxy(64,8);printf("0. menu principal\n");
        gotoxy(50,12);printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        system("cls");
        switch(opcion){
            case 1:crearproveedor();
            break;
            case 2:mostrarproveedores();
            break;
            case 3:modificarproveedor();
            break;
            case 4:eliminarproveedores();
            break;
            case 5:buscarproveedor();
            break;
            case 6:
            break;
            case 0: menu();
            break;
            default: printf("Opcion invalidad\n");
        }
    }while(opcion != 0);




}
void crearcliente(){

fflush(stdin);
gotoxy(50,13);printf("--------------\n");
gotoxy(50,14);printf("CREAR CLIENTE");
gotoxy(50,15);printf("---------------\n");

gotoxy(50,16);printf("ingrese los datos del cliente\n");
cliente[numcliente].id=numcliente;
gotoxy(50,17);printf("Nombre: ");
fgets(cliente[numcliente].nombre,30,stdin);
gotoxy(50,18);printf("direccion: ");
fgets(cliente[numcliente].direccion,30,stdin);
gotoxy(50,19);printf("telefono: ");
fgets(cliente[numcliente].telefono,30,stdin);
gotoxy(50,20);printf("cedula: ");
scanf("%d",&cliente[numcliente].cedula);
numcliente++;


gotoxy(50,22);printf("cliente registrado con exito\n");
system("pause");
}
void crearempleado(){
fflush(stdin);
gotoxy(50,13);printf("--------------\n");
gotoxy(50,14);printf("CREAR EMPLEADO");
gotoxy(50,15);printf("---------------\n");

gotoxy(50,16);printf("ingrese los datos del empleado\n");
empleado[numempleado].id=numempleado;
gotoxy(50,17);printf("Nombre: ");
fgets(empleado[numempleado].nombre,30,stdin);
gotoxy(50,18);printf("direccion: ");
fgets(empleado[numempleado].direccion,30,stdin);
gotoxy(50,19);printf("telefono: ");
fgets(empleado[numempleado].telefono,30,stdin);
gotoxy(50,20);printf("cedula: ");
scanf("%d",&empleado[numempleado].cedula);
numempleado++;


gotoxy(50,22);printf("empleado registrado con exito\n");
system("pause");

}
void crearproveedor(){

fflush(stdin);
gotoxy(50,13);printf("--------------\n");
gotoxy(50,14);printf("CREAR PROVEEDOR");
gotoxy(50,15);printf("---------------\n");
gotoxy(50,16);printf("ingrese los datos del proveedor\n");
proveedor[numproveedor].id=numproveedor;
gotoxy(50,17);printf("Nombre: ");
fgets(proveedor[numproveedor].nombre,30,stdin);
gotoxy(50,18);printf("direccion: ");
fgets(proveedor[numproveedor].direccion,30,stdin);
gotoxy(50,19);printf("telefono: ");
fgets(proveedor[numproveedor].telefono,30,stdin);
gotoxy(50,20);printf("cedula: ");
scanf("%d",&proveedor[numproveedor].cedula);
numproveedor++;


gotoxy(50,22);printf("proveedor registrado con exito\n");
system("pause");

}
void mostrarclientes (){
printf("-----------------\n");
printf("LISTA DE CLIENTES\n");
printf("-----------------\n");
for (int i=0;i<numcliente;i++){
        int co=14;
    printf("\ncliente #%d\n",i+1);

    printf("nombre: %s",cliente[i].nombre);

    printf("direccion: %s",cliente[i].direccion);

    printf("telefono: %s",cliente[i].telefono);
    printf("cedula: %d\n",cliente[i].cedula);


}

system("pause");
}
void mostrarempleados(){
    printf("-----------------\n");
    printf("LISTA DE EMPLEADOS\n");
    printf("-----------------\n");
for (int i=0;i<numempleado;i++){
    printf("\nempleado #%d\n",i+1);
    printf("nombre: %s",empleado[i].nombre);
    printf("direccion: %s",empleado[i].direccion);
    printf("telefono: %s",empleado[i].telefono);
    printf("cedula: %d\n",empleado[i].cedula);
}


}
void mostrarproveedores(){
printf("-----------------\n");
 printf("LISTA DE PROVEEDORES\n");
 printf("-----------------\n");

for (int i=0;i<numproveedor;i++){
    printf("\nproveedor #%d\n",i+1);
    printf("nombre: %s",proveedor[i].nombre);
    printf("direccion: %s",proveedor[i].direccion);
    printf("telefono: %s",proveedor[i].telefono);
    printf("cedula: %d\n",proveedor[i].cedula);


}

}
void modificarcliente(){
gotoxy(50,11);printf("MODIFICAR CLIENTE\n");
int idcliente=buscarCliente();
if(idcliente!=-1){

gotoxy(50,12);printf("Cliente No. %d\n", idcliente + 1);
        fflush(stdin);
		gotoxy(40,14);printf("Nombre del Cliente: ");
		fgets(cliente[idcliente].nombre, 30, stdin);
		gotoxy(40,15);printf("Direccion del Cliente: ");
		fgets(cliente[idcliente].direccion, 30, stdin);
		gotoxy(40,16);printf("Telefono del Cliente: ");
		fgets(cliente[idcliente].telefono, 30, stdin);
		gotoxy(40,17);printf("Cedula del Cliente: ");
		scanf("%d", &cliente[idcliente].cedula);
		printf("\n");
		system("cls");
}
}
void modificarempleado (){
gotoxy(50,11);printf("MODIFICAR EMPLEADO\n");
int idempleado=buscarempleado();
if(idempleado!=-1){

gotoxy(50,12);printf("empleado No. %d\n", idempleado + 1);
        fflush(stdin);
		gotoxy(40,14);printf("Nombre del empleado: ");
		fgets(empleado[idempleado].nombre, 30, stdin);
		gotoxy(40,15);printf("Direccion del empleado: ");
		fgets(empleado[idempleado].direccion, 30, stdin);
		gotoxy(40,16);printf("Telefono del empleado: ");
		fgets(empleado[idempleado].telefono, 30, stdin);
		gotoxy(40,17);printf("Cedula del empleado: ");
		scanf("%d", &empleado[idempleado].cedula);
		printf("\n");
		system("cls");
}
}
void modificarproveedor(){
gotoxy(50,11);printf("MODIFICAR PROVEEDOR\n");
int idproveedor=buscarproveedor();
if(idproveedor!=-1){

gotoxy(50,12);printf("proveedor No. %d\n", idproveedor + 1);
        fflush(stdin);
		gotoxy(40,14);printf("Nombre del proveedor: ");
		fgets(proveedor[idproveedor].nombre, 30, stdin);
		gotoxy(40,15);printf("Direccion del proveedor: ");
		fgets(proveedor[idproveedor].direccion, 30, stdin);
		gotoxy(40,16);printf("Telefono del proveedor: ");
		fgets(proveedor[idproveedor].telefono, 30, stdin);
		gotoxy(40,17);printf("Cedula del proveedor: ");
		scanf("%d", &proveedor[idproveedor].cedula);
		printf("\n");
		system("cls");
}
}
void eliminarcliente(){
gotoxy(50,11);printf("ELIMINAR CLIENTE\n");
int idcliente=buscarCliente();
if(idcliente!=-1){
    if(idcliente<numcliente){
        for(int i=idcliente;i<numcliente;i++){
            cliente[i+1].id = cliente[i].id;
            copiar(cliente[i].nombre,cliente[i+1].nombre);
            cliente[i].cedula = cliente[i+1].cedula;
            copiar(cliente[i].direccion,cliente[i].direccion);
            copiar(cliente[i].telefono,cliente[i].telefono);
        }
    }
    numcliente--;
}



}
void eliminarempleado(){
gotoxy(50,11);printf("ELIMINAR EMPLEADO\n");
int idempleado=buscarempleado();
if(idempleado!=-1){
    if(idempleado<numempleado){
        for(int i=idempleado;i<numempleado;i++){
            empleado[i+1].id = cliente[i].id;
            copiar(empleado[i].nombre,empleado[i+1].nombre);
            empleado[i].cedula = empleado[i+1].cedula;
            copiar(empleado[i].direccion,empleado[i].direccion);
            copiar(empleado[i].telefono,empleado[i].telefono);
        }
    }
    numempleado--;
}



}


void eliminarproveedores(){
gotoxy(50,11);printf("ELIMINAR PORVEEDOR\n");
int idproveedor=buscarproveedor
();
if(idproveedor!=-1){
    if(idproveedor<numproveedor){
        for(int i=idproveedor;i<numproveedor;i++){
            empleado[i+1].id = cliente[i].id;
            copiar(proveedor[i].nombre,proveedor[i+1].nombre);
            proveedor[i].cedula = proveedor[i+1].cedula;
            copiar(proveedor[i].direccion,empleado[i].direccion);
            copiar(proveedor[i].telefono,proveedor[i].telefono);
        }
    }
    numproveedor--;
}


}

void mostrarCliente(int idCliente){

	printf("Mostrar Clientes\n");
	printf("Cliente No. %d\n", cliente[idCliente].id + 1);
	printf("Nombre del Cliente: %s", cliente[idCliente].nombre);
	printf("Direccion del Cliente: %s", cliente[idCliente].direccion);
	printf("Telefono del Cliente: %s", cliente[idCliente].telefono);
	printf("Cedula del Cliente: %d\n", cliente[idCliente].cedula);
	printf("\n\n");
}
void mostrarempleado(int idempleado){
	printf("Mostrar empleado\n");
	printf("empleado No. %d\n", empleado[idempleado].id + 1);
	printf("Nombre del empleado: %s", empleado[idempleado].nombre);
	printf("Direccion del empleado: %s", empleado[idempleado].direccion);
	printf("Telefono del empleado: %s", empleado[idempleado].telefono);
	printf("Cedula del empleado: %d\n", empleado[idempleado].cedula);
	printf("\n\n");
}
void mostrarproveedor(int idproveedor){
printf("Mostrar proveedor\n");
	printf("proveedor No. %d\n", proveedor[idproveedor].id + 1);
	printf("Nombre del proveedor: %s", proveedor[idproveedor].nombre);
	printf("Direccion del proveedor: %s", proveedor[idproveedor].direccion);
	printf("Telefono del proveedor: %s", proveedor[idproveedor].telefono);
	printf("Cedula del proveedor: %d\n", proveedor[idproveedor].cedula);

	printf("\n\n");


}
int buscarCliente(){
	int cedulaBuscar, i;
	gotoxy(50,12);printf("Buscar Cliente.  ");
	gotoxy(50,13);printf("Ingrese Cedula del cliente: ");
	scanf("%d", &cedulaBuscar);
	system("cls");
	printf("\n");
	for(i = 0; i < numcliente; i++){
		if(cedulaBuscar == cliente[i].cedula){
			mostrarCliente(cliente[i].id);
			return cliente[i].id;
		}
	}
	gotoxy(50,14);printf("El cliente no existe \n");
	system("pause");
	return -1;


}
int buscarempleado(){
	int cedulaBuscar, i;
	gotoxy(50,12);printf("Buscar empleado.");
	gotoxy(50,13);printf("Ingrese Cedula del empleado: ");
	scanf("%d", &cedulaBuscar);
	system("cls");
	printf("\n");
	for(i = 0; i < numempleado; i++){
		if(cedulaBuscar == empleado[i].cedula){
			mostrarempleado(empleado[i].id);
			return empleado[i].id;
		}
	}
	gotoxy(50,14);printf("El empleado no existe \n");
	system("pause");
	return -1;

}


int buscarproveedor(){
	int cedulaBuscar, i;
	gotoxy(50,12);printf("Buscar proveedor.");
	gotoxy(50,13);printf("Ingrese Cedula del proveedor: ");
	scanf("%d", &cedulaBuscar);
	system("cls");
	printf("\n");
	for(i = 0; i < numproveedor; i++){
		if(cedulaBuscar == proveedor[i].cedula){
			mostrarproveedor(proveedor[i].id);
			return proveedor[i].id;
		}
	}
	gotoxy(50,14);printf("El proveedor no existe \n");
	system("pause");
	return -1;
}




void copiar(char cadena1[],char cadena2[]){
int contador=0;
for(int i=0;i<30;i++){
    if(cadena1[i]=='\n'){
        break;
    }
    contador++;
}
for(int i=0;i<contador;i++){
    cadena1[i]=cadena2[i];
}
}
