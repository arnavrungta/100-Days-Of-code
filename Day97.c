/* Q147: Store employee data using fwrite() and read using fread() */
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee e={101,"Arnav",60000},r;
    FILE *fp=fopen("emp.dat","wb");
    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);

    fp=fopen("emp.dat","rb");
    fread(&r,sizeof(r),1,fp);
    fclose(fp);

    printf("%d %s %.2f",r.id,r.name,r.salary);
}
