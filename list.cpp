#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
void main()
{
int count=0;
char a[6];
fstream f;
f.open("list_of_words.txt",ios::out);

/*for(a[0]='a';a[0]<='z';a[0]++)
for(a[1]='a';a[1]<='z';a[1]++)
for(a[2]='a';a[2]<='z';a[2]++)
for(a[3]='a';a[3]<='z';a[3]++)
for(a[4]='a';a[4]<='z';a[4]++)
for(a[5]='a';a[5]<='z';a[5]++)
{
*/
randomize();
behind:
for(int i=0;i<10;i++)
{
a[i]=random(26)+97;
}

a[10]='\0';
f<<a<<"\n";
count++;
if(count==50000)
goto end;
else
goto behind;

end:
f.close();
}