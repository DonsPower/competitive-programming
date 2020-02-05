#include <iostream>
 using namespace std;
void primos(int num){
	int primos_por_mostrar, n, d;
    int es_primo;
    primos_por_mostrar=num;

    n = 2;
    while (primos_por_mostrar > 0) {

        /* determinar si n es primo */
        es_primo = 1;
        for (d = 2; d < n; ++d) {
            if (n % d == 0) {
                es_primo = 0;
                break;
            }
        }

        /* mostrar el numero
         * y actualizar el contador */
        if (es_primo) {
        	if(n<num){
			
            printf("%d ", n);
            primos_por_mostrar--;
        	}
		}
        n++;
    }

    printf("\n");
}
int main(int argc, char* argv[])
{       int a, b, x, z, y=1, i=2;
            cin>>a;
            cin>>b;
            int max;
            if(a>b){
            	 max=a;
			}else{
				max=b;
			}
            if (a<b){x=a; z=b;} else {x=b; z=a;}
 
            do {
            if (x%i==0 && z%i==0){
            y=y*i;
            x=x/i; z=z/i;
            i=2;
            }
            else i++;
 
            }while(i<=x);
			cout <<y<<endl;
			primos(max);
			
 return 0;
}
