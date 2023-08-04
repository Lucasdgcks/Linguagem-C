#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char texto[300];
  char caractere;
  int cont = 0, tamanho, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, jota = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0 , w = 0, x = 0, y = 0, z = 0;

 
  scanf("%[^\n]s", texto);
  getchar(); // Consume the newline character

  tamanho = strlen(texto);
  for(int j = 0; j < tamanho; j++){
    texto[j] = tolower(texto[j]);
  }
  for(int jt = 0; jt < tamanho; jt++){
    if(texto[jt] == 'a'){
      a++;
    }if(texto[jt] == 'b'){
      b++;
    }if(texto[jt] == 'c'){
      c++;
    }if(texto[jt] == 'd'){
      d++;
    }if(texto[jt] == 'e'){
      e++;
    }if(texto[jt] == 'f'){
      f++;
    }if(texto[jt] == 'g'){
      g++;
    }if(texto[jt] == 'h'){
      h++;
    }if(texto[jt] == 'i'){
      i++;
    }if(texto[jt] == 'j'){
      jota++;
    }if(texto[jt] == 'k'){
      k++;
    }if(texto[jt] == 'l'){
      l++;
    }if(texto[jt] == 'm'){
      m++;
    }if(texto[jt] == 'n'){
      n++;
    }if(texto[jt] == 'o'){
      o++;
    }if(texto[jt] == 'p'){
      p++;
    }if(texto[jt] == 'q'){
      q++;
    }if(texto[jt] == 'r'){
      r++;
    }if(texto[jt] == 's'){
      s++;
    }if(texto[jt] == 't'){
      t++;
    }if(texto[jt] == 'u'){
      u++;
    }if(texto[jt] == 'v'){
      v++;
    }if(texto[jt] == 'w'){
      w++;
    }if(texto[jt] == 'x'){
      x++;
    }if(texto[jt] == 'y'){
      y++;
    }if(texto[jt] == 'z'){
      z++;
    }
  }

  if(a != 0){
    printf("a:%d\n", a);
  }if(b != 0){
    printf("b:%d\n", b);
  }if(c != 0){
    printf("c:%d\n", c);
  }if(d != 0){
    printf("d:%d\n", d);
  }if(e != 0){
    printf("e:%d\n", e);
  }if(f != 0){
    printf("f:%d\n", f);
  }if(g != 0){
    printf("g:%d\n", g);
  }if(h != 0){
    printf("h:%d\n", h);
  }if(i != 0){
    printf("i:%d\n", i);
  }if(jota != 0){
    printf("j:%d\n", jota);
  }if(k != 0){
    printf("k:%d\n", k);
  }if(l != 0){
    printf("l:%d\n", l);
  }if(m != 0){
    printf("m:%d\n", m);
  }if(n != 0){
    printf("n:%d\n", n);
  }if(o != 0){
    printf("o:%d\n", o);
  }if(p != 0){
    printf("p:%d\n", p);
  }if(q != 0){
    printf("q:%d\n", q);
  }if(r != 0){
    printf("r:%d\n", r);
  }if(s != 0){
    printf("s:%d\n", s);
  }if(t != 0){
    printf("t:%d\n", t);
  }if(u != 0){
    printf("u:%d\n", u);
  }if(v != 0){
    printf("v:%d\n", v);
  }if(w != 0){
    printf("w:%d\n", w);
  }if(x != 0){
    printf("x:%d\n", x);
  }if(y != 0){
    printf("y:%d\n", y);
  }if(z != 0){
    printf("z:%d\n", z);
  }
  
  return 0;
}
