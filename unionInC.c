#include <stdio.h>
struct student {
char fname[50];
char lname[50];
float percentage;
int roll;
};
int main() {
struct student st={"nishan", "giri", 83.3333, 13};
strcpy(st.fname,"niharika");
//st.lname = "giri";
//st.percentage = 87.543;
//st.roll = 13;
printf("%d. %s %s\t%f", st.roll, st.fname, st.lname, st.percentage);
return 0;
}

