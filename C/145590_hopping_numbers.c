p,l,d,i=11;main(){for(char s[10];i<=1e9;){sprintf(s,"%d",++i);p=0;for(l=strlen(s);--l>0;){d=s[l]-s[l-1];if(!p)p=d;if(p^d|d<1)break;p=d;}if(!l)puts(s);}}