long long int embedNumberInAnotherNumber(int n, int m, int p, int q) 
{ //n++; 
//n--; 
long int ao=~0; 
//ao=ao | 4294967295; 
long int lt=ao<<(q+1),rt=((1 << p)-1);
long int mask= (lt | rt); long int nd=n & mask, md=(m<<p); 
return (long long int)(nd | md); 
}