char* reverseString(char* s) {
   int size = strlen(s);
   char* re = malloc( (size+1) * sizeof(char));
   int i = 0 ; 
   for ( i = 0 ; i <size ; i++){
   		re[i] = s[size-1-i];
   }
   re[size] = '\0';
   return re;
}