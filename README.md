**FastCGI Developers Kit**

[https://fastcgi-archives.github.io/FastCGI_Developers_Kit_FastCGI.html](https://fastcgi-archives.github.io/FastCGI_Developers_Kit_FastCGI.html)

**Compile**

```sh
gcc -include /usr/local/include/fcgi_stdio.h main.c /usr/local/lib/libfcgi.a
```

**Porneste server pentru fcgi**


```sh
spawn-fcgi -p9001 -n $PWD/a.out
```

**Testeaza output**


```sh
cgi-fcgi -connect :9001 a.out
```