all: build/ArithmaHash build/CycleSpend build/README.build.md
	less build/README.build.md

build/ArithmaHash: ArithmaHash.c build
	gcc ArithmaHash.c -o build/ArithmaHash

build/CycleSpend: CycleSpend.c build
	gcc CycleSpend.c -o build/CycleSpend

build/README.build.md: README.md build
	cp README.md build/README.build.md -v

clean: build
	rm -rvf build

build:
	mkdir -pv build
