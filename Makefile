CFLAGS := -std=c99 \
	-Wall -Wextra -pedantic \
	${CFLAGS}

LDFLAGS = -lsystemd-daemon

all: envoyd envoy
envoyd: envoyd.o
envoy: envoy.o

clean:
	${RM} envoyd envoy *.o

.PHONY: clean install uninstall
