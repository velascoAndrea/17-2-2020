#include <iostream>

using namespace std;
int row,col,i,j;

int main()
{
    cout <<"Ingrese el numero de filas "<<endl;
    cin >>col;
    cout <<"Ingrese el numero de columnas "<<endl;
    cin >>row;

    if(col!=row){
       cout <<"La matriz debe de ser cuadrada"<<endl;
    }else{
        int matriz[row][col];
        for(i=0; i<row;i++){
            for(j=0; j<col;j++){
                cout<<"ingrese la cantidad fila "<< i <<" columna"<< j<<endl;
                cin>>matriz[i][j];
            }
        }


        //imprimir
        for(i=0; i<row;i++){
            for(j=0; j<col;j++){
                cout<<"\t"<<matriz[i][j];
            }
            cout<<endl;
        }

        int suma = 0;
        //primera diagonal
        for(i=0; i<row;i++){
            for(j=0; j<col;j++){
                if(i==j){
                    suma = suma+matriz[i][j];
                }
            }
        }
        //segunda diagonal
        int suma2=0;
        for(i=0; i<row;i++){
            for(j=0; j<col;j++){
                if(i+j==row-1){
                    suma2 = suma2+matriz[i][j];
                }
            }
        }
        cout<<"primera diagonal "<<suma<<endl;
        cout<<"segunda diagonal "<<suma2<<endl;

        int respuesta =  abs(suma-suma2);
        cout<<"--------------RESPUESTA--------------->>   "<<respuesta<<endl;

    }


    return 0;
}
