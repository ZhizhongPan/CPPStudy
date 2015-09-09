CC  = g++
C	= cpp
H	= h

CFLAGS = -g -W -Wall -Weffc++ -Wextra -pedantic -O0


HFILES = scorer.${H} game.${H}
OFILES = scorer.o game.o
PROJECT = main

${PROJECT}:	${PROJECT}.o ${OFILES}
	${CC} ${CFLAGS} -o ${PROJECT} ${PROJECT}.o ${OFILES} ${LDFLAGS}

${PROJECT}.o: ${PROJECT}.${C} ${HFILES}
	${CC} ${CFLAGS} -c ${PROJECT}.${C}

game.o: game.${C} game.${H} scorer.${H} 
	${CC} ${CFLAGS} -c game.${C}

scorer.o: scorer.${C} scorer.${H}
	${CC} ${CFLAGS} -c scorer.${C}

clean:
	rm *.o; rm ${PROJECT}
