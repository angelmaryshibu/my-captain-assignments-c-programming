int main() {
    int a;
    printf("enter your mark");
    scanf("%d",&a);
    if(a>=85)
      printf("grade A");
    else if(a>=70)
      printf("grade B");
    else if(a>=55)
      printf("grade C");
    else if(a>=40)
      printf("grade D");
    else
      printf("grade F");
    return 0;
}
