#include<iostream>
#include<string>
using namespace std;
int main(){
    int number=0,asize;
    int times[26]={0};
    string a;
    char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    cin>>number;
    cin.ignore();
    for(int i=0;i<number;i++){
    	getline(cin,a);
    	asize=a.length();
 		for(int j=0;j<asize;j++){
 			if(a[j]=='A' || a[j]=='a'){
 				times[0]++;
			}
			else if(a[j]=='B' || a[j]=='b'){
 				times[1]++;
			}
			else if(a[j]=='C' || a[j]=='c'){
 				times[2]++;
			}
			else if(a[j]=='D' || a[j]=='d'){
 				times[3]++;
			}
			else if(a[j]=='E' || a[j]=='e'){
 				times[4]++;
			}
			else if(a[j]=='F' || a[j]=='f'){
 				times[5]++;
			}
			else if(a[j]=='G' || a[j]=='g'){
 				times[6]++;
			}
			else if(a[j]=='H' || a[j]=='h'){
 				times[7]++;
			}
			else if(a[j]=='I' || a[j]=='i'){
 				times[8]++;
			}
			else if(a[j]=='J' || a[j]=='j'){
 				times[9]++;
			}
			else if(a[j]=='K' || a[j]=='k'){
 				times[10]++;
			}
			else if(a[j]=='L' || a[j]=='l'){
 				times[11]++;
			}
			else if(a[j]=='M' || a[j]=='m'){
 				times[12]++;
			}
			else if(a[j]=='N' || a[j]=='n'){
 				times[13]++;
			}
			else if(a[j]=='O' || a[j]=='o'){
 				times[14]++;
			}
			else if(a[j]=='P' || a[j]=='p'){
 				times[15]++;
			}
			else if(a[j]=='Q' || a[j]=='q'){
 				times[16]++;
			}
			else if(a[j]=='R' || a[j]=='r'){
 				times[17]++;
			}
			else if(a[j]=='S' || a[j]=='s'){
 				times[18]++;
			}
			else if(a[j]=='T' || a[j]=='t'){
 				times[19]++;
			}
			else if(a[j]=='U' || a[j]=='u'){
 				times[20]++;
			}
			else if(a[j]=='V' || a[j]=='v'){
 				times[21]++;
			}
			else if(a[j]=='W' || a[j]=='w'){
 				times[22]++;
			}
			else if(a[j]=='X' || a[j]=='x'){
 				times[23]++;
			}
			else if(a[j]=='Y' || a[j]=='y'){
 				times[24]++;
			}
			else if(a[j]=='Z' || a[j]=='z'){
 				times[25]++;
			}   
		 }
    }
    for (int i = 0; i < 25; i++) {
        for (int j = i + 1; j < 26; j++) {
            if (times[i] < times[j] || 
               (times[i] == times[j] && b[i] > b[j])) {
                int tempTime = times[i];
                times[i] = times[j];
                times[j] = tempTime;

                char tempChar = b[i];
                b[i] = b[j];
                b[j] = tempChar;
            }
        }
    }
    for(int k=0;k<26;k++){
    	if(times[k]!=0){
		 	cout<<b[k]<<" ";
		 	cout<<times[k]<<endl;
		}
	}
}
