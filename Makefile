CFLAGS+= -Wall
LDADD+= -lX11 
LDFLAGS=
EXEC=hcwm

PREFIX?= /usr
BINDIR?= $(PREFIX)/bin

CC=gcc

all: $(EXEC)

hcwm: hcwm.o
	$(CC) $(LDFLAGS) -Os -o $@ $+ $(LDADD)

install: all
	install -Dm 755 hcwm $(DESTDIR)$(BINDIR)/hcwm
	cp hcwmrc ~/.hcwmrc

clean:
	rm -f hcwm *.o
